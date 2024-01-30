@class ATXTurnOffNotificationsForAppSuggestionManager, ATXNotificationAndSuggestionDatastore, ATXNotificationsSuggestion, ATXSendMessagesToDigestManager, ATXNotificationSuggestionBiomeStream, DNDStateService, ATXSendToDigestManager, ATXNotificationSmartPauseManager, ATXUrgencyTuningManager, ATXNotificationManagementMAConstants, ATXChinSuggestionThrottlingManager;

@interface ATXNotificationDeliverySuggestionManager : NSObject {
    ATXNotificationSmartPauseManager *_smartPauseManager;
    ATXUrgencyTuningManager *_urgencyTuningManager;
    ATXSendMessagesToDigestManager *_sendMessagesToDigestManager;
    ATXSendToDigestManager *_sendToDigestManager;
    ATXTurnOffNotificationsForAppSuggestionManager *_turnOffNotificationsForAppManager;
    ATXNotificationAndSuggestionDatastore *_dataStore;
    ATXNotificationSuggestionBiomeStream *_biomeStream;
    ATXNotificationManagementMAConstants *_constants;
    DNDStateService *_dndStateService;
    ATXChinSuggestionThrottlingManager *_throttlingManager;
}

@property (readonly, nonatomic) ATXNotificationsSuggestion *quietingSuggester;
@property (readonly, nonatomic) ATXNotificationsSuggestion *promotingSuggester;
@property (readonly, nonatomic) ATXNotificationsSuggestion *rttOutcomeLogger;

- (BOOL)shouldShowSuggestion:(id)a0 withFeedback:(id)a1;
- (unsigned long long)currentMode;
- (id)currentActiveSuggestions;
- (id)filteredSuggestionsBasedOnFeedback:(id)a0;
- (void)suggestionForNotification:(id)a0 reply:(id /* block */)a1;
- (BOOL)digestHasBeenShownEnoughTimes;
- (void)activeSuggestionsWithReply:(id /* block */)a0;
- (void)logSuggestionsToBiome:(id)a0;
- (void)_activeSuggestionsWithReply:(id /* block */)a0;
- (id)initWithDataStore:(id)a0 suggestionBiomeStream:(id)a1;
- (id)init;
- (id)maxOneSuggestionFromSuggestions:(id)a0;
- (id)deduplicatedSuggestions:(id)a0;
- (unsigned long long)getScoreForSuggestion:(id)a0;
- (void).cxx_destruct;

@end
