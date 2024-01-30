@class NSObject;
@protocol PFUbiquityBaselineRollResponseOperationDelegate;

@interface PFUbiquityBaselineRollResponseOperation : PFUbiquityBaselineRollOperation

@property NSObject<PFUbiquityBaselineRollResponseOperationDelegate> *delegate;

- (void)main;
- (id)retainedDelegate;
- (BOOL)canAdoptBaseline:(id)a0 byReplacingLocalStoreFile:(BOOL *)a1 withStack:(id)a2 withError:(id *)a3;

@end
