@class NSArray, NSData;

@interface NPKPaymentProvisioningFlowControllerGetIssuerApplicationAddRequestStepContext : NPKPaymentProvisioningFlowStepContext

@property (retain, nonatomic) NSArray *certificates;
@property (retain, nonatomic) NSData *nonce;
@property (retain, nonatomic) NSData *nonceSignature;

- (void).cxx_destruct;
- (id)initWithRequestContext:(id)a0;
- (id)description;

@end
