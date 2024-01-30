@class NSArray, PKPaymentPass;

@interface NPKPaymentProvisioningFlowControllerIssuerVerificationChannelsStepContext : NPKPaymentProvisioningFlowStepContext

@property (retain, nonatomic) PKPaymentPass *paymentPass;
@property (retain, nonatomic) NSArray *verificationChannels;

- (void).cxx_destruct;
- (id)initWithRequestContext:(id)a0;
- (id)description;

@end
