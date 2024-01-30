@class UIColor, _UIToolbarConfiguration, UIToolbar, UIView, NSLayoutConstraint;

@interface QLToolbarController : NSObject {
    NSLayoutConstraint *_clippingExtensionContainerHeightConstraint;
    NSLayoutConstraint *_clippingExtensionContainerBottomConstraint;
    NSLayoutConstraint *_toolbarHeightConstraint;
    NSLayoutConstraint *_accessoryContainerHeightConstraint;
    NSLayoutConstraint *_toolbarBottomConstraint;
    UIView *_clippingExtensionContainer;
    UIView *_accessoryViewContainer;
    _UIToolbarConfiguration *_originalToolbarConfiguration;
    _UIToolbarConfiguration *_customToolbarConfiguration;
    double _derivedToolbarExtensionHeight;
}

@property (weak, nonatomic) UIToolbar *originalToolbar;
@property (readonly) UIToolbar *customToolbar;
@property (weak, nonatomic) UIView *accessoryView;
@property (nonatomic) double preferredAccesoryViewHeight;
@property (nonatomic, getter=isAccessoryViewHidden) BOOL accessoryViewHidden;
@property (nonatomic, getter=isOriginalToolbarHidden) BOOL originalToolbarHidden;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic) double toolbarAlpha;
@property (nonatomic) double originalToolbarAlpha;
@property (nonatomic) double accessoryViewAlpha;
@property (nonatomic) double hiddenProgress;
@property (nonatomic) double accessoryViewHiddenProgress;
@property (retain, nonatomic) UIColor *barTintColor;
@property (readonly, weak, nonatomic) UIView *preferredSuperview;
@property (readonly, weak, nonatomic) UIView *preferredParentViewForSafeAreaInset;

- (void)updateLayout;
- (id)init;
- (void).cxx_destruct;
- (double)_totalHeight;
- (double)_computeClippingExtensionContainerBottomConstraint;
- (double)_computeClippingExtensionContainerHeightForCurrentHiddenProgress;
- (void)_embedAccessoryView;
- (void)_layoutAccessoryView:(id)a0;
- (double)_originalToolbarHeightIncludingSafeAreaBottomInset:(BOOL)a0;
- (double)_toolbarExtensionHeight;
- (double)_toolbarSafeAreaInsetBottom;
- (BOOL)_tryToSetUp:(BOOL)a0;
- (void)restoreOriginalConfiguration;
- (void)restoreOriginalToolbar;
- (void)setAccessoryView:(id)a0 animated:(BOOL)a1;
- (void)setPreferredSuperview:(id)a0 preferredParentViewForSafeAreaInset:(id)a1;

@end
