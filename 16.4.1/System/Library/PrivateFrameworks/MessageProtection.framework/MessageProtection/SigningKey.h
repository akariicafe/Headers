@interface SigningKey : FullKey

- (id)signData:(id)a0 error:(id *)a1;
- (id)publicKey;
- (id)description;
- (id)signDataWithFormatter:(id)a0 error:(id *)a1;

@end
