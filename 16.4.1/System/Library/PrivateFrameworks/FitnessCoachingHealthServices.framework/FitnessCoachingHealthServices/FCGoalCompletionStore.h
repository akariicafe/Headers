@class NSDictionary, HDProfile;

@interface FCGoalCompletionStore : NSObject {
    NSDictionary *_goalTypesToNotifyByActivitySummaryIndex;
    HDProfile *_profile;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
}

- (id)initWithProfile:(id)a0;
- (id)_trimOldGoalCompletions:(id)a0 index:(long long)a1;
- (id)goalTypesToNotifyByActivitySummaryIndex;
- (id)_goalCompletionByActivitySummaryIndex;
- (void)_setGoalTypesToNotifyByActivitySummaryIndex:(id)a0;
- (id)allGoalTypesMetForActivitySummaryIndex:(long long)a0;
- (void)addGoalTypeToNotify:(long long)a0 activitySummaryIndex:(long long)a1;
- (void)_setGoalTypesMet:(unsigned long long)a0 forActivitySummaryIndex:(long long)a1;
- (unsigned long long)_goalTypesMetForActivitySummaryIndex:(long long)a0;
- (BOOL)isDailyGoalTypeMet:(long long)a0 activitySummaryIndex:(long long)a1;
- (void)addGoalTypeToDailyGoalTypesMet:(long long)a0 activitySummaryIndex:(long long)a1;
- (void)addDailyGoalTypePreviouslyMet:(long long)a0 activitySummaryIndex:(long long)a1;
- (void)_setGoalCompletionByActivitySummaryIndex:(id)a0;
- (void)removeGoalTypesToNotify:(id)a0 activitySummaryIndex:(long long)a1;
- (long long)_activitySummaryIndexForDate:(id)a0;
- (id)_userDefaultsDomain;
- (void).cxx_destruct;
- (id)goalTypesToNotifyForActivitySummaryIndex:(long long)a0;

@end
