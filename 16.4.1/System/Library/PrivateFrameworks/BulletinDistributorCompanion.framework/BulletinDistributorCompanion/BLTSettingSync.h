@class NSString, BLTSettingSyncSendQueue, BLTWatchKitAppList, NSMutableDictionary, BLTSectionInfoSyncCoordinator, BLTSectionInfoListBridgeProvider, NSObject, BLTSectionInfoList, BLTSyncSupportedAppList;
@protocol OS_dispatch_queue;

@interface BLTSettingSync : BLTSettingSyncInternal <BLTSectionInfoListDelegate, BLTSectionConfigurationDelegate, BLTSyncSupportedAppListDelegate> {
    BLTSectionInfoList *_sectionInfoList;
    BLTSettingSyncSendQueue *_settingSendQueue;
    unsigned long long _settingSyncSendQueueMaxConcurrentSendCount;
    BLTSectionInfoSyncCoordinator *_sectionInfoSyncCoordinator;
    NSObject<OS_dispatch_queue> *_sectionInfoSyncCoordinatorQueue;
    BOOL _initialSyncPerformed;
    BLTSectionInfoListBridgeProvider *_bridgeProvider;
    NSMutableDictionary *_reloadBBCompletions;
    BLTSyncSupportedAppList *_syncSupportedAppList;
    BLTWatchKitAppList *_watchKitAppList;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)universalSectionIDForSectionID:(id)a0;
- (void)observer:(id)a0 noteSectionParametersChanged:(id)a1 forSectionID:(id)a2;
- (void)spoolSectionInfoWithCompletion:(id /* block */)a0;
- (unsigned long long)_fetchSyncState;
- (void)sectionInfoList:(id)a0 receivedRemoveSectionWithSectionID:(id)a1 transaction:(id)a2;
- (void)_addReloadBBCompletion:(id /* block */)a0 sectionID:(id)a1;
- (void)_callAndRemoveReloadBBCompletion:(id /* block */)a0 sectionID:(id)a1;
- (void)_callReloadBBCompletionsForSectionID:(id)a0;
- (unsigned long long)_fetchSettingSyncMaxCountOverride;
- (id)_filteredAlertingSectionIDs:(id)a0;
- (void)_initSettingSyncSendQueueMaxConcurrentSendCount;
- (id)_overriddenSectionInfoForSectionID:(id)a0;
- (void)_sendSectionSubtypeParameterIcons:(id)a0 sectionID:(id)a1 waitForAcknowledgement:(BOOL)a2 spoolToFile:(BOOL)a3 andCompletion:(id /* block */)a4;
- (void)_sendSpooledSyncWithCompletion:(id /* block */)a0 withProgress:(id /* block */)a1;
- (void)_sendSyncSupportedAppListWithInstalled:(id)a0 removed:(id)a1;
- (void)_setupSectionInfoListWithCompletion:(id /* block */)a0;
- (void)_spoolInitialSync;
- (void)_storeSyncState:(unsigned long long)a0;
- (void)_updateAllBBSectionsWithCompletion:(id /* block */)a0 withProgress:(id /* block */)a1 spoolToFile:(BOOL)a2;
- (void)clearSectionInfoSentCache;
- (void)handleAllSyncComplete;
- (id)initWithSectionConfiguration:(id)a0 queue:(id)a1;
- (id)initWithSectionConfiguration:(id)a0 queue:(id)a1 watchKitAppList:(id)a2;
- (BOOL)isSectionInfoSentCacheEmpty;
- (void)makeAuthorizationPermanentForSectionID:(id)a0;
- (id)originalSettings;
- (id)overriddenSettings;
- (void)performInitialSyncWithProgress:(id /* block */)a0 completion:(id /* block */)a1;
- (unsigned long long)performSyncIfNeededForSectionID:(id)a0 gizmoSectionInfo:(id)a1 completion:(id /* block */)a2;
- (void)removeSectionWithSectionID:(id)a0;
- (void)sectionConfiguration:(id)a0 addedSectionIDs:(id)a1 removedSectionIDs:(id)a2;
- (void)sectionInfoList:(id)a0 makeAuthorizationPermanentForSectionID:(id)a1;
- (BOOL)sectionInfoList:(id)a0 override:(id)a1 shouldApplyToSectionInfoForSectionID:(id)a2;
- (void)sectionInfoList:(id)a0 receivedUpdatedSectionInfoForSectionID:(id)a1 transaction:(id)a2;
- (BOOL)sectionInfoListSectionIDHadDisplayedCriticalBulletins:(id)a0;
- (void)sendAllSectionInfoWithSpool:(BOOL)a0 completion:(id /* block */)a1;
- (void)sendOverrideOnly:(id)a0 sectionID:(id)a1 spoolToFile:(BOOL)a2;
- (void)sendRemoveSectionWithSectionID:(id)a0 sent:(id /* block */)a1;
- (void)sendSectionInfosWithSectionIDs:(id)a0 completion:(id /* block */)a1 spoolToFile:(BOOL)a2;
- (void)setNotificationsLevel:(unsigned long long)a0 sectionID:(id)a1 mirror:(BOOL)a2 fromRemote:(BOOL)a3;
- (void)setSectionInfo:(id)a0 completion:(id /* block */)a1;
- (void)setSectionInfo:(id)a0 keypaths:(id)a1 completion:(id /* block */)a2;
- (id)settingOverrides;
- (id)settingsDescriptionForSectionIDs:(id)a0;
- (void)syncSupportedAppListUpdated:(id)a0;

@end
