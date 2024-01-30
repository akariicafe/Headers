@class _PASLock;

@interface _ATXDuetHelper : NSObject {
    _PASLock *_deletionHandlerLock;
    _PASLock *_rootOfAppDataLock;
}

+ (id)sharedInstance;

- (id)getAppLaunchesBetweenStartDate:(id)a0 endDate:(id)a1;
- (id)getActivityAndIntentEventsBetweenStartDate:(id)a0 endDate:(id)a1 ascending:(BOOL)a2;
- (id)getActivityEventFromDKEvent:(id)a0 bundleIdFilter:(id)a1;
- (id)getFirstAppLaunchBetweenStartDate:(id)a0 endDate:(id)a1 bundleIdFilter:(id)a2;
- (void)_handleTombstoneCreationWithNotification:(id)a0;
- (id)init;
- (id)getActivityEventsBetweenStartDate:(id)a0 endDate:(id)a1 bundleIdFilter:(id)a2;
- (id)_getIntentEventForSource:(long long)a0 startDate:(id)a1 endDate:(id)a2 otherPredicates:(id)a3 bundleIdFilter:(id)a4 allowMissingTitles:(BOOL)a5 limit:(unsigned long long)a6;
- (void).cxx_destruct;
- (id)getIntentEventForUUID:(id)a0 forSource:(long long)a1;
- (void)_computeRootOfAppDataWithLockWitness:(id)a0;
- (void)dealloc;
- (id)getRootOfAppSignalsFor:(id)a0 contentKey:(id)a1;
- (id)getMostRecentINPlayMediaIntentEvent;
- (id)getActivityAndIntentEventsFromLastMonth;
- (id)getRelevantShortcutsToBundleIdDictBetweenStartDate:(id)a0 endDate:(id)a1 limit:(unsigned long long)a2;
- (void)enumerateActivityAndIntentEventsFromLastMonthWithLimit:(unsigned long long)a0 nsuaLimit:(unsigned long long)a1 ascending:(BOOL)a2 callback:(id /* block */)a3;
- (id)getIntentEventsBetweenStartDate:(id)a0 endDate:(id)a1 bundleIdFilter:(id)a2 forSource:(long long)a3 allowMissingTitles:(BOOL)a4;
- (void)_enumerateBatchesInDuetStream:(id)a0 startDate:(id)a1 endDate:(id)a2 otherPredicates:(id)a3 limit:(unsigned long long)a4 batchSize:(unsigned long long)a5 ascending:(BOOL)a6 block:(id /* block */)a7;
- (id)getScreenTransitionsBetweenStartDate:(id)a0 endDate:(id)a1;
- (unsigned long long)getDocFreqFor:(id)a0 contentKey:(id)a1;
- (id)_queryDuetStreamUnbatched:(id)a0 startDate:(id)a1 endDate:(id)a2 ascending:(BOOL)a3 otherPredicates:(id)a4 limit:(unsigned long long)a5 offset:(unsigned long long)a6;
- (void)enumerateBatchedEligibleActivityDeletionUUIDsAndDatesBetweenStartDate:(id)a0 endDate:(id)a1 batchSize:(unsigned long long)a2 block:(id /* block */)a3;
- (unsigned long long)numIntentEventsBetweenStartDate:(id)a0 endDate:(id)a1 limit:(unsigned long long)a2;
- (unsigned long long)_countDuetStream:(id)a0 startDate:(id)a1 endDate:(id)a2 otherPredicates:(id)a3 limit:(unsigned long long)a4;
- (id)getFirstActivityEventBetweenStartDate:(id)a0 endDate:(id)a1 bundleIdFilter:(id)a2;
- (void)_enumerateActivityEventsBetweenStartDate:(id)a0 endDate:(id)a1 bundleIdFilter:(id)a2 limit:(unsigned long long)a3 ascending:(BOOL)a4 callback:(id /* block */)a5;
- (id)getMicroLocationsFromLastMonth;
- (id)getSortedActivityAndIntentEventsBetweenStartDate:(id)a0 endDate:(id)a1 bundleIdFilter:(id)a2 comparator:(id /* block */)a3;
- (id)getActivityEventsBetweenStartDate:(id)a0 endDate:(id)a1;
- (id)getMostRecentMicroLocation;
- (id)getAppLaunchesBetweenStartDate:(id)a0 endDate:(id)a1 bundleIdFilter:(id)a2 limit:(unsigned long long)a3;
- (id)getLastAppLaunchBetweenStartDate:(id)a0 endDate:(id)a1 bundleIdFilter:(id)a2;
- (void)_enumerateIntentEventsForSource:(long long)a0 startDate:(id)a1 endDate:(id)a2 otherPredicates:(id)a3 bundleIdFilter:(id)a4 allowMissingTitles:(BOOL)a5 limit:(unsigned long long)a6 ascending:(BOOL)a7 callback:(id /* block */)a8;
- (id)getFirstSortedActivityOrIntentEventBetweenStartDate:(id)a0 endDate:(id)a1 bundleIdFilter:(id)a2 comparator:(id /* block */)a3;
- (void)_enumerateBatchesInDuetStream:(id)a0 startDate:(id)a1 endDate:(id)a2 otherPredicates:(id)a3 limit:(unsigned long long)a4 ascending:(BOOL)a5 block:(id /* block */)a6;
- (void)enumerateBatchedIntentDeletionUUIDsAndDatesBetweenStartdate:(id)a0 endDate:(id)a1 batchSize:(unsigned long long)a2 block:(id /* block */)a3;
- (double)maxAgeOfPreviousDonationToConsider;
- (void)deregisterDeletionHandlerWithToken:(unsigned long long)a0;
- (id)getIntentEventsBetweenStartDate:(id)a0 endDate:(id)a1 forSource:(long long)a2;
- (id)_queryDuetStream:(id)a0 startDate:(id)a1 endDate:(id)a2 otherPredicates:(id)a3 limit:(unsigned long long)a4;
- (unsigned long long)registerDeletionHandler:(id /* block */)a0 queue:(id)a1;
- (id)getFirstIntentEventBetweenStartDate:(id)a0 endDate:(id)a1 bundleIdFilter:(id)a2 forSource:(long long)a3;
- (id)getAppLaunchesFromOneMonth;
- (unsigned long long)numActivityEventsBetweenStartDate:(id)a0 endDate:(id)a1 limit:(unsigned long long)a2;
- (void)enumerateActivityAndIntentEventsBetweenStartDate:(id)a0 endDate:(id)a1 intentLimit:(unsigned long long)a2 nsuaLimit:(unsigned long long)a3 ascending:(BOOL)a4 callback:(id /* block */)a5;
- (id)getIntentEventFromDKEvent:(id)a0 source:(long long)a1 bundleIdFilter:(id)a2 allowMissingTitles:(BOOL)a3 intentsToKeep:(id)a4;

@end
