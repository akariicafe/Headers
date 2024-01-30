@class NSString, ATXDNDModeConfigurationClient, UNNotificationSettingsCenter;

@interface ATXNotificationSettingsReader : NSObject <ATXNotificationSettingsReaderProtocol> {
    ATXDNDModeConfigurationClient *_modeConfigClient;
    UNNotificationSettingsCenter *_notificationSettingsCenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)notificationDigestDeliveryTimes;
- (BOOL)appIsOnAllowList:(id)a0 dndModeUUID:(id)a1;
- (BOOL)contactIsOnAllowList:(id)a0 dndModeUUID:(id)a1;
- (id)modeConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)doesAppSendNotificationsToDigest:(id)a0;
- (id)allConfiguredDigestApps;
- (BOOL)digestSetupComplete;
- (BOOL)doesAppAllowMessageBreakthrough:(id)a0;
- (id)numConfiguredModes;
- (id)initWithModeConfigurationClient:(id)a0 notificationSettingsCenter:(id)a1;

@end
