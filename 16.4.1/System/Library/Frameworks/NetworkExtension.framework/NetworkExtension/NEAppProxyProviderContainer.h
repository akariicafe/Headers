@class NSObject, NEAppProxyProvider;
@protocol OS_dispatch_queue, NEAppProxyProviderContainerDelegate;

@interface NEAppProxyProviderContainer : NSObject {
    unsigned int _delegateInterfaceIndex;
    id<NEAppProxyProviderContainerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_flowQueue;
    struct _NEFlowDirector { } *_director;
    id /* block */ _stopCompletionHandler;
}

@property (readonly) NEAppProxyProvider *provider;

- (void)wake;
- (void)setInitialFlowDivertControlSocket:(id)a0;
- (id)initWithDelegate:(id)a0 providerClass:(Class)a1;
- (void)handleAppMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)startWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)setDelegateInterface:(unsigned int)a0;
- (void)stop;
- (void)sleepWithCompletionHandler:(id /* block */)a0;
- (void)setConfiguration:(id)a0;
- (void).cxx_destruct;

@end
