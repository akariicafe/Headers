@class NSURL, PKPaymentSetupProduct;

@interface NPKPaymentProvisioningFlowControllerTermsAndConditionsStepContext : NPKPaymentProvisioningFlowStepContext

@property (retain, nonatomic) PKPaymentSetupProduct *product;
@property (retain, nonatomic) NSURL *termsURL;
@property (nonatomic) BOOL allowNonSecureHTTP;

- (id)description;
- (void).cxx_destruct;
- (id)initWithRequestContext:(id)a0;

@end
