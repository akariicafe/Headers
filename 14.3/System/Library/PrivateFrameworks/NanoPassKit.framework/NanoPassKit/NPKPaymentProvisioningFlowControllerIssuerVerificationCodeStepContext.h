@class PKVerificationChannel, PKPaymentPass;

@interface NPKPaymentProvisioningFlowControllerIssuerVerificationCodeStepContext : NPKPaymentProvisioningFlowStepContext

@property (retain, nonatomic) PKPaymentPass *paymentPass;
@property (retain, nonatomic) PKVerificationChannel *verificationChannel;

- (void).cxx_destruct;
- (id)initWithRequestContext:(id)a0;
- (id)description;

@end
