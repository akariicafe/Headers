@class NSString, NSExtensionContext, NSTimer, NSExtension, UIViewController;
@protocol _ASExtensionHostContext;

@interface _ASExtensionViewController : UIViewController <_ASExtensionHostContextDelegate> {
    UIViewController *_remoteViewController;
    NSTimer *_nonUIRequestTimer;
    BOOL _allowRequestingUIFromNonUIRequest;
}

@property (readonly, nonatomic) NSExtension *extension;
@property (readonly, nonatomic) NSExtensionContext<_ASExtensionHostContext> *nonUIHostContext;
@property (nonatomic) BOOL dismissOnBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (void).cxx_destruct;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (void)_setRemoteViewController:(id)a0;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)initWithExtension:(id)a0;
- (void)_beginNonUIRequest:(BOOL)a0 connectionHandler:(id /* block */)a1;
- (void)_beginRequestWithConnectionHandler:(id /* block */)a0;
- (void)prepareToCancelRequestWithHostContext:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)_nonUIRequestDidRequireUserInteraction;
- (BOOL)_shouldUseNonUIRequestTimer;
- (void)_requestDidFailWithError:(id)a0 completion:(id /* block */)a1;
- (void)_invalidateNonUIRequestTimerIfNeeded;
- (void)_extensionRequestDidFinish:(BOOL)a0;
- (void)_nonUIRequestTimedOut;

@end
