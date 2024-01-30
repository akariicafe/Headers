@class SBAppSwitcherSettings, NSString, SBWallpaperEffectView, UIView, SBAppSwitcherPageShadowView;
@protocol SBAppSwitcherPageContentView;

@interface SBAppSwitcherPageView : UIView <PTSettingsKeyObserver> {
    UIView *_hitTestBlocker;
    UIView *_dimmingView;
    SBWallpaperEffectView *_wallpaperOverlayView;
    UIView *_lighteningView;
    UIView *_viewClippingView;
    SBAppSwitcherSettings *_settings;
}

@property (readonly, nonatomic) UIView *_overlayClippingView;
@property (readonly, nonatomic) SBAppSwitcherPageShadowView *_shadowView;
@property (retain, nonatomic) UIView<SBAppSwitcherPageContentView> *view;
@property (retain, nonatomic) UIView *overlay;
@property (nonatomic) long long shadowStyle;
@property (nonatomic) double shadowAlpha;
@property (nonatomic) double shadowOffset;
@property (nonatomic) double overlayAlpha;
@property (nonatomic) double contentAlpha;
@property (nonatomic) double darkeningAlpha;
@property (nonatomic) BOOL needsBackgroundWallpaperTreatment;
@property (nonatomic) double wallpaperOverlayAlpha;
@property (nonatomic) double lighteningAlpha;
@property (nonatomic) struct UIRectCornerRadii { double topLeft; double bottomLeft; double bottomRight; double topRight; } cornerRadii;
@property (nonatomic) long long orientation;
@property (nonatomic) unsigned long long highlightType;
@property (nonatomic) BOOL shouldClipContentView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentClippingFrame;
@property (nonatomic) struct CGSize { double width; double height; } overlayViewSize;
@property (nonatomic) struct CGSize { double width; double height; } fullyPresentedSize;
@property (nonatomic) double switcherCardScale;
@property (nonatomic) BOOL shouldScaleOverlayToFillBounds;
@property (nonatomic) BOOL blocksTouches;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=isVisible) BOOL visible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateShadow;
- (void)_orderSubviews;
- (void).cxx_destruct;
- (void)_updateEffectOverlayViews;
- (void)setView:(id)a0 animated:(BOOL)a1;
- (void)_setupShadowView;
- (void)_updateDimmingViewAlpha;
- (void)_updateCornerRadius;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_viewFrame;
- (void)setOverlay:(id)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateLighteningAlpha;
- (void)_layoutOverlayView;
- (void)_updateWallpaperOverlayAlpha;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)invalidate;

@end
