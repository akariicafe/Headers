@interface NPKPaymentProvisioningFlowControllerPreconditionsStepContext : NPKPaymentProvisioningFlowStepContext

@property (nonatomic) unsigned long long preconditionsState;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithRequestContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;

@end
