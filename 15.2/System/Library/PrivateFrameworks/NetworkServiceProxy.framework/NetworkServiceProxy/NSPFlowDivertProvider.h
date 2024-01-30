@class NSPManager;

@interface NSPFlowDivertProvider : NEAppProxyProvider

@property (retain) NSPManager *manager;

- (void).cxx_destruct;
- (id)init;
- (BOOL)handleNewFlow:(id)a0;
- (void)startProxyWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)stopProxyWithReason:(long long)a0 completionHandler:(id /* block */)a1;

@end
