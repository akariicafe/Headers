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

- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (void).cxx_destruct;
- (id)init;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (void)_addRemoteView;
- (id)_remoteViewController;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (void)_connectToService;
- (void)_setUpServiceProxyIfNeeded;
- (void)remoteViewControllerWillDismiss:(id)a0;
- (void)_addRemoteViewAsChild;
- (void)remoteViewController:(id)a0 viewServiceDidTerminateWithError:(id)a1;
- (id)_connectToServiceWithCompletion:(id /* block */)a0;
- (void)_dismissPasswordViewController;
- (void)serviceProxyWillQueueInvocation:(id)a0;

@end
