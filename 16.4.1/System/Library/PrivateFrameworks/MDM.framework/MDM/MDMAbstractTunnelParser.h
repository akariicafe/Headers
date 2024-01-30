@interface MDMAbstractTunnelParser : NSObject

+ (id)responseWithError:(id)a0;
+ (id)responseWithStatus:(id)a0;

- (id)_commandDisconnect:(id)a0;
- (void)processRequest:(id)a0 assertion:(id)a1 completionBlock:(id /* block */)a2;

@end
