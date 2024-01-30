@interface PKPeerPaymentSession : PKPaymentSession

- (BOOL)deleteApplet;
- (id)authorizePeerPaymentQuote:(id)a0 forPaymentApplication:(id)a1 withAuthenticationCredential:(id)a2 shouldReregister:(BOOL *)a3;
- (id)authorizePeerPaymentQuote:(id)a0 forPaymentApplication:(id)a1 withAuthenticationCredential:(id)a2;
- (id)initWithInternalSession:(id)a0 targetQueue:(id)a1;

@end
