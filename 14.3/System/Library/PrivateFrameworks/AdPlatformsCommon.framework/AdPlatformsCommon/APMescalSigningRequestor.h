@interface APMescalSigningRequestor : APXPCActionRequester

+ (id)machService;
+ (BOOL)canShareConnection;

- (void)connectionInvalidated;
- (id)init;
- (void)connectionInterrupted;
- (void)signatureForData:(id)a0 completion:(id /* block */)a1;
- (id)remoteObjectInterface;
- (id)signatureForData:(id)a0;
- (void)signatureForData:(id)a0 waitTime:(double)a1 completion:(id /* block */)a2;

@end
