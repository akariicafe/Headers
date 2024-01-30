@class NSUserDefaults;

@interface HVUserDefaults : NSObject {
    NSUserDefaults *_defaults;
}

+ (id)sharedInstance;
+ (void)setHarvestBudgetDisabled:(BOOL)a0;
+ (long long)harvestBudgetNumberOfOperations;
+ (id)defaults;
+ (void)setHarvestBudgetCPUTimeSeconds:(double)a0;
+ (BOOL)harvestBudgetRefillDisabled;
+ (double)harvestBudgetCPUTimeSeconds;
+ (BOOL)harvestBudgetThrottleBudgetDisabled;
+ (void)resetHarvestBudgetDisabled;
+ (void)setHarvestBudgetThrottleBudgetDisabled:(BOOL)a0;
+ (void)resetHarvestBudgetNumberOfOperations;
+ (void)setHarvestBudgetRefillDisabled:(BOOL)a0;
+ (void)resetHarvestBudgetRefillDisabled;
+ (void)resetHarvestBudgetThrottleBudgetDisabled;
+ (void)setHarvestBudgetNumberOfOperations:(long long)a0;
+ (void)resetHarvestBudgetCPUTimeSeconds;
+ (BOOL)harvestBudgetDisabled;

- (id)defaults;
- (id)init;
- (void).cxx_destruct;

@end
