@class NSPManager;

@interface NSPFlowDivertProvider : NEAppProxyProvider

@property (retain) NSPManager *manager;

- (id)init;
- (void).cxx_destruct;
- (BOOL)handleNewFlow:(id)a0;
- (void)startProxyWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)stopProxyWithReason:(long long)a0 completionHandler:(id /* block */)a1;

@end
