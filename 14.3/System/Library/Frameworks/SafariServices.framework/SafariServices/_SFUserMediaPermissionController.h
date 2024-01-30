@interface _SFUserMediaPermissionController : WBSUserMediaPermissionController

- (void)requestUserMediaAuthorizationForDevices:(unsigned long long)a0 url:(id)a1 mainFrameURL:(id)a2 decisionHandler:(id /* block */)a3 dialogPresenter:(id)a4;
- (void)savePendingChanges;
- (void)_didRetrieveUserMediaPermission:(unsigned long long)a0 forDevices:(unsigned long long)a1 url:(id)a2 mainFrameURL:(id)a3 decisionHandler:(id /* block */)a4 dialogPresenter:(id)a5;
- (void)coalescedAsynchronousWriter:(id)a0 didFinishWritingData:(id)a1;

@end
