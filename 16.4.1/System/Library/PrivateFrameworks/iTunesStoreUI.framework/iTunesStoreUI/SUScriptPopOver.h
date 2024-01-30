@class SUScriptViewController, UIViewController, UIPopoverController;

@interface SUScriptPopOver : SUScriptObject {
    UIViewController *_contentViewController;
    BOOL _ignoreDismiss;
}

@property (readonly) UIViewController *activeViewController;
@property (retain, nonatomic) UIPopoverController *nativePopoverController;
@property (readonly, nonatomic) UIPopoverController *presentablePopoverController;
@property long long backgroundStyle;
@property double contentHeight;
@property double contentWidth;
@property (readonly) SUScriptViewController *presentingViewController;
@property (retain) SUScriptViewController *viewController;
@property (readonly) long long backgroundStyleBlack;
@property (readonly) long long backgroundStyleClear;
@property (readonly) long long backgroundStyleCream;
@property (readonly) long long backgroundStyleDefault;
@property (readonly) long long backgroundStyleShare;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)dismissAnimated:(id)a0;
- (BOOL)isVisible;
- (BOOL)_isViewControllerVisible;
- (void)dealloc;
- (id)init;
- (id)_className;
- (id)attributeKeys;
- (void)_dismissAnimated:(BOOL)a0;
- (id)scriptAttributeKeys;
- (id)_nativeViewController;
- (void)_overlayWillShowNotification:(id)a0;
- (id)_popOverController;
- (id)_presentablePopoverController;
- (void)_setIgnoresDismiss:(BOOL)a0;
- (void)_setNativeViewController:(id)a0;
- (BOOL)_shouldDisplayAsPopover;
- (void)_showAsModalViewController;
- (void)_viewControllerDidDismiss:(id)a0;
- (void)setContentWidth:(double)a0 height:(double)a1 animated:(BOOL)a2;
- (BOOL)showFromElement:(id)a0;
- (BOOL)showFromNavigationItem:(id)a0;
- (void)tearDownUserInterface;

@end
