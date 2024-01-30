@class ATXNotificationAndSuggestionDatastore, UNNotificationSettingsCenter, ATXNotificationManagementMAConstants;
@protocol ATXNotificationSettingsReaderProtocol;

@interface ATXSendMessagesToDigestManager : NSObject {
    ATXNotificationAndSuggestionDatastore *_dataStore;
    id<ATXNotificationSettingsReaderProtocol> _notificationSettingsReader;
    UNNotificationSettingsCenter *_notificationCenter;
    ATXNotificationManagementMAConstants *_notificationManagementMAConstants;
}

- (id)sendMessagesToDigestSuggestion:(id)a0 uuid:(id)a1 engagementStatus:(id)a2;
- (id)initWithDataStore:(id)a0;
- (id)activeSuggestions;
- (BOOL)bundleIdIsEligibleForSendMessagesToDigestSuggestions:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
