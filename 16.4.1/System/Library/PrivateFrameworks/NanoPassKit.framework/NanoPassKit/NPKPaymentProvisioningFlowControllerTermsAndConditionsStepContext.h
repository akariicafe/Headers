@class NSURL, PKPaymentSetupProduct;

@interface NPKPaymentProvisioningFlowControllerTermsAndConditionsStepContext : NPKPaymentProvisioningFlowStepContext

@property (retain, nonatomic) PKPaymentSetupProduct *product;
@property (retain, nonatomic) NSURL *termsURL;
@property (nonatomic) BOOL allowNonSecureHTTP;

- (id)initWithRequestContext:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
