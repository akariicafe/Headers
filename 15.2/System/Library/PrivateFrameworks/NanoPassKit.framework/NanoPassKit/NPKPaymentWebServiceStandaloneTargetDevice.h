@protocol NPKPaymentWebServiceStandaloneTargetDeviceDelegate;

@interface NPKPaymentWebServiceStandaloneTargetDevice : PKPaymentWebServiceTargetDevice

@property (weak, nonatomic) id<NPKPaymentWebServiceStandaloneTargetDeviceDelegate> delegate;

+ (id)standalonePaymentWebServiceWithDelegate:(id)a0;

- (void)startRequiringUpgradedPasscodeWithPasscodeMeetsPolicy:(BOOL)a0;
- (void)endRequiringUpgradedPasscodeIfNecessary;
- (void)enforceUpgradedPasscodePolicyWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
