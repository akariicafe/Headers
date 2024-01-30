@class NSString, NSArray, NSDate, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface _CDMultiLevelRateLimiter : NSObject <_CDRateLimiting> {
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_periods;
    NSMutableArray *_periodStart;
    NSArray *_maxCounts;
    NSMutableArray *_balances;
}

@property (readonly, retain, nonatomic) NSDate *lastRecorded;
@property (readonly, nonatomic) long long numOfRateLimitPolicies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)credit;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPeriodToCountMap:(id)a0;
- (void)recordTimeAndRefillIfNeededRaw;
- (BOOL)debited;

@end
