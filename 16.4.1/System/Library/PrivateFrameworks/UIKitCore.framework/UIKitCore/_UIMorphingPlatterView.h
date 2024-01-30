@class _UIPlatterTransformView, NSMutableDictionary, _UIMorphingPlatterAnimatableFloat, UITargetedPreview, _UIPlatterSoftShadowView, _UIPlatterClippingView;

@interface _UIMorphingPlatterView : UIView

@property (retain, nonatomic) _UIPlatterClippingView *collapsedClippingView;
@property (retain, nonatomic) _UIPlatterTransformView *collapsedTransformView;
@property (retain, nonatomic) _UIPlatterClippingView *expandedClippingView;
@property (retain, nonatomic) _UIPlatterTransformView *expandedTransformView;
@property (retain, nonatomic) NSMutableDictionary *shadowViews;
@property (retain, nonatomic) _UIPlatterSoftShadowView *pathShadowView;
@property (nonatomic, getter=isFrozen) BOOL frozen;
@property (nonatomic) BOOL contentSizeDidChange;
@property (retain, nonatomic) _UIMorphingPlatterAnimatableFloat *expansionProgress;
@property (retain, nonatomic) _UIMorphingPlatterAnimatableFloat *platterWidth;
@property (retain, nonatomic) _UIMorphingPlatterAnimatableFloat *platterHeight;
@property (retain, nonatomic) UITargetedPreview *collapsedPreview;
@property (retain, nonatomic) UITargetedPreview *expandedPreview;
@property (readonly, nonatomic) BOOL bothViewsAreLikelyOpaque;
@property (nonatomic) BOOL expanded;
@property (nonatomic) BOOL hideChromeWhenCollapsed;
@property (nonatomic) BOOL alwaysCompact;
@property (nonatomic) BOOL allowsUserInteractionInExpandedPreview;
@property (nonatomic) BOOL preventPreviewRasterization;
@property (nonatomic) BOOL hidesCollapsedSourceView;
@property (nonatomic) BOOL wantsEdgeAntialiasing;
@property (nonatomic) BOOL shouldMorphContents;
@property (nonatomic) BOOL allowsElasticMorph;
@property (nonatomic) unsigned long long preferredMorphingAxis;
@property (nonatomic) double collapsedShadowIntensity;
@property (nonatomic) long long collapsedShadowStyle;
@property (nonatomic) double expandedShadowIntensity;
@property (nonatomic) long long expandedShadowStyle;
@property (nonatomic) double overrideCollapsedCornerRadius;
@property (nonatomic) double overrideExpandedCornerRadius;

- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateContentSize;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)_clearedInterfaceLevelOverrideTraitCollectionForView:(id)a0;
- (double)_collapsedCornerRadius:(BOOL *)a0 maskedCorners:(unsigned long long *)a1;
- (double)_collapsedShadowAlphaForExpansionProgress:(double)a0;
- (double)_expandedCornerRadius:(BOOL *)a0 maskedCorners:(unsigned long long *)a1 ignoreLiftScale:(BOOL)a2;
- (double)_expandedShadowAlphaForExpansionProgress:(double)a0;
- (void)_installPreview:(id)a0 inClippingView:(id)a1 transformView:(id)a2;
- (void)_installShadowViewForStyleIfNecessary:(long long)a0;
- (id)_interfaceLevelOverrideTraitCollectionForView:(id)a0 expanded:(BOOL)a1;
- (void)_modelUpdates;
- (void)_prepareAnimatableProperties;
- (BOOL)_previewPrefersApplyingMask:(id)a0;
- (void)_updateClippingViews;
- (void)_updateCollapsedChrome;
- (void)_updatePathShadow;
- (void)_updatePathShadowTransform;
- (void)_updateShadowsWithExpansionProgress:(double)a0 contentBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 center:(struct CGPoint { double x0; double x1; })a2 forPresentation:(BOOL)a3;
- (void)didTearOffForDrag;
- (void)freezeExpandedPreview;
- (BOOL)hidesCollapsedSourceView;
- (void)setHidesCollapsedSourceView:(BOOL)a0;

@end
