@interface _LSDOpenClient : _LSDClient <_LSDOpenProtocol>

- (void)willHandleInvocation:(id)a0 isReply:(BOOL)a1;
- (void)failedToOpenApplication:(id)a0 withURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)openURL:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)performOpenOperationWithURL:(id)a0 bundleIdentifier:(id)a1 documentIdentifier:(id)a2 isContentManaged:(BOOL)a3 sourceAuditToken:(const struct { unsigned int x0[8]; } *)a4 userInfo:(id)a5 options:(id)a6 delegate:(id)a7 completionHandler:(id /* block */)a8;
- (void)getURLOverrideForURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)openApplicationWithIdentifier:(id)a0 options:(id)a1 useClientProcessHandle:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)canOpenURL:(id)a0 publicSchemes:(BOOL)a1 privateSchemes:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)openUserActivityWithUniqueIdentifier:(id)a0 activityData:(id)a1 activityType:(id)a2 bundleIdentifier:(id)a3 options:(id)a4 completionHandler:(id /* block */)a5;
- (void)getiCloudHostNamesWithCompletionHandler:(id /* block */)a0;
- (void)openAppLink:(id)a0 state:(id)a1 completionHandler:(id /* block */)a2;

@end
