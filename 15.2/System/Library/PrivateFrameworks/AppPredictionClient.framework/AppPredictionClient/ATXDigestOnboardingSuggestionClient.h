@class NSTimer, NSHashTable, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface ATXDigestOnboardingSuggestionClient : NSObject {
    NSHashTable *_observers;
    NSUserDefaults *_userDefaults;
    NSObject<OS_dispatch_queue> *_queue;
    NSTimer *_trigger;
    BOOL _hasRegisteredKVO;
}

+ (id)sharedInstance;
+ (void)resetDigestOnboardingSuggestionsAtHour:(id)a0 minute:(id)a1;
+ (void)removeRandomizedSelectionForDigestOnboardingSuggestion;
+ (void)resetRandomizedSelectionForDigestOnboardingSuggestion;
+ (void)changeNumPreviousDaysToCheckForNotificationProblemToNumDays:(unsigned long long)a0;

- (void)registerObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)_setProbabilityOfShowingDigestOnboardingToUser;
- (void)_registerForKVOChangesOnMainQueue;
- (void)_registerForLocaleChangeOnMainQueue;
- (void)_registerForOnboardingSuggestionOnMainQueueWithThresholdForShowingDigestOnboardingSuggestionToSeedUsers:(double)a0 thresholdForShowingDigestOnboardingSuggestion:(double)a1;
- (void)_registerForTriggerOnMainQueueAtHour:(long long)a0 minute:(long long)a1;
- (void)_suggestDigestOnboardingIfApplicableOnMainQueue;
- (void)_unregisterForLocaleChangeOnMainQueue;
- (void)_unregisterForKVOChangesOnMainQueue;
- (void)_invalidateTriggerOnMainQueue;
- (BOOL)hasNotificationProblemForPreviousNumDays:(long long)a0;
- (void)_suggestDigestOnboardingIfApplicableOnMainQueueGivenNumberOfActiveNotifications:(unsigned long long)a0 numberOfUniqueBundleIds:(unsigned long long)a1 minActive:(unsigned long long)a2 minUnique:(unsigned long long)a3;
- (void)unregisterForOnboardingSuggestions;
- (id)notificationStreamPublisherForStartDate:(id)a0;
- (void)_handleLocaleChange;
- (void)registerForOnboardingSuggestions;
- (void)averageNumberOfNotifications:(id /* block */)a0;
- (void)userAcceptedDigestOnboardingSuggestion:(id)a0;
- (void)clientDidRejectOnboardingSuggestion;

@end
