@class NEAppProxyProvider, NSObject;
@protocol OS_dispatch_queue, NEAppProxyProviderContainerDelegate;

@interface NEAppProxyProviderContainer : NSObject

@property (retain) id<NEAppProxyProviderContainerDelegate> delegate;
@property (retain) NSObject<OS_dispatch_queue> *flowQueue;
@property struct _NEFlowDirector { } *director;
@property unsigned int delegateInterfaceIndex;
@property (copy) id /* block */ stopCompletionHandler;
@property (readonly) NEAppProxyProvider *provider;

- (void)wake;
- (void)setConfiguration:(id)a0;
- (void)startWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)sleepWithCompletionHandler:(id /* block */)a0;
- (void)flowDivertOpenControlSocket;
- (void)flowDivertNewFlow:(struct _NEFlow { } *)a0 completionHandler:(id /* block */)a1;
- (void)handleAppMessage:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithDelegate:(id)a0 providerClass:(Class)a1;
- (void)setDelegateInterface:(unsigned int)a0;
- (void)setInitialFlowDivertControlSocket:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)stop;

@end
