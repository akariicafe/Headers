@class CPSInlineCardViewController, NSString, NSURL, _SFPerSitePreferencesVendor, UIViewController;
@protocol _SFOverlayProviderDelegate;

@interface _SFOverlayProvider : NSObject <CPSInlineCardViewControllerDelegate> {
    CPSInlineCardViewController *_cardViewController;
    UIViewController *_cachedOwningViewController;
    _SFPerSitePreferencesVendor *_preferencesVendor;
}

@property (class, readonly, nonatomic) BOOL alwaysShowOverlayForDebug;

@property (readonly, nonatomic) UIViewController *overlayViewController;
@property (readonly, nonatomic) NSURL *url;
@property (weak, nonatomic) id<_SFOverlayProviderDelegate> delegate;
@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)hideOverlayAnimated:(BOOL)a0;
- (void)cardViewControllerDidDisappear:(id)a0 clipDidOpen:(BOOL)a1 persistUserSettings:(BOOL)a2;
- (void)requestOverlayWithPreferencesVendor:(id)a0 completion:(id /* block */)a1;
- (void)showOverlayInScrollView:(id)a0 viewController:(id)a1;
- (void)webViewBackforwardGestureNavigationWillBegin;
- (void)webViewBackforwardGestureNavigationDidEnd;

@end
