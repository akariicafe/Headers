@class NSArray, NSData;

@interface NPKPaymentProvisioningFlowControllerGetIssuerApplicationAddRequestStepContext : NPKPaymentProvisioningFlowStepContext

@property (retain, nonatomic) NSArray *certificates;
@property (retain, nonatomic) NSData *nonce;
@property (retain, nonatomic) NSData *nonceSignature;

- (id)initWithRequestContext:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
