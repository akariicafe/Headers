@class NSString, NSArray, SBFluidSwitcherItemContainerFooterView, SBHomeGrabberRotationView, SBAppSwitcherSettings, CAShapeLayer, SBFTouchPassThroughView, SBFluidSwitcherIconOverlayView, SBSwitcherShelfViewController;
@protocol SBFluidSwitcherSpaceOverlayAccessoryViewDelegate;

@interface SBFluidSwitcherSpaceOverlayAccessoryView : SBFTouchPassThroughClippingView <SBFluidSwitcherItemContainerFooterViewDelegate> {
    SBFTouchPassThroughView *_contentView;
    SBAppSwitcherSettings *_settings;
    SBFluidSwitcherItemContainerFooterView *_footerView;
    CAShapeLayer *_focusIndicatorLayer;
    SBFluidSwitcherIconOverlayView *_iconOverlayView;
}

@property (readonly, weak, nonatomic) id<SBFluidSwitcherSpaceOverlayAccessoryViewDelegate> delegate;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long maskedCorners;
@property (nonatomic) double contentScale;
@property (retain, nonatomic) SBHomeGrabberRotationView *homeGrabberView;
@property (nonatomic) BOOL drawsFocusIndicator;
@property (nonatomic) BOOL drawsFooter;
@property (nonatomic) BOOL uniqueIconsOnly;
@property (nonatomic) BOOL wantsPointerInteractions;
@property (nonatomic) double iconHitTestOutset;
@property (nonatomic) unsigned long long iconAlignment;
@property (nonatomic) double titleAndIconOpacity;
@property (nonatomic) double titleOpacity;
@property (nonatomic) unsigned long long footerStyle;
@property (nonatomic) unsigned long long multiWindowIndicatorRoleMask;
@property (copy, nonatomic) NSArray *titleItems;
@property (retain, nonatomic) SBSwitcherShelfViewController *shelfViewController;
@property (nonatomic) double contentViewScale;
@property (nonatomic) struct CGPoint { double x; double y; } contentViewOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateFooterVisibility;
- (void)itemContainerFooterView:(id)a0 didSelectTitleItem:(id)a1;
- (void)_configureDebugBorder;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)prepareForReuse;
- (void)configureOverlayForIconZoomWithView:(id)a0 crossfadeViews:(id)a1;
- (void)_updateContentViewLayout;
- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (double)_inverseContentScale;
- (void)setTitleItems:(id)a0 animated:(BOOL)a1;
- (void)_updateFocusIndicator;
- (void)removeIconOverlay;
- (void).cxx_destruct;
- (void)_updateFooterAnimated:(BOOL)a0;

@end
