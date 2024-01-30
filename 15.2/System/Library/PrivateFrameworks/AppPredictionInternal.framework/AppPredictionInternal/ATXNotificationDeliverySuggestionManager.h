@class ATXNotificationAndSuggestionDatastore, ATXNotificationSuggestionBiomeStream, ATXSendMessagesToDigestManager, ATXNotificationsSuggestion, DNDStateService, ATXSendToDigestManager, ATXNotificationSmartPauseManager, ATXUrgencyTuningManager, ATXNotificationManagementMAConstants;

@interface ATXNotificationDeliverySuggestionManager : NSObject {
    ATXNotificationSmartPauseManager *_smartPauseManager;
    ATXUrgencyTuningManager *_urgencyTuningManager;
    ATXSendMessagesToDigestManager *_sendMessagesToDigestManager;
    ATXSendToDigestManager *_sendToDigestManager;
    ATXNotificationAndSuggestionDatastore *_dataStore;
    ATXNotificationSuggestionBiomeStream *_biomeStream;
    ATXNotificationManagementMAConstants *_constants;
    DNDStateService *_dndStateService;
}

@property (readonly, nonatomic) ATXNotificationsSuggestion *quietingSuggester;
@property (readonly, nonatomic) ATXNotificationsSuggestion *promotingSuggester;
@property (readonly, nonatomic) ATXNotificationsSuggestion *rttOutcomeLogger;

- (unsigned long long)currentMode;
- (void)suggestionForNotification:(id)a0 reply:(id /* block */)a1;
- (id)maxOneSuggestionFromSuggestions:(id)a0;
- (id)currentActiveSuggestions;
- (void)logSuggestionsToBiome:(id)a0;
- (BOOL)digestHasBeenShownEnoughTimes;
- (void).cxx_destruct;
- (id)init;
- (id)deduplicatedSuggestions:(id)a0;
- (BOOL)shouldShowSuggestion:(id)a0 withFeedback:(id)a1;
- (id)filteredSuggestionsBasedOnFeedback:(id)a0;
- (unsigned long long)getScoreForSuggestion:(id)a0;
- (id)initWithRecorder:(id)a0 dataStore:(id)a1 suggestionBiomeStream:(id)a2;
- (id)initWithRecorder:(id)a0;
- (void)activeSuggestionsWithReply:(id /* block */)a0;

@end
