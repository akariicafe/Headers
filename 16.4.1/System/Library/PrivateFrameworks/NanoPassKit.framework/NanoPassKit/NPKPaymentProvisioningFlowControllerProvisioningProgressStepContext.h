@class NSString, PKPaymentSetupProduct;

@interface NPKPaymentProvisioningFlowControllerProvisioningProgressStepContext : NPKPaymentProvisioningFlowStepContext

@property (retain, nonatomic) PKPaymentSetupProduct *product;
@property (retain, nonatomic) NSString *localizedProgressDescription;

- (id)initWithRequestContext:(id)a0;
- (void).cxx_destruct;

@end
