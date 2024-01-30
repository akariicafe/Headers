@interface ATMD5SignatureProvider : ATSignatureProvider

- (id)createSignature:(id *)a0 forData:(id)a1;
- (id)verifySignature:(id)a0 forData:(id)a1;

@end
