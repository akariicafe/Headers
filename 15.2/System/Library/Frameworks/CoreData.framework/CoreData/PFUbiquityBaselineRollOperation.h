@class PFUbiquityBaselineHeuristics, NSObject;
@protocol PFUbiquityBaselineRollOperationDelegate;

@interface PFUbiquityBaselineRollOperation : PFUbiquityBaselineOperation {
    PFUbiquityBaselineHeuristics *_heuristics;
}

@property NSObject<PFUbiquityBaselineRollOperationDelegate> *delegate;

- (id)retainedDelegate;
- (void)main;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)dealloc;

@end
