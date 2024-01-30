@class NSDate, NSString, NSObject;
@protocol OS_dispatch_queue, _CPLScheduledOverrideDelegate, OS_dispatch_source;

@interface _CPLScheduledOverride : NSObject {
    NSObject<OS_dispatch_source> *_timer;
    NSString *_expirationDateStorageKey;
    NSString *_overrideReasonKey;
}

@property (readonly, nonatomic) unsigned long long budget;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) unsigned long long reason;
@property (readonly, nonatomic) NSDate *endDate;
@property (weak, nonatomic) id<_CPLScheduledOverrideDelegate> delegate;
@property (readonly, nonatomic) NSString *status;

+ (double)nextTimeIntervalForOverridingBudget:(unsigned long long)a0 withReason:(unsigned long long)a1;
+ (id)_expirationDateStorageKeyForBudget:(unsigned long long)a0;
+ (id)budgetOverrideReasonStorageKeyForBudget:(unsigned long long)a0;
+ (BOOL)isBudgetTypeSupportedForProgressiveOverriding:(unsigned long long)a0 withReason:(unsigned long long)a1;
+ (id)currentBudgetOverrideTimeIntervalStorageKeyForBudget:(unsigned long long)a0;
+ (double)nextTimeIntervalToUseGivenCurrent:(double)a0 expiryDate:(id)a1;
+ (unsigned long long)_systemBudgetForBudgetKey:(id)a0;
+ (id)currentBudgetOverrideTimeIntervalExpiryDateStorageKeyForBudget:(unsigned long long)a0;

- (id)initWithBudget:(unsigned long long)a0 withReason:(unsigned long long)a1 queue:(id)a2;
- (BOOL)scheduleEndFromPersistedOverride;
- (void)_scheduleEndWithTimeInterval:(double)a0;
- (void)cancel;
- (BOOL)scheduleEndOfOverride;
- (void).cxx_destruct;
- (void)resetHeuristics;

@end
