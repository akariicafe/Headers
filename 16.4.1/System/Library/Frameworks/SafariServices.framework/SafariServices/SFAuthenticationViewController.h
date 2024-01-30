@class NSString, _UIFallbackPresentationViewController, UIWindow;
@protocol SFAuthenticationViewControllerPresentationDelegate;

@interface SFAuthenticationViewController : SFSafariViewController <UIViewControllerTransitioningDelegate> {
    _UIFallbackPresentationViewController *_fallbackPresentationViewController;
    NSString *_callbackURLScheme;
    UIWindow *_presentationContextWindow;
}

@property (copy, nonatomic) id /* block */ dismissCompletionHandler;
@property (weak, nonatomic) id<SFAuthenticationViewControllerPresentationDelegate> presentationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_supportsPrewarming;

- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)remoteViewController:(id)a0 didDecideCookieSharingForURL:(id)a1 shouldCancel:(BOOL)a2;
- (void)_presentViewController;
- (void)_restartServiceViewController;
- (id)initWithURL:(id)a0 callbackURLScheme:(id)a1 usingEphemeralSession:(BOOL)a2 jitEnabled:(BOOL)a3 presentationContextWindow:(id)a4;
- (id)initWithURL:(id)a0 callbackURLScheme:(id)a1 usingEphemeralSession:(BOOL)a2 presentationContextWindow:(id)a3;
- (void)remoteViewController:(id)a0 hostApplicationOpenURL:(id)a1;
- (void)setDefersAddingRemoteViewController:(BOOL)a0;

@end
