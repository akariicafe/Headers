@class PKPeerPaymentTransactionMetadata;

@interface PKPaymentAuthorizationSuccessStateParam : PKPaymentAuthorizationStateParam

@property (retain, nonatomic) PKPeerPaymentTransactionMetadata *peerPaymentTransactionMetadata;

+ (id)paramWithPeerPaymentTransactionMetadata:(id)a0;

- (id)description;
- (void).cxx_destruct;

@end
