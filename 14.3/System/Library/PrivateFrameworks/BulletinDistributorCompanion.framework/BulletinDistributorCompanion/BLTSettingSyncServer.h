@class NSString, BLTPreviouslySentMessageStore, BLTSettingsSendSerializerPassthrough;
@protocol BLTSettingSyncingClient;

@interface BLTSettingSyncServer : BLTRemoteObject <BLTSettingsSendSerializerDelegate, BLTSettingSyncing> {
    BLTSettingsSendSerializerPassthrough *_settingSendSerializer;
}

@property (retain, nonatomic) BLTPreviouslySentMessageStore *sectionInfoPreviouslySentMessageStore;
@property (retain, nonatomic) BLTPreviouslySentMessageStore *sectionSubtypeParametersIconsPreviouslySentMessageStore;
@property (weak, nonatomic) id<BLTSettingSyncingClient> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_handleResponse:(id)a0;
- (void)registerProtobufHandlers;
- (void)handleFileURL:(id)a0 extraMetadata:(id)a1;
- (void)removeSectionWithSectionID:(id)a0;
- (void)sendRemoteGlobalSpokenSettingEnabled:(BOOL)a0 date:(id)a1;
- (void)clearSectionInfoSentCache;
- (void)setSectionInfo:(id)a0 completion:(id /* block */)a1;
- (void)setSectionSubtypeParametersIcon:(id)a0 forSectionID:(id)a1 forSubtypeID:(long long)a2;
- (void)setNotificationsLevel:(unsigned long long)a0 sectionID:(id)a1 mirror:(BOOL)a2;
- (void)setNotificationsGrouping:(int)a0 sectionID:(id)a1;
- (void)setNotificationsSoundEnabled:(int)a0 sectionID:(id)a1;
- (void)setNotificationsCriticalAlertEnabled:(int)a0 sectionID:(id)a1;
- (BOOL)isSectionInfoSentCacheEmpty;
- (void)setSectionInfo:(id)a0 withQueue:(id)a1 withSent:(id /* block */)a2 withAcknowledgement:(id /* block */)a3 spoolToFile:(BOOL)a4;
- (void)setSectionSubtypeParametersIcon:(id)a0 forSectionID:(id)a1 forSubtypeID:(long long)a2 withQueue:(id)a3 withSent:(id /* block */)a4 withAcknowledgement:(id /* block */)a5 spoolToFile:(BOOL)a6;
- (void)removeSectionWithSectionID:(id)a0 sent:(id /* block */)a1;
- (void)sendSpooledRequestsNowWithSent:(id /* block */)a0 withAcknowledgement:(id /* block */)a1;
- (void)setNotificationsLevel:(unsigned long long)a0 sectionID:(id)a1 mirror:(BOOL)a2 spoolToFile:(BOOL)a3;
- (void)setNotificationsGrouping:(int)a0 sectionID:(id)a1 spoolToFile:(BOOL)a2;
- (void)removeSectionInfoSentCacheForSectionID:(id)a0;
- (void)handleSetSectionInfoRequest:(id)a0;
- (void)handleSetSectionSubtypeParametersIconRequest:(id)a0;
- (void)handleRemoveSectionRequest:(id)a0;
- (void)handleSetNotificationsAlertLevelRequest:(id)a0;
- (void)handleSetNotificationsGroupingRequest:(id)a0;
- (void)handleSetNotificationsSoundRequest:(id)a0;
- (void)handleSetNotificationsCriticalAlertRequest:(id)a0;
- (void)handleSetRemoteGlobalSpokenSettingEnabledRequest:(id)a0;
- (void)handleSetSectionInfoResponse:(id)a0;
- (void)handleSetSectionSubtypeParametersIconResponse:(id)a0;

@end
