@class PKPaymentCredential;

@interface NPKPaymentProvisioningFlowControllerSecondaryManualEntryStepContext : NPKPaymentProvisioningFlowControllerManualEntryStepContext

@property (retain, nonatomic) PKPaymentCredential *credential;
@property (nonatomic) BOOL allowsAddingDifferentCard;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithRequestContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
