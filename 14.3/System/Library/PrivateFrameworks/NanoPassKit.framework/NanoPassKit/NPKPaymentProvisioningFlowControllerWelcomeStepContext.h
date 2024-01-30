@class NSArray;

@interface NPKPaymentProvisioningFlowControllerWelcomeStepContext : NPKPaymentProvisioningFlowStepContext

@property (retain, nonatomic) NSArray *heroImages;
@property (nonatomic) BOOL defaultImagesUsed;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithRequestContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
