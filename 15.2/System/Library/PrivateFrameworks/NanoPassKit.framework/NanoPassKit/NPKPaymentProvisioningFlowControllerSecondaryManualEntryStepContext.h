@class PKPaymentCredential;

@interface NPKPaymentProvisioningFlowControllerSecondaryManualEntryStepContext : NPKPaymentProvisioningFlowControllerManualEntryStepContext

@property (retain, nonatomic) PKPaymentCredential *credential;
@property (nonatomic) BOOL allowsAddingDifferentCard;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithRequestContext:(id)a0;

@end
