@class NSString, SKProductPageViewController, NSNumber;
@protocol _SFAppSuggestionBannerDelegate;

@interface _SFStoreBanner : _SFPinnableBanner <SKProductPageViewControllerDelegate, _SFAppSuggestionBanner> {
    SKProductPageViewController *_productViewController;
    NSNumber *_productID;
    NSString *_affiliateData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_SFAppSuggestionBannerDelegate> delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithProductID:(id)a0 affiliateData:(id)a1 applicationLaunchArgument:(id)a2;
- (void)_setBlockedByUser;
- (void)productPage:(id)a0 didFailLoadWithError:(id)a1;
- (void)productPage:(id)a0 didFinishWithResult:(long long)a1;
- (void)productPage:(id)a0 didFinishPurchase:(id)a1 withError:(id)a2;
- (void)productPage:(id)a0 willMakePurchases:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
