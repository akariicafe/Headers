@class NSUserDefaults;

@interface HVUserDefaults : NSObject {
    NSUserDefaults *_defaults;
}

+ (id)sharedInstance;
+ (id)defaults;
+ (BOOL)harvestBudgetDisabled;
+ (long long)harvestBudgetNumberOfOperations;
+ (void)resetHarvestBudgetNumberOfOperations;
+ (void)resetHarvestBudgetDisabled;
+ (void)resetHarvestBudgetCPUTimeSeconds;
+ (double)harvestBudgetCPUTimeSeconds;
+ (BOOL)harvestBudgetThrottleBudgetDisabled;
+ (void)setHarvestBudgetThrottleBudgetDisabled:(BOOL)a0;
+ (BOOL)harvestBudgetRefillDisabled;
+ (void)setHarvestBudgetCPUTimeSeconds:(double)a0;
+ (void)resetHarvestBudgetRefillDisabled;
+ (void)setHarvestBudgetRefillDisabled:(BOOL)a0;
+ (void)setHarvestBudgetDisabled:(BOOL)a0;
+ (void)resetHarvestBudgetThrottleBudgetDisabled;
+ (void)setHarvestBudgetNumberOfOperations:(long long)a0;

- (id)defaults;
- (void).cxx_destruct;
- (id)init;

@end
