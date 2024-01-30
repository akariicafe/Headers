@class NSArray, NSData;

@interface NPKPaymentProvisioningFlowControllerGetIssuerApplicationAddRequestStepContext : NPKPaymentProvisioningFlowStepContext

@property (retain, nonatomic) NSArray *certificates;
@property (retain, nonatomic) NSData *nonce;
@property (retain, nonatomic) NSData *nonceSignature;

- (id)description;
- (void).cxx_destruct;
- (id)initWithRequestContext:(id)a0;

@end
