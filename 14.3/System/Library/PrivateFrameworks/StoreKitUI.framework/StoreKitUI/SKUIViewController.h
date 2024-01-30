@class NSString, SKUIProductPageOverlayController, SKUIPopoverObserver, SKUINetworkErrorViewController, SKUIClientContext, NSOperationQueue, SKUIIPadSearchController, SKUIWishlistViewController, UIBarButtonItem;

@interface SKUIViewController : UIViewController <SKUINetworkErrorDelegate, SKUIProductPageOverlayDelegate, UIPopoverControllerDelegate, SKUITabBarItemRootViewController, SKUIClientContextConsuming, SKUIWishlistDelegate> {
    SKUINetworkErrorViewController *_networkErrorViewController;
    SKUIProductPageOverlayController *_productPageOverlayController;
    SKUIIPadSearchController *_searchController;
    BOOL _wishlistButtonHidden;
    SKUIPopoverObserver *_wishlistPopoverObserver;
    SKUIWishlistViewController *_wishlistViewController;
}

@property (readonly, nonatomic) UIBarButtonItem *_wishlistButtonItem;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (readonly, nonatomic) SKUIIPadSearchController *IPadSearchController;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadData;
- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)showingError;
- (void)_setWishlistButtonHidden:(BOOL)a0;
- (void)showDefaultNavigationItems;
- (id)initWithTabBarItem:(id)a0;
- (void)skui_viewWillAppear:(BOOL)a0;
- (void)productPageOverlayDidDismiss:(id)a0;
- (void)forceOrientationBackToSupportedOrientation;
- (id)_defaultLeftBarButtonItems;
- (void)networkErrorViewControllerInvalidated:(id)a0;
- (id)_getIPadSearchController;
- (id)_defaultRightBarButtonItemsIsCompact:(BOOL)a0;
- (void)_showDialogWithError:(id)a0;
- (void)_reloadForOrientation:(long long)a0;
- (void)_presentWishlistFromSheet;
- (void)_presentWishlistFromPopover:(id)a0;
- (void)_wishlistPopoverDidDismiss;
- (void)_wishlistAction:(id)a0;
- (void)wishlist:(id)a0 didSelectItem:(id)a1 atIndexPath:(id)a2;
- (void)showDefaultNavigationItemsForSize:(struct CGSize { double x0; double x1; })a0;
- (void)showDefaultNavigationItemsIsCompact:(BOOL)a0;
- (void)showError:(id)a0;

@end
