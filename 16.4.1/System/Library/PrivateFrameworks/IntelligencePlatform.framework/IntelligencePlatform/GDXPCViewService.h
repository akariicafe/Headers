@class NSXPCInterface, NSXPCConnection;

@interface GDXPCViewService : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}

- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (id)accessTokenForFeaturesWithIsSandboxed:(BOOL)a0 error:(id *)a1;
- (id)accessTokenForViewName:(id)a0 isSandboxed:(BOOL)a1 error:(id *)a2;
- (id)featureKeysWithError:(id *)a0;
- (void)locked_establishConnection;
- (BOOL)performUpdateForViewNames:(id)a0 includeDependencies:(BOOL)a1 error:(id *)a2;

@end
