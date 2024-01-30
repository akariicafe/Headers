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
+ (void)resetRandomizedSelectionForDigestOnboardingSuggestion;
+ (void)changeNumPreviousDaysToCheckForNotificationProblemToNumDays:(unsigned long long)a0;
+ (void)removeRandomizedSelectionForDigestOnboardingSuggestion;

- (void)registerForOnboardingSuggestions;
- (void)_registerForLocaleChangeOnMainQueue;
- (void)_invalidateTriggerOnMainQueue;
- (id)notificationStreamPublisherForStartDate:(id)a0;
- (void)_registerForTriggerOnMainQueueAtHour:(long long)a0 minute:(long long)a1;
- (void)_suggestDigestOnboardingIfApplicableOnMainQueueGivenNumberOfActiveNotifications:(unsigned long long)a0 numberOfUniqueBundleIds:(unsigned long long)a1 minActive:(unsigned long long)a2 minUnique:(unsigned long long)a3;
- (void)unregisterForOnboardingSuggestions;
- (void)_registerForKVOChangesOnMainQueue;
- (void)_setProbabilityOfShowingDigestOnboardingToUser;
- (void)_unregisterForLocaleChangeOnMainQueue;
- (void)registerObserver:(id)a0;
- (void)dealloc;
- (void)_unregisterForKVOChangesOnMainQueue;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)clientDidRejectOnboardingSuggestion;
- (void)userAcceptedDigestOnboardingSuggestion:(id)a0;
- (void)averageNumberOfNotifications:(id /* block */)a0;
- (id)init;
- (void)_suggestDigestOnboardingIfApplicableOnMainQueue;
- (void)_registerForOnboardingSuggestionOnMainQueueWithThresholdForShowingDigestOnboardingSuggestionToSeedUsers:(double)a0 thresholdForShowingDigestOnboardingSuggestion:(double)a1;
- (BOOL)hasNotificationProblemForPreviousNumDays:(long long)a0;
- (void).cxx_destruct;
- (void)_handleLocaleChange;
- (id /* block */)_notificationStreamFilterBlock;

@end
