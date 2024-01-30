@class ATXDNDModeConfigurationClient, ATXNotificationManagementMAConstants;
@protocol ATXNotificationSettingsReaderProtocol, ATXModeEntityScorerProtocol;

@interface ATXInterruptionManager : NSObject {
    id<ATXModeEntityScorerProtocol> _modesModels;
    id<ATXNotificationSettingsReaderProtocol> _notificationSettingsReader;
    ATXDNDModeConfigurationClient *_modeConfigurationClient;
    ATXNotificationManagementMAConstants *_notificationManagementConstants;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithModesModels:(id)a0 notificationSettingsReader:(id)a1 modeConfigurationClient:(id)a2;
- (id)recommendedAllowedContactsForMode:(unsigned long long)a0;
- (id)recommendedAllowedAppsForMode:(unsigned long long)a0;
- (void)recommendedAllowedContactsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)recommendedAllowedAppsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (id)recommendedAllowedContactsForDNDModeSemanticType:(long long)a0;
- (id)recommendedAllowedAppsForDNDModeSemanticType:(long long)a0;
- (id)recommendedAllowedContactsForDNDMode:(id)a0;
- (id)recommendedAllowedAppsForDNDMode:(id)a0;
- (void)recommendedAllowedContactsForDNDModeSemanticType:(long long)a0 reply:(id /* block */)a1;
- (void)recommendedAllowedAppsForDNDModeSemanticType:(long long)a0 reply:(id /* block */)a1;
- (void)recommendedAllowedContactsForDNDMode:(id)a0 reply:(id /* block */)a1;
- (void)recommendedAllowedAppsForDNDMode:(id)a0 reply:(id /* block */)a1;

@end
