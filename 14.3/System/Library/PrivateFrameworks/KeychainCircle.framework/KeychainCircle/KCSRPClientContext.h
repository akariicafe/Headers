@interface KCSRPClientContext : KCSRPContext

- (id)copyStart:(id *)a0;
- (id)copyResposeToChallenge:(id)a0 password:(id)a1 salt:(id)a2 error:(id *)a3;
- (BOOL)verifyConfirmation:(id)a0 error:(id *)a1;

@end
