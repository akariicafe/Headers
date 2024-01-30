@class ATXNotificationAndSuggestionDatastore, ATXNotificationManagementMAConstants;

@interface ATXUrgencyTuningManager : NSObject {
    ATXNotificationAndSuggestionDatastore *_dataStore;
    ATXNotificationManagementMAConstants *_notificationManagementMAConstants;
}

- (id)initWithDataStore:(id)a0;
- (id)urgencyTuningSuggestion:(id)a0 uuid:(id)a1 engagementStatus:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (id)activeSuggestions;

@end
