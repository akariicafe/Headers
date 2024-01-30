@interface APMescalSigningRequestor : APXPCActionRequester

+ (id)machService;
+ (BOOL)canShareConnection;

- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)remoteObjectInterface;
- (id)init;
- (id)signatureForData:(id)a0;
- (void)signatureForData:(id)a0 completion:(id /* block */)a1;
- (void)signatureForData:(id)a0 waitTime:(double)a1 completion:(id /* block */)a2;

@end
