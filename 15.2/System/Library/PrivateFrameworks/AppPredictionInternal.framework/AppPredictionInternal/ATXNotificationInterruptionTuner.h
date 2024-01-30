@class ATXNotificationAndSuggestionDatastore, ATXDNDModeConfigurationClient, ATXNotificationManagementMAConstants;
@protocol ATXNotificationSettingsReaderProtocol, ATXModeEntityScorerProtocol;

@interface ATXNotificationInterruptionTuner : NSObject {
    id<ATXModeEntityScorerProtocol> _modesModels;
    id<ATXNotificationSettingsReaderProtocol> _notificationSettingsReader;
    ATXNotificationAndSuggestionDatastore *_dataStore;
    ATXDNDModeConfigurationClient *_modeConfigClient;
    ATXNotificationManagementMAConstants *_constants;
}

- (id)deliverySuggestionsForContacts:(id)a0 notifications:(id)a1 notificationEntities:(id)a2 mode:(unsigned long long)a3;
- (id)deliverySuggestionsForApps:(id)a0 notifications:(id)a1 notificationEntities:(id)a2 mode:(unsigned long long)a3;
- (id)activeNotificationSuggestionsForMode:(unsigned long long)a0;
- (id)activeNotificationSuggestionsForMode:(unsigned long long)a0 candidateNotifications:(id)a1;
- (BOOL)isAppEligibleForAddToMode:(id)a0;
- (BOOL)isContactSuggestionRelevantForNotification:(id)a0 tuningSuggestionForContact:(id)a1 mode:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)init;
- (long long)recommendedUrgencyForNotification:(id)a0 mode:(unsigned long long)a1;
- (id)initWithModesModels:(id)a0 notificationSettingsReader:(id)a1 dataStore:(id)a2;
- (id)tuningSuggestionForNotification:(id)a0 mode:(unsigned long long)a1;
- (id)dndModeUUID:(unsigned long long)a0;

@end
