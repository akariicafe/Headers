@class UIWindow, ENUIHostViewController, _UIAsyncInvocation, NSString;

@interface ENUIPresentationController : NSObject <ENUIHostViewControllerDelegate, ENUIRemotePresentationController>

@property (retain, nonatomic) _UIAsyncInvocation *requestCancellationInvocation;
@property (retain, nonatomic) ENUIHostViewController *hostViewController;
@property (retain, nonatomic) UIWindow *savedKeyWindow;
@property (retain, nonatomic) UIWindow *window;
@property (nonatomic) BOOL didPresent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelPresentation;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_requestAndConfigureHostViewController:(id /* block */)a0 completion:(id /* block */)a1;
- (void)_dismissRemoteViewController;
- (void)_makeRemoteViewControllerKeyAndVisible:(id)a0;
- (void)presentWithPresentationRequest:(id)a0 completion:(id /* block */)a1;
- (void)_mainQueue_presentWithPresentationRequest:(id)a0 completion:(id /* block */)a1;
- (void)hostViewControllerDidFinishWithError:(id)a0;

@end
