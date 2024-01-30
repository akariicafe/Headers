@class NSMutableDictionary;

@interface CKDFlowControlManager : NSObject {
    unsigned long long _defaultBudget;
    double _defaultRegeneration;
}

@property (retain, nonatomic) NSMutableDictionary *operationFlowControls;
@property (nonatomic) unsigned long long defaultBudget;
@property (nonatomic) double defaultRegeneration;
@property double maximumThrottleTime;

- (BOOL)hasStatusToReport;
- (id)CKStatusReportArray;
- (void)updateFlowControl:(id)a0 withCost:(unsigned long long)a1 reportableError:(id)a2;
- (id)CKPropertiesDescription;
- (BOOL)checkFlowControlIsLimited:(id)a0 outReportableError:(id *)a1;
- (id)_flowControlForOperation:(id)a0;
- (unsigned long long)currentBudgetCap:(id)a0;
- (id)description;
- (id)_flowControlForOperation:(id)a0 createIfNecessary:(BOOL)a1;
- (void).cxx_destruct;
- (void)updateFlowControl:(id)a0 withRetryAfter:(double)a1 reportableError:(id)a2;
- (id)initWithDefaultBudget:(unsigned long long)a0 maximumThrottleTime:(double)a1 andDefaultRegeneration:(double)a2;
- (double)currentRegeneration:(id)a0;
- (double)secondsUntilFlowControlNotLimited:(id)a0;
- (double)currentBudget:(id)a0;
- (void)updateFlowControlForOperation:(id)a0 reportableError:(id)a1;

@end
