@class NSString, UIViewController, _UIRemoteViewController;
@protocol SOUIAuthorizationViewControllerDelegate;

@interface SOUIAuthorizationViewController : UIViewController <_UIRemoteViewControllerContaining, UIGestureRecognizerDelegate> {
    UIViewController *_extensionViewController;
}

@property (copy, nonatomic) id /* block */ dismissCompletionHandler;
@property (weak) id<SOUIAuthorizationViewControllerDelegate> delegate;
@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_cancel;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)shouldAutorotate;
- (id)initWithExtensionViewController:(id)a0 hints:(id)a1;

@end
