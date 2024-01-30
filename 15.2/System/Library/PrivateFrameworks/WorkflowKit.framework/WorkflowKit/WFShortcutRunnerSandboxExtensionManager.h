@class NSString, NSMutableSet, NSXPCConnection;

@interface WFShortcutRunnerSandboxExtensionManager : NSObject <WFActionSandboxExtensionProvider>

@property (readonly, nonatomic) NSXPCConnection *xpcConnection;
@property (copy, nonatomic) NSMutableSet *issuedExtensionsAccessResources;
@property (copy, nonatomic) NSMutableSet *issuedExtensionHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCConnection:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)hostInterface;
- (void)temporaryRequestSandboxExtensionWithBlock:(id /* block */)a0;
- (void)requestSandboxExtensionForRunningActionWithAccessResources:(id)a0 completion:(id /* block */)a1;
- (BOOL)requestSandboxExtensionForRunningActionWithAccessResources:(id)a0 error:(id *)a1;
- (id)synchronousHostInterface;
- (void)performWithSandboxExtensions:(id)a0 asynchronousBlock:(id /* block */)a1;
- (void)performWithSandboxExtensions:(id)a0 synchronousBlock:(id /* block */)a1;
- (id)requestExtensionTokensForAccessResources:(id)a0 rejectedAccessResources:(id *)a1 error:(id *)a2;
- (void)requestExtensionTokensForAccessResources:(id)a0 completion:(id /* block */)a1;

@end
