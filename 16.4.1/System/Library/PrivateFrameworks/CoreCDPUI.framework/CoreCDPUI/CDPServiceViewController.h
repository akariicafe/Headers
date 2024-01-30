@class UIViewController;

@interface CDPServiceViewController : UIViewController <CDPServiceInterface> {
    BOOL _inlineMode;
    UIViewController *_contentViewController;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)offsetForCurrentKeyboard:(id /* block */)a0;

@end
