@class NSString, _UIAsyncInvocation;
@protocol _SFPasswordViewControllerDelegate;

@interface _SFPasswordViewController : UIViewController <SFPasswordRemoteViewControllerDelegate, SFQueueingServiceViewControllerProxyDelegate> {
    _UIAsyncInvocation *_cancelViewServiceRequest;
}

@property (weak, nonatomic) id<_SFPasswordViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (id)init;
- (void).cxx_destruct;
- (id)_connectToServiceWithCompletion:(id /* block */)a0;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (void)_dismissPasswordViewController;
- (void)serviceProxyWillQueueInvocation:(id)a0;
- (void)_addRemoteView;
- (void)_connectToService;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (void)_setUpServiceProxyIfNeeded;
- (void)remoteViewControllerWillDismiss:(id)a0;
- (void)_addRemoteViewAsChild;
- (void)remoteViewController:(id)a0 viewServiceDidTerminateWithError:(id)a1;
- (id)_remoteViewController;

@end
