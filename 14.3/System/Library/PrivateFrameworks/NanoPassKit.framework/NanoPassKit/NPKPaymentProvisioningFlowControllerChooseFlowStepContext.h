@class NSArray;

@interface NPKPaymentProvisioningFlowControllerChooseFlowStepContext : NPKPaymentProvisioningFlowStepContext

@property (retain, nonatomic) NSArray *sections;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithRequestContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
