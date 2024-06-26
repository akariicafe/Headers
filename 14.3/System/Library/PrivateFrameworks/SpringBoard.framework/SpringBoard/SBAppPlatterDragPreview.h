@class BSCornerRadiusConfiguration, SBApplicationBlurContentView, NSArray, UIView, SBIcon, NSString, SBFView, SBIconView, SBPortalView;

@interface SBAppPlatterDragPreview : UIView <SBIconDragPreview, BSDescriptionProviding> {
    BOOL _isBlurredPlatterReady;
    BOOL _hasAnimatedToBlurredPlatter;
    unsigned long long _platterViewAlphaAnimationCount;
    BOOL _iconIsHighlighted;
    BOOL _iconInitiallyShowingCloseBox;
    UIView *_sourceView;
    SBApplicationBlurContentView *_platterView;
    SBIconView *_referenceIconView;
    SBIconView *_iconView;
    UIView *_anchorPointAdjustmentContainerView;
    UIView *_iconContainerView;
    UIView *_cornerMaskingView;
    SBPortalView *_sourcePortalView;
    UIView *_unclippedSourceContainerView;
    SBFView *_diffuseShadowView;
    SBFView *_rimShadowView;
}

@property (nonatomic) unsigned long long mode;
@property (copy, nonatomic) id /* block */ cleanUpHandler;
@property (readonly, nonatomic) UIView *sourceView;
@property (readonly, nonatomic) SBApplicationBlurContentView *platterView;
@property (readonly, nonatomic, getter=isAnimatingPlatterViewAlpha) BOOL animatingPlatterViewAlpha;
@property (copy, nonatomic) id /* block */ platterViewAlphaAnimationCompletionBlock;
@property (nonatomic) struct CGSize { double width; double height; } platterSize;
@property (nonatomic) double platterScale;
@property (nonatomic) struct SBDragPreviewShadowParameters { double shadowOpacity; double shadowRadius; struct CGSize { double width; double height; } shadowOffset; } diffuseShadowParameters;
@property (nonatomic) struct SBDragPreviewShadowParameters { double shadowOpacity; double shadowRadius; struct CGSize { double width; double height; } shadowOffset; } rimShadowParameters;
@property (copy, nonatomic) NSArray *diffuseShadowFilters;
@property (copy, nonatomic) NSArray *rimShadowFilters;
@property (retain, nonatomic) BSCornerRadiusConfiguration *cornerRadiusConfiguration;
@property (nonatomic) struct CGPoint { double x; double y; } anchorPoint;
@property (nonatomic) double rotation;
@property (nonatomic) unsigned long long dragState;
@property (nonatomic, getter=isFlocked) BOOL flocked;
@property (nonatomic) BOOL iconAllowsLabelArea;
@property (nonatomic) BOOL iconCanShowCloseBox;
@property (nonatomic) double iconContentScale;
@property (nonatomic) BOOL iconIsEditing;
@property (retain, nonatomic) SBIcon *icon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_isDragging;
- (void).cxx_destruct;
- (void)_updateSubviewVisibility;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)updateDestinationIconLocation:(id)a0 allowsLabelArea:(BOOL)a1 animated:(BOOL)a2;
- (void)dropDestinationAnimationCompleted;
- (void)draggingSourceCancelAnimationCompleted;
- (void)draggingSourceDroppedWithOperation:(unsigned long long)a0;
- (void)setIconIsEditing:(BOOL)a0 animated:(BOOL)a1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)layoutSubviews;
- (id)succinctDescriptionBuilder;
- (id)initWithReferenceIconView:(id)a0 sourceView:(id)a1;
- (void)updateSourceView:(id)a0;
- (void)_matchMoveView:(id)a0 toContainerView:(id)a1;
- (void)_configureIconViewWithReferenceIconView:(id)a0;
- (void)_updateIconViewComponentVisibility;
- (void)_updateShowDebugIconBorderWithColor:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_effectiveIconViewFrame;
- (void)_getIconAlpha:(double *)a0 platterAlpha:(double *)a1;
- (void)invalidateSourceView;
- (void)handleCleanup;
- (double)_effectiveIconContentScale;
- (struct CGPoint { double x0; double x1; })_effectiveIconContainerCenter;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_effectivePlatterFrame;
- (id)_effectiveCornerRadiusConfiguration;
- (double)_effectiveCornerRadius;
- (void)_updateShadowView;
- (void)_updateContainerViewPositionForAnchorPoint;
- (unsigned long long)_effectiveMode;
- (double)iconDragAlpha;
- (void)_setSourcePortalViewHidden:(BOOL)a0;
- (double)_blurContentViewIconViewCenterYOffset;
- (double)_effectiveIconAccessoryAlpha;
- (BOOL)_effectiveIconAllowsLabelArea;
- (BOOL)_effectiveIconIsHighlighted;
- (BOOL)_effectiveIconCanShowCloseBox;
- (void)configurePlatterForSceneHandle:(id)a0 withTargetView:(id)a1 completion:(id /* block */)a2;

@end
