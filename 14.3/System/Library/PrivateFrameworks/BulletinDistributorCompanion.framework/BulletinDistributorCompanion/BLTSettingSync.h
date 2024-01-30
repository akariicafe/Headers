@class NSString, BLTSettingSyncSendQueue, BLTWatchKitAppList, BLTSiriActionAppList, NSMutableDictionary, BLTSectionInfoSyncCoordinator, BLTSectionInfoListBridgeProvider, NSObject, BLTSectionInfoList;
@protocol OS_dispatch_queue;

@interface BLTSettingSync : BLTSettingSyncInternal <BLTSectionInfoListDelegate, BLTSectionConfigurationDelegate, BLTSiriActionAppListDelegate> {
    BLTSectionInfoList *_sectionInfoList;
    BLTSettingSyncSendQueue *_settingSendQueue;
    unsigned long long _settingSyncSendQueueMaxConcurrentSendCount;
    BLTSectionInfoSyncCoordinator *_sectionInfoSyncCoordinator;
    NSObject<OS_dispatch_queue> *_sectionInfoSyncCoordinatorQueue;
    BOOL _initialSyncPerformed;
    BLTSectionInfoListBridgeProvider *_bridgeProvider;
    NSMutableDictionary *_reloadBBCompletions;
    BLTSiriActionAppList *_siriActionAppList;
    BLTWatchKitAppList *_watchKitAppList;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)observer:(id)a0 noteSectionParametersChanged:(id)a1 forSectionID:(id)a2;
- (id)universalSectionIDForSectionID:(id)a0;
- (void)sendRemoveSectionWithSectionID:(id)a0 sent:(id /* block */)a1;
- (void)removeSectionWithSectionID:(id)a0;
- (void)siriActionAppListUpdated:(id)a0;
- (void)sectionConfiguration:(id)a0 addedSectionIDs:(id)a1 removedSectionIDs:(id)a2;
- (void)sendAllSectionInfoWithSpool:(BOOL)a0 completion:(id /* block */)a1;
- (void)spoolSectionInfoWithCompletion:(id /* block */)a0;
- (void)clearSectionInfoSentCache;
- (id)settingOverrides;
- (id)originalSettings;
- (id)overriddenSettings;
- (id)initWithSectionConfiguration:(id)a0 queue:(id)a1;
- (void)setNotificationsLevel:(unsigned long long)a0 sectionID:(id)a1 mirror:(BOOL)a2 fromRemote:(BOOL)a3;
- (id)_overriddenSectionInfoForSectionID:(id)a0;
- (void)setSectionInfo:(id)a0 completion:(id /* block */)a1;
- (BOOL)sectionInfoList:(id)a0 override:(id)a1 shouldApplyToSectionInfoForSectionID:(id)a2;
- (BOOL)sectionInfoListSectionIDHadDisplayedCriticalBulletins:(id)a0;
- (void)sectionInfoList:(id)a0 receivedUpdatedSectionInfoForSectionID:(id)a1 transaction:(id)a2;
- (void)sectionInfoList:(id)a0 makeAuthorizationPermanentForSectionID:(id)a1;
- (void)sectionInfoList:(id)a0 receivedRemoveSectionWithSectionID:(id)a1 transaction:(id)a2;
- (id)settingsDescriptionForSectionIDs:(id)a0;
- (id)initWithSectionConfiguration:(id)a0 queue:(id)a1 watchKitAppList:(id)a2;
- (void)sendSectionInfosWithSectionIDs:(id)a0 completion:(id /* block */)a1 spoolToFile:(BOOL)a2;
- (BOOL)isSectionInfoSentCacheEmpty;
- (void)performInitialSyncWithProgress:(id /* block */)a0 completion:(id /* block */)a1;
- (void)handleAllSyncComplete;
- (unsigned long long)performSyncIfNeededForSectionID:(id)a0 gizmoSectionInfo:(id)a1 completion:(id /* block */)a2;
- (void)_initSettingSyncSendQueueMaxConcurrentSendCount;
- (void)_spoolInitialSync;
- (void)_logNotificationSettings;
- (unsigned long long)_fetchSyncState;
- (void)_storeSyncState:(unsigned long long)a0;
- (unsigned long long)_fetchSettingSyncMaxCountOverride;
- (void)_updateAllBBSectionsWithCompletion:(id /* block */)a0 withProgress:(id /* block */)a1 spoolToFile:(BOOL)a2;
- (void)_sendSpooledSyncWithCompletion:(id /* block */)a0 withProgress:(id /* block */)a1;
- (void)_setupSectionInfoListWithCompletion:(id /* block */)a0;
- (void)_addReloadBBCompletion:(id /* block */)a0 sectionID:(id)a1;
- (void)_callAndRemoveReloadBBCompletion:(id /* block */)a0 sectionID:(id)a1;
- (id)_filteredAlertingSectionIDs:(id)a0;
- (void)_sendSiriAppListWithInstalled:(id)a0 removed:(id)a1;
- (void)sendOverrideOnly:(id)a0 sectionID:(id)a1 spoolToFile:(BOOL)a2;
- (void)makeAuthorizationPermanentForSectionID:(id)a0;
- (void)_sendSectionSubtypeParameterIcons:(id)a0 sectionID:(id)a1 waitForAcknowledgement:(BOOL)a2 spoolToFile:(BOOL)a3 andCompletion:(id /* block */)a4;
- (void)_callReloadBBCompletionsForSectionID:(id)a0;

@end
