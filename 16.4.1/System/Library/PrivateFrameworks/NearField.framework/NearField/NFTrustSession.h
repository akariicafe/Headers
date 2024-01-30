@interface NFTrustSession : NFSession

- (id)createKey:(id)a0 request:(id)a1 error:(id *)a2;
- (BOOL)deleteKey:(id)a0 error:(id *)a1;
- (id)getKey:(id)a0 error:(id *)a1;
- (id)signWithKey:(id)a0 request:(id)a1 authorization:(id)a2 error:(id *)a3;
- (id)listKeys:(id *)a0;
- (id)signWithKey:(id)a0 request:(id)a1 paymentRequest:(id)a2 authorization:(id)a3 error:(id *)a4;

@end
