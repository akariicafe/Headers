@class NSObject;
@protocol PFUbiquityBaselineRollResponseOperationDelegate;

@interface PFUbiquityBaselineRollResponseOperation : PFUbiquityBaselineRollOperation

@property NSObject<PFUbiquityBaselineRollResponseOperationDelegate> *delegate;

- (id)retainedDelegate;
- (void)main;

@end
