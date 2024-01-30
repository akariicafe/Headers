@interface ATXClientDuetHelper : NSObject

+ (id)sharedInstance;

- (id)getActivityEventsBetweenStartDate:(id)a0 endDate:(id)a1 bundleIdFilter:(id)a2;
- (id)getActivityEventsBetweenStartDate:(id)a0 endDate:(id)a1;
- (id)getIntentEventsBetweenStartDate:(id)a0 endDate:(id)a1 forSource:(long long)a2;
- (id)_queryDuetStream:(id)a0 startDate:(id)a1 endDate:(id)a2 otherPredicates:(id)a3 limit:(unsigned long long)a4;
- (id)getIntentEventsBetweenStartDate:(id)a0 endDate:(id)a1 bundleIdFilter:(id)a2 forSource:(long long)a3;
- (id)_getIntentEventForSource:(long long)a0 startDate:(id)a1 endDate:(id)a2 otherPredicates:(id)a3 bundleIdFilter:(id)a4 limit:(unsigned long long)a5;
- (void)_enumerateBatchesInDuetStream:(id)a0 startDate:(id)a1 endDate:(id)a2 otherPredicates:(id)a3 limit:(unsigned long long)a4 block:(id /* block */)a5;
- (id)_queryDuetStreamUnbatched:(id)a0 startDate:(id)a1 endDate:(id)a2 otherPredicates:(id)a3 limit:(unsigned long long)a4;
- (id)getIntentEventsBetweenStartDate:(id)a0 endDate:(id)a1;

@end
