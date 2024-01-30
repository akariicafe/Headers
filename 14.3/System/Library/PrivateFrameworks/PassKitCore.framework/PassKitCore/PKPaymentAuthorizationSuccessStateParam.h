@class PKPeerPaymentTransactionMetadata;

@interface PKPaymentAuthorizationSuccessStateParam : PKPaymentAuthorizationStateParam

@property (retain, nonatomic) PKPeerPaymentTransactionMetadata *peerPaymentTransactionMetadata;

+ (id)paramWithPeerPaymentTransactionMetadata:(id)a0;

- (void).cxx_destruct;
- (id)description;

@end
