@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface NEExtensionAppProxyProviderContext : NEExtensionTunnelProviderContext <NEExtensionAppProxyProviderProtocol, NEExtensionAppProxyProviderHostProtocol>

@property (retain) NSObject<OS_dispatch_queue> *flowQueue;
@property struct _NEFlowDirector { } *director;
@property unsigned int delegateInterfaceIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void).cxx_destruct;
- (void)flowDivertNewFlow:(struct _NEFlow { } *)a0 completionHandler:(id /* block */)a1;
- (void)cancelWithError:(id)a0;
- (void)flowDivertOpenControlSocket;
- (void)setInitialFlowDivertControlSocket:(id)a0;
- (id)extensionPoint;
- (void)setDelegateInterface:(unsigned int)a0;
- (void)stopWithReason:(int)a0;
- (void)openFlowDivertControlSocketWithCompletionHandler:(id /* block */)a0;
- (void)flowDivertMatchAppRulesWithFlow:(unsigned int)a0 auditToken:(struct __CFData { } *)a1 signingIdentifier:(struct __CFString { } *)a2 realSigningIdentifier:(struct __CFString { } *)a3 realAuditToken:(struct __CFData { } *)a4;
- (void)setInitialFlowDivertControlSocket:(id)a0 extraValidation:(BOOL)a1;
- (Class)requiredProviderSuperClass;
- (void)startWithOptions:(id)a0 completionHandler:(id /* block */)a1;

@end
