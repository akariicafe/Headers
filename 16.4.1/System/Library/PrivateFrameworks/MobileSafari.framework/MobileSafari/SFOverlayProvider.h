@class CPSInlineCardViewController, NSString, NSURL, _SFPerSitePreferencesVendor, UIViewController;
@protocol SFOverlayProviderDelegate;

@interface SFOverlayProvider : NSObject <CPSInlineCardViewControllerDelegate> {
    CPSInlineCardViewController *_cardViewController;
    UIViewController *_cachedOwningViewController;
}

@property (class, readonly, nonatomic) BOOL alwaysShowOverlayForDebug;

@property (readonly, nonatomic) UIViewController *overlayViewController;
@property (readonly, nonatomic) NSURL *url;
@property (weak, nonatomic) id<SFOverlayProviderDelegate> delegate;
@property (nonatomic, getter=isAvailable) BOOL available;
@property (weak, nonatomic, setter=_setPreferencesVendor:) _SFPerSitePreferencesVendor *_preferencesVendor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)cardViewControllerDidDisappear:(id)a0 clipDidOpen:(BOOL)a1 persistUserSettings:(BOOL)a2;
- (void)hideOverlayAnimated:(BOOL)a0;
- (void)showOverlayInScrollView:(id)a0 viewController:(id)a1;
- (void)webViewBackforwardGestureNavigationDidEnd;
- (void)webViewBackforwardGestureNavigationWillBegin;

@end
