@class UIViewController;

@interface CDPServiceViewController : UIViewController <CDPServiceInterface> {
    BOOL _inlineMode;
    UIViewController *_contentViewController;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)offsetForCurrentKeyboard:(id /* block */)a0;

@end
