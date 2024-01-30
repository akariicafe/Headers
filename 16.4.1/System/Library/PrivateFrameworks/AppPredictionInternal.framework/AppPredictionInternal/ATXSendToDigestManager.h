@class ATXNotificationAndSuggestionDatastore, ATXNotificationManagementMAConstants;
@protocol ATXNotificationSettingsReaderProtocol;

@interface ATXSendToDigestManager : NSObject {
    ATXNotificationAndSuggestionDatastore *_dataStore;
    id<ATXNotificationSettingsReaderProtocol> _notificationSettingsReader;
    ATXNotificationManagementMAConstants *_notificationManagementMAConstants;
}

- (id)_proposeSendToDigestForNotification:(id)a0 bundleData:(id)a1;
- (BOOL)bundleIdEligibleForSendToDigestSuggestions:(id)a0;
- (id)initWithDataStore:(id)a0;
- (id)activeSuggestions;
- (id)currentSuggestionsGivenCandiateNotifications:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
