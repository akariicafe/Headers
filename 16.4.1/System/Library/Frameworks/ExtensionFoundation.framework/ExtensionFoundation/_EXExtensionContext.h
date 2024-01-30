@interface _EXExtensionContext : NSExtensionContext <_EXConnectionHandler>

- (BOOL)shouldAcceptXPCConnection:(id)a0;
- (id)makeXPCConnectionWithError:(id *)a0;
- (void)completeRequestReturningItems:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void)invalidate;
- (void)completeRequestWithHandler:(id /* block */)a0;

@end
