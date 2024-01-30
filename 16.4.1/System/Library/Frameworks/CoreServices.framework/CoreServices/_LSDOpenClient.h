@interface _LSDOpenClient : _LSDClient <_LSDOpenProtocol>

- (void)canOpenURL:(id)a0 publicSchemes:(BOOL)a1 privateSchemes:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)openUserActivityWithUniqueIdentifier:(id)a0 activityData:(id)a1 activityType:(id)a2 bundleIdentifier:(id)a3 options:(id)a4 completionHandler:(id /* block */)a5;
- (void)openApplicationWithIdentifier:(id)a0 options:(id)a1 useClientProcessHandle:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)openAppLink:(id)a0 state:(id)a1 completionHandler:(id /* block */)a2;
- (void)getURLOverrideForURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)willHandleInvocation:(id)a0 isReply:(BOOL)a1;
- (void)performOpenOperationWithURL:(id)a0 fileHandle:(id)a1 bundleIdentifier:(id)a2 documentIdentifier:(id)a3 isContentManaged:(BOOL)a4 sourceAuditToken:(const struct { unsigned int x0[8]; } *)a5 userInfo:(id)a6 options:(id)a7 delegate:(id)a8 completionHandler:(id /* block */)a9;
- (void)openURL:(id)a0 fileHandle:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (void)getiCloudHostNamesWithCompletionHandler:(id /* block */)a0;
- (void)failedToOpenApplication:(id)a0 withURL:(id)a1 completionHandler:(id /* block */)a2;

@end
