@interface VUIJSNetworkInterface : VUIJSObject <VUIJSNetworkInterface> {
    int _playbackReportToken;
}

@property BOOL suppressServerConfigNotifications;

- (void)AMSURLSession:(id)a0 task:(id)a1 handleDialogRequest:(id)a2 completion:(id /* block */)a3;
- (void)cancelRequest:(id)a0;
- (void)dealloc;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleAuthenticateRequest:(id)a2 completion:(id /* block */)a3;
- (id)initWithAppContext:(id)a0;
- (id)_createURLRequestFromJSOptionsDictionary:(id)a0;
- (void)_enqueueNetworkOp:(id)a0 withJSCallback:(id)a1;
- (void)_handleAppLibChange:(id)a0;
- (void)_handleServerConfigChange:(id)a0;
- (long long)_requestOptionsFromJSOptions:(id)a0;
- (void)fetchConfiguration:(BOOL)a0 :(id)a1;
- (void)invalidateConfiguration;
- (id)makeMediaApiRequest:(id)a0 :(id)a1;
- (id)makeRequest:(id)a0 :(id)a1;
- (id)makeStoreRequest:(id)a0 :(id)a1;
- (id)makeUpNextRequest:(id)a0 :(id)a1;
- (void)upNextItemsReceived:(id)a0 :(id)a1;

@end
