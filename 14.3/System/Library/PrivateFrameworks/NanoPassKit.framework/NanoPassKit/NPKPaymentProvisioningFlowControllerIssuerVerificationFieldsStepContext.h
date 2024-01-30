@class NSArray, PKPaymentPass;

@interface NPKPaymentProvisioningFlowControllerIssuerVerificationFieldsStepContext : NPKPaymentProvisioningFlowStepContext

@property (retain, nonatomic) PKPaymentPass *paymentPass;
@property (retain, nonatomic) NSArray *verificationFields;

- (void).cxx_destruct;
- (id)initWithRequestContext:(id)a0;
- (id)description;

@end
