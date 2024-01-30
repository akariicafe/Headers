@class SKUIGiftComposeViewController, SKUIClientContext, NSOperationQueue, SKUIGift, SKUIGiftConfiguration, UIViewController;
@protocol SKUIGiftViewControllerDelegate;

@interface SKUIGiftViewController : UINavigationController {
    SKUIGiftConfiguration *_giftConfiguration;
    long long _initialBarStyle;
    UIViewController *_placeholderViewController;
    SKUIGiftComposeViewController *_rootViewController;
}

@property (readonly, copy, nonatomic) SKUIGift *gift;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) id<SKUIGiftViewControllerDelegate> giftDelegate;
@property (retain, nonatomic) NSOperationQueue *operationQueue;

- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(BOOL)a0;
- (void)_cancelButtonAction:(id)a0;
- (id)_localizedString:(id)a0;
- (void)_loadGiftConfiguration;
- (void)_finishAuthenticateWithResponse:(id)a0 error:(id)a1;
- (void)_finishGiftingWithResult:(BOOL)a0;
- (void)_configurationDidLoadWithResult:(BOOL)a0 error:(id)a1;
- (void)_clientContextDidLoadWithContext:(id)a0 error:(id)a1;
- (id)initWithGift:(id)a0;

@end
