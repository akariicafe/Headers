@class UIView, NSString, NSArray, SBAppSwitcherSettings, SBSeparatorView, SBFTouchPassThroughView, SBFluidSwitcherItemContainerHeaderView, UIBezierPath, SBAppSwitcherPageShadowView;
@protocol SBFluidSwitcherSpaceUnderlayAccessoryViewDelegate;

@interface SBFluidSwitcherSpaceUnderlayAccessoryView : SBFTouchPassThroughClippingView <SBFluidSwitcherItemContainerHeaderViewDelegate, SBSystemPointerInteractionDelegate> {
    SBFTouchPassThroughView *_contentView;
    SBAppSwitcherSettings *_settings;
    SBFluidSwitcherItemContainerHeaderView *_headerView;
    BOOL _headerNeedsNonAnimatedLayout;
    UIView *_backgroundView;
    SBAppSwitcherPageShadowView *_shadowView;
    SBSeparatorView *_resizeGrabber;
    BOOL _resizeGrabberNeedsNonAnimatedLayout;
}

@property (readonly, weak, nonatomic) id<SBFluidSwitcherSpaceUnderlayAccessoryViewDelegate> delegate;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long maskedCorners;
@property (nonatomic) double contentScale;
@property (nonatomic) double keyboardHeight;
@property (readonly, nonatomic) double headerOpacity;
@property (nonatomic) double titleOpacity;
@property (readonly, copy, nonatomic) NSArray *titleItems;
@property (nonatomic) double backgroundOpacity;
@property (nonatomic) double shadowAlpha;
@property (nonatomic) double shadowOffset;
@property (nonatomic) long long shadowStyle;
@property (retain, nonatomic) UIBezierPath *shadowPath;
@property (nonatomic) double resizeGrabberOpacity;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } resizeGrabberBounds;
@property (nonatomic) struct CGPoint { double x; double y; } resizeGrabberCenter;
@property (nonatomic) double contentViewScale;
@property (nonatomic) struct CGPoint { double x; double y; } contentViewOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)styleForRegion:(id)a0 forView:(id)a1;
- (BOOL)shouldBeginPointerInteractionAtLocation:(struct CGPoint { double x0; double x1; })a0 forView:(id)a1;
- (void)_updateContentView;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })pointerInteractionHitTestInsetsForView:(id)a0;
- (void)_updateShadowVisibility;
- (void)layoutSubviews;
- (void)_configureDebugBorder;
- (id)initWithDelegate:(id)a0;
- (void)_updateBackgroundView;
- (void)_updateResizeGrabberVisibility;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)itemContainerHeaderView:(id)a0 didSelectTitleItem:(id)a1;
- (void)prepareForReuse;
- (void)setTitleItems:(id)a0 animated:(BOOL)a1;
- (void)dealloc;
- (void)setHeaderOpacity:(double)a0 updateMode:(long long)a1 settings:(id)a2 completion:(id /* block */)a3;
- (void)_updateHeaderAnimated:(BOOL)a0;
- (void)_updateShadowView;
- (void)_updateResizeGrabber;
- (void)_updateBackgroundViewVisibility;

@end
