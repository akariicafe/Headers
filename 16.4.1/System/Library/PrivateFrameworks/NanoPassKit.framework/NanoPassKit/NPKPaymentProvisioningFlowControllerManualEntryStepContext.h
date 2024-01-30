@class NSArray;

@interface NPKPaymentProvisioningFlowControllerManualEntryStepContext : NPKPaymentProvisioningFlowStepContext

@property (nonatomic) BOOL cameraFirstProvisioningEnabled;
@property (retain, nonatomic) NSArray *setupFields;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithRequestContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
