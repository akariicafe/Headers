@class _EXExtensionProcess, NSXPCConnection;

@interface LNExtensionConnection : LNConnection

@property (retain, nonatomic) _EXExtensionProcess *extensionProcess;
@property (retain, nonatomic) NSXPCConnection *mediatorXPCConnection;

- (void)dealloc;
- (void).cxx_destruct;
- (void)connectWithOptions:(id)a0;
- (void)invalidateMediatorXPCConnection;
- (void)connectDirectlyWithOptions:(id)a0;
- (void)connectUsingListenerEndpoint:(id)a0;
- (void)connectUsingMediatorWithOptions:(id)a0;
- (id)extensionIdentityWithExtensionPointIdentifier:(id)a0 error:(id *)a1;
- (void)invalidateExtensionProcess;
- (BOOL)refreshWithOptions:(id)a0;

@end
