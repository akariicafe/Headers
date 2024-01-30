@class NSError, PKPaymentPass;

@interface NPKPaymentProvisioningFlowControllerProvisioningResultStepContext : NPKPaymentProvisioningFlowStepContext

@property (nonatomic) BOOL cardAdded;
@property (retain, nonatomic) PKPaymentPass *provisionedPass;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithRequestContext:(id)a0;
- (id)description;

@end
