@class NSArray, ATXNotificationAndSuggestionDatastore, NSDate, ATXNotificationManagementMAConstants;

@interface ATXNotificationSmartPauseManager : NSObject {
    NSArray *_currentSuggestions;
    NSDate *_lastUpdatedDate;
    ATXNotificationAndSuggestionDatastore *_dataStore;
    ATXNotificationManagementMAConstants *_notificationManagementMAConstants;
}

- (id)initWithNotificationAndSuggestionDataStore:(id)a0;
- (void)refreshSuggestions;
- (BOOL)needRefresh;
- (id)_proposeSmartPauseForNotification:(id)a0 threadData:(id)a1 bundleData:(id)a2;
- (id)currentSuggestionsGivenCandiateNotifications:(id)a0;
- (id)_queryResultIdentifierForBundleId:(id)a0 threadId:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)activeSuggestions;
- (id)_dictionaryForQueryResults:(id)a0;
- (id)smartPauseForNotification:(id)a0;

@end
