@class PFUbiquityBaselineHeuristics, NSObject;
@protocol PFUbiquityBaselineRollOperationDelegate;

@interface PFUbiquityBaselineRollOperation : PFUbiquityBaselineOperation {
    PFUbiquityBaselineHeuristics *_heuristics;
}

@property NSObject<PFUbiquityBaselineRollOperationDelegate> *delegate;

- (id)init;
- (void)dealloc;
- (void)main;
- (id)retainedDelegate;
- (BOOL)isEqual:(id)a0;
- (BOOL)haveConsistentStateForBaselineRoll;
- (BOOL)rollBaselineWithError:(id *)a0;

@end
