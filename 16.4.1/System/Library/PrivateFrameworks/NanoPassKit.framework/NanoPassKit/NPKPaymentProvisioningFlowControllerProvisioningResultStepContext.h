@class NSError, PKPaymentPass;

@interface NPKPaymentProvisioningFlowControllerProvisioningResultStepContext : NPKPaymentProvisioningFlowStepContext

@property (nonatomic) BOOL cardAdded;
@property (retain, nonatomic) PKPaymentPass *provisionedPass;
@property (retain, nonatomic) NSError *error;

- (id)initWithRequestContext:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
