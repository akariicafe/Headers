@class BLTRemoteGlobalSettingsSyncServer, NSString, BLTWristStateObserver, BLTSectionConfiguration, BLTMuteSync, BBObserver, BBSettingsGateway, BLTSpokenSettingSync, BLTSettingSyncServer;

@interface BLTSettingSyncInternal : NSObject <BBObserverDelegate, BLTSettingSyncingClient> {
    BLTWristStateObserver *_wristStateObserver;
}

@property (retain, nonatomic) BLTRemoteGlobalSettingsSyncServer *remoteGlobalSettingsSyncServer;
@property (retain, nonatomic) BBSettingsGateway *settingsGateway;
@property (retain, nonatomic) BLTMuteSync *muteSync;
@property (retain, nonatomic) BLTSettingSyncServer *connection;
@property (readonly, nonatomic) BOOL isWristDetectDisabled;
@property (readonly, nonatomic) BLTSectionConfiguration *sectionConfiguration;
@property (retain, nonatomic) BLTSpokenSettingSync *spokenSettingSync;
@property (retain, nonatomic) BBObserver *observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connect;
- (void)updateGlobalSettings:(id)a0;
- (void)observer:(id)a0 updateGlobalSettings:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)disableStandaloneTestMode;
- (void)enableStandaloneTestModeWithMinimumSendDelay:(unsigned long long)a0 maximumSendDelay:(unsigned long long)a1 minimumResponseDelay:(unsigned long long)a2 maximumResponseDelay:(unsigned long long)a3;
- (void)removeSectionWithSectionID:(id)a0;
- (void)transportUpdateRemoteGlobalSpokenSettingEnabled:(BOOL)a0 date:(id)a1;
- (id)initWithSectionConfiguration:(id)a0 queue:(id)a1;
- (void)setNotificationsLevel:(unsigned long long)a0 sectionID:(id)a1 mirror:(BOOL)a2 fromRemote:(BOOL)a3;
- (unsigned long long)willNanoPresentNotificationForSectionID:(id)a0 subsectionIDs:(id)a1 subtype:(long long)a2 category:(id)a3 ignoresDowntime:(BOOL)a4 isCritical:(BOOL)a5;
- (id)_overriddenSectionInfoForSectionID:(id)a0;
- (void)setSectionInfo:(id)a0 completion:(id /* block */)a1;
- (void)setSectionSubtypeParametersIcon:(id)a0 forSectionID:(id)a1 forSubtypeID:(long long)a2;
- (void)setNotificationsLevel:(unsigned long long)a0 sectionID:(id)a1 mirror:(BOOL)a2;
- (void)setNotificationsGrouping:(int)a0 sectionID:(id)a1;
- (void)setNotificationsSoundEnabled:(int)a0 sectionID:(id)a1;
- (void)setNotificationsCriticalAlertEnabled:(int)a0 sectionID:(id)a1;
- (void)setSectionInfo:(id)a0 keypaths:(id)a1 completion:(id /* block */)a2;
- (void)enableNotifications:(BOOL)a0 sectionID:(id)a1 mirror:(BOOL)a2;
- (unsigned long long)willNanoPresentNotificationForSectionID:(id)a0 subsectionIDs:(id)a1 subtype:(long long)a2;

@end
