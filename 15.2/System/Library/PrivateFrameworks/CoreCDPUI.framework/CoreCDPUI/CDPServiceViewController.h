@class UIViewController;

@interface CDPServiceViewController : UIViewController <CDPServiceInterface> {
    BOOL _inlineMode;
    UIViewController *_contentViewController;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)offsetForCurrentKeyboard:(id /* block */)a0;

@end
