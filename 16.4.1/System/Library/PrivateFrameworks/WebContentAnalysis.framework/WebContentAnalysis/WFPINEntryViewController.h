@class WFRemotePINEntryViewController, NSArray, NSString, _UIFallbackPresentationViewController, NSURL, UIViewController;

@interface WFPINEntryViewController : UIViewController <WFPINEntryViewControllerProtocol> {
    _UIFallbackPresentationViewController *_fallbackPresentationVC;
    NSArray *_windowsWithDisabledRotation;
    UIViewController *_rootViewControllerToUse;
    WFRemotePINEntryViewController *_remoteViewController;
    NSURL *_URL;
    NSString *_pageTitle;
    id /* block */ _completion;
}

@property (copy, nonatomic) id /* block */ dismissCompletionHandler;

+ (Class)remoteViewControllerClass;
+ (id)serviceViewControllerClassName;

- (id)delegate;
- (BOOL)shouldAutorotate;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (unsigned long long)_supportedInterfaceOrientationsForRootViewController;
- (void)userDidCancel;
- (BOOL)hasUIWebViewSubView:(id)a0;
- (id)initWithURL:(id)a0 pageTitle:(id)a1 completion:(id /* block */)a2;
- (void)insertRemoteViewController:(id)a0;
- (void)presentViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)userEnteredCorrectPIN;

@end
