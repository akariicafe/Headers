@class NSArray, PKPaymentPass;

@interface NPKPaymentProvisioningFlowControllerMoreInformationStepContext : NPKPaymentProvisioningFlowStepContext

@property (retain, nonatomic) NSArray *moreInfoItems;
@property (retain, nonatomic) PKPaymentPass *paymentPass;

- (id)description;
- (void).cxx_destruct;
- (id)initWithRequestContext:(id)a0;

@end
