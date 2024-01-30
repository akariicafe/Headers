@class NSArray, PKPaymentPass;

@interface NPKPaymentProvisioningFlowControllerMoreInformationStepContext : NPKPaymentProvisioningFlowStepContext

@property (retain, nonatomic) NSArray *moreInfoItems;
@property (retain, nonatomic) PKPaymentPass *paymentPass;

- (id)initWithRequestContext:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
