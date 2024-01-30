@class NSSet;
@protocol GTXPCConnection;

@interface GTURLAccessProviderXPCProxy : NSObject <GTURLAccessProvider> {
    id<GTXPCConnection> _connection;
    NSSet *_ignoreMethods;
}

- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 remoteProperties:(id)a1;
- (id)makeURL:(id)a0;
- (void)securityScopedURLFromSandboxID:(id)a0 completionHandler:(id /* block */)a1;
- (void)transferIdentifier:(id)a0 fromDevice:(id)a1 completionHandler:(id /* block */)a2;
- (id)urlForPath:(id)a0;

@end
