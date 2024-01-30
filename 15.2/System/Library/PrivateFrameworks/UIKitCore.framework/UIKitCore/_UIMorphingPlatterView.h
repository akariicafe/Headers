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
@property (nonatomic) BOOL shouldMorphContents;
@property (nonatomic) BOOL allowsElasticMorph;
@property (nonatomic) unsigned long long preferredMorphingAxis;
@property (nonatomic) double collapsedShadowIntensity;
@property (nonatomic) long long collapsedShadowStyle;
@property (nonatomic) long long expandedShadowStyle;
@property (nonatomic) double overrideCollapsedCornerRadius;
@property (nonatomic) double overrideExpandedCornerRadius;

- (void)updateContentSize;
- (void)layoutSubviews;
- (double)_collapsedShadowAlphaForExpansionProgress:(double)a0;
- (void)freezeExpandedPreview;
- (void)_installPreview:(id)a0 inClippingView:(id)a1 transformView:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_interfaceLevelOverrideTraitCollectionForView:(id)a0 expanded:(BOOL)a1;
- (double)_expandedCornerRadius:(BOOL *)a0;
- (void)_updatePathShadow;
- (double)_collapsedCornerRadius:(BOOL *)a0;
- (BOOL)hidesCollapsedSourceView;
- (BOOL)_previewPrefersApplyingMask:(id)a0;
- (void)_updateCollapsedChrome;
- (void).cxx_destruct;
- (void)_updateShadowsWithExpansionProgress:(double)a0 contentBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 center:(struct CGPoint { double x0; double x1; })a2 forPresentation:(BOOL)a3;
- (id)_clearedInterfaceLevelOverrideTraitCollectionForView:(id)a0;
- (void)setHidesCollapsedSourceView:(BOOL)a0;
- (void)_updateClippingViews;
- (void)_updatePathShadowTransform;
- (void)didMoveToWindow;
- (double)_expandedShadowAlphaForExpansionProgress:(double)a0;
- (void)_installShadowViewForStyleIfNecessary:(long long)a0;
- (void)didTearOffForDrag;
- (void)_prepareAnimatableProperties;
- (void)_modelUpdates;

@end
