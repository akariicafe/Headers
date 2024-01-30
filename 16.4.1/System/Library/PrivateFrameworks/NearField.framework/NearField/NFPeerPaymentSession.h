@interface NFPeerPaymentSession : NFSession

- (id)deleteKey;
- (id)performPeerPayment:(id)a0 request:(id)a1 error:(id *)a2;
- (id)performPeerPayment:(id)a0 request:(id)a1;

@end
