@class NSArray;

@interface NPKPaymentProvisioningFlowControllerChooseProductStepContext : NPKPaymentProvisioningFlowStepContext

@property (retain, nonatomic) NSArray *products;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithRequestContext:(id)a0;

@end
