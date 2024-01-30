@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface NEExtensionAppProxyProviderContext : NEExtensionTunnelProviderContext <NEExtensionAppProxyProviderProtocol, NEExtensionAppProxyProviderHostProtocol> {
    unsigned int _delegateInterfaceIndex;
    NSObject<OS_dispatch_queue> *_flowQueue;
    struct _NEFlowDirector { } *_director;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)setInitialFlowDivertControlSocket:(id)a0;
- (id)extensionPoint;
- (void)cancelWithError:(id)a0;
- (void)startWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)setDelegateInterface:(unsigned int)a0;
- (void).cxx_destruct;
- (void)stopWithReason:(int)a0;
- (void)openFlowDivertControlSocketWithCompletionHandler:(id /* block */)a0;
- (Class)requiredProviderSuperClass;

@end
