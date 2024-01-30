@class NSString, PKPaymentSetupProduct;

@interface NPKPaymentProvisioningFlowControllerProvisioningProgressStepContext : NPKPaymentProvisioningFlowStepContext

@property (retain, nonatomic) PKPaymentSetupProduct *product;
@property (retain, nonatomic) NSString *localizedProgressDescription;

- (void).cxx_destruct;
- (id)initWithRequestContext:(id)a0;

@end
