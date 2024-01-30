@interface APMescalSigningRequestor : APXPCActionRequester

+ (id)machService;
+ (BOOL)canShareConnection;

- (void)connectionInvalidated;
- (id)remoteObjectInterface;
- (id)signatureForData:(id)a0;
- (void)signatureForData:(id)a0 waitTime:(double)a1 completion:(id /* block */)a2;
- (void)signatureForData:(id)a0 completion:(id /* block */)a1;
- (void)connectionInterrupted;
- (id)init;

@end
