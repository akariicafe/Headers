@class ASCLockupView, NSString, UIView, NSURL, SKProductPageViewController, SFThemeColorEffectView, UIButton, NSNumber;
@protocol SFAppSuggestionBannerDelegate;

@interface SFStoreBanner : SFPinnableBanner <ASCLockupViewDelegate, SKProductPageViewControllerDelegate, SFAppSuggestionBanner> {
    SKProductPageViewController *_productViewController;
    SFThemeColorEffectView *_backdrop;
    ASCLockupView *_lockupView;
    UIButton *_closeButton;
    UIView *_separator;
    NSNumber *_productID;
    NSString *_affiliateData;
    NSURL *_mainDocumentURL;
    NSString *_argument;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SFAppSuggestionBannerDelegate> delegate;

+ (BOOL)omitsBottomSeparator;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_openApp;
- (void)_removeAppStoreLockUpView;
- (void)_setBlockedByUser;
- (void)_setUpAppStoreLockUpView;
- (void)_setUpStoreKitProductView;
- (id)initWithProductID:(id)a0 mainDocumentURL:(id)a1 affiliateData:(id)a2 applicationLaunchArgument:(id)a3;
- (void)lockupView:(id)a0 appStateDidChange:(id)a1;
- (void)lockupView:(id)a0 didFailRequestWithError:(id)a1;
- (id)presentingViewControllerForLockupView:(id)a0;
- (void)productPage:(id)a0 didFailLoadWithError:(id)a1;
- (void)productPage:(id)a0 didFinishPurchase:(id)a1 withError:(id)a2;
- (void)productPage:(id)a0 didFinishWithResult:(long long)a1;
- (void)productPage:(id)a0 willMakePurchases:(id)a1;
- (void)themeDidChange;

@end
