@class NSError, NSDate;

@interface CKFlowControl : NSObject {
    unsigned long long _totalSamples;
    double _totalCost;
}

@property (retain, nonatomic) NSError *lastReportableError;
@property double budget;
@property (retain) NSDate *lastRegeneration;
@property unsigned long long budgetCap;
@property double regenerationPerSecond;
@property (nonatomic) double maximumThrottleTime;

+ (id)flowControlWithBudgetCap:(unsigned long long)a0 withMaximumThrottleTime:(double)a1 andRegenerationPerSecond:(double)a2;

- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (double)secondsUntilBudgetLimitationRemoved;
- (void)expendWithCost:(double)a0 reportableError:(id)a1;
- (void)regenerate;
- (id)description;
- (double)_secondsUntilBudgetLimitationRemovedNoRegen;
- (BOOL)attemptBudgetedExpenditureWithCost:(double)a0;
- (BOOL)isLimited;
- (id)initWithBudgetCap:(unsigned long long)a0 withMaximumThrottleTime:(double)a1 andRegenerationPerSecond:(double)a2;

@end
