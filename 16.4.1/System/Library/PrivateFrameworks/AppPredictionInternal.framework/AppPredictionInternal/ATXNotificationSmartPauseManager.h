@class NSArray, ATXNotificationAndSuggestionDatastore, NSDate, ATXNotificationManagementMAConstants;

@interface ATXNotificationSmartPauseManager : NSObject {
    NSArray *_currentSuggestions;
    NSDate *_lastUpdatedDate;
    ATXNotificationAndSuggestionDatastore *_dataStore;
    ATXNotificationManagementMAConstants *_notificationManagementMAConstants;
}

- (void)refreshSuggestions;
- (id)smartPauseForNotification:(id)a0;
- (id)activeSuggestions;
- (BOOL)needRefresh;
- (id)currentSuggestionsGivenCandiateNotifications:(id)a0;
- (id)_queryResultIdentifierForBundleId:(id)a0 threadId:(id)a1;
- (id)initWithNotificationAndSuggestionDataStore:(id)a0;
- (id)init;
- (id)_dictionaryForQueryResults:(id)a0;
- (void).cxx_destruct;
- (id)_proposeSmartPauseForNotification:(id)a0 threadData:(id)a1 bundleData:(id)a2;

@end
