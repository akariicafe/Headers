@class ATXNotificationAndSuggestionDatastore;

@interface ATXTurnOffNotificationsForAppSuggestionManager : NSObject {
    ATXNotificationAndSuggestionDatastore *_dataStore;
}

- (id)initWithDataStore:(id)a0;
- (id)activeSuggestions;
- (id)init;
- (void).cxx_destruct;

@end
