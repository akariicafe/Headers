@class NSObject;
@protocol PFUbiquityBaselineRollResponseOperationDelegate;

@interface PFUbiquityBaselineRollResponseOperation : PFUbiquityBaselineRollOperation

@property NSObject<PFUbiquityBaselineRollResponseOperationDelegate> *delegate;

- (void)main;
- (id)retainedDelegate;

@end
