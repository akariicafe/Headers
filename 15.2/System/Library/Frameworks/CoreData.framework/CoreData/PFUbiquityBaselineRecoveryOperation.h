@class NSObject;
@protocol PFUbiquityBaselineRecoveryOperationDelegate;

@interface PFUbiquityBaselineRecoveryOperation : PFUbiquityBaselineOperation

@property NSObject<PFUbiquityBaselineRecoveryOperationDelegate> *delegate;

- (id)retainedDelegate;
- (void)main;
- (BOOL)isEqual:(id)a0;

@end
