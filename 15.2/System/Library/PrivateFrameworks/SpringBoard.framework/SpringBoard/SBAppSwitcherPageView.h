@class SBAppSwitcherSettings, NSString, SBWallpaperEffectView, UIView, SBAppSwitcherPageShadowView;
@protocol SBAppSwitcherPageContentView, SBAppSwitcherPageViewDelegate;

@interface SBAppSwitcherPageView : SBHitTestExtendedView <PTSettingsKeyObserver> {
    UIView *_hitTestBlocker;
    UIView *_dimmingView;
    SBWallpaperEffectView *_wallpaperOverlayView;
    UIView *_tintView;
    UIView *_viewClippingView;
    UIView *_contentContainerView;
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
@property (nonatomic) double dimmingAlpha;
@property (nonatomic) BOOL needsBackgroundWallpaperTreatment;
@property (nonatomic) double wallpaperOverlayAlpha;
@property (nonatomic) double lighteningAlpha;
@property (nonatomic) struct UIRectCornerRadii { double topLeft; double bottomLeft; double bottomRight; double topRight; } cornerRadii;
@property (nonatomic) unsigned long long maskedCorners;
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
@property (nonatomic) long long tintStyle;
@property (weak, nonatomic) id<SBAppSwitcherPageViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_orderSubviews;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)layoutSubviews;
- (void)_updateDimmingViewAlpha;
- (void)_updateWallpaperOverlayAlpha;
- (void)setView:(id)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateTintViewAlpha;
- (void)_updateShadowPresence;
- (void)_addContentView:(id)a0;
- (void)setOverlay:(id)a0 animated:(BOOL)a1;
- (void)_updateEffectOverlayViews;
- (void)_updateCornerRadius;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)invalidate;
- (void)_layoutOverlayView;
- (BOOL)_supportsAsymmetricalCornerRadii;

@end
