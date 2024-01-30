@interface VUIJSNetworkInterface : IKJSObject <VUIJSNetworkInterface> {
    int _playbackReportToken;
}

@property BOOL suppressServerConfigNotifications;

- (void)cancelRequest:(id)a0;
- (void)dealloc;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleDialogRequest:(id)a2 completion:(id /* block */)a3;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleAuthenticateRequest:(id)a2 completion:(id /* block */)a3;
- (id)initWithAppContext:(id)a0;
- (void)_handleAppLibChange:(id)a0;
- (void)_handleServerConfigChange:(id)a0;
- (long long)_requestOptionsFromJSOptions:(id)a0;
- (void)_enqueueNetworkOp:(id)a0 withJSCallback:(id)a1;
- (id)makeRequest:(id)a0 :(id)a1;
- (id)makeUpNextRequest:(id)a0 :(id)a1;
- (void)fetchConfiguration:(BOOL)a0 :(id)a1;
- (void)invalidateConfiguration;

@end
