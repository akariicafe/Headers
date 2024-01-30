@class _UIPlatterTransformView, UITargetedPreview, _UIRoundedRectShadowView, UIViewFloatAnimatableProperty, _UIPlatterSoftShadowView, _UIPlatterClippingView;

@interface _UIPreviewPlatterView : UIView

@property (retain, nonatomic) _UIPlatterClippingView *collapsedClippingView;
@property (retain, nonatomic) _UIPlatterTransformView *collapsedTransformView;
@property (retain, nonatomic) _UIPlatterClippingView *expandedClippingView;
@property (retain, nonatomic) _UIPlatterTransformView *expandedTransformView;
@property (retain, nonatomic) _UIPlatterSoftShadowView *pathShadowView;
@property (retain, nonatomic) _UIRoundedRectShadowView *rectangularShadowView;
@property (nonatomic, getter=isFrozen) BOOL frozen;
@property (nonatomic) BOOL contentSizeDidChange;
@property (nonatomic) unsigned long long preferredMorphingAxis;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *expansionProgress;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *platterWidth;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *platterHeight;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *collapsedContentWidth;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *collapsedContentHeight;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *expandedContentWidth;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *expandedContentHeight;
@property (retain, nonatomic) UITargetedPreview *collapsedPreview;
@property (retain, nonatomic) UITargetedPreview *expandedPreview;
@property (readonly, nonatomic) BOOL bothViewsAreLikelyOpaque;
@property (nonatomic) BOOL expanded;
@property (nonatomic) BOOL hideShadowWhenCollapsed;
@property (nonatomic) BOOL hideChromeWhenCollapsed;
@property (nonatomic) BOOL alwaysCompact;
@property (nonatomic) BOOL allowsUserInteractionInExpandedPreview;
@property (nonatomic) BOOL preventPreviewRasterization;
@property (nonatomic) BOOL hidesCollapsedSourceView;
@property (nonatomic) BOOL shouldMorphContents;

- (void).cxx_destruct;
- (void)freezeExpandedPreview;
- (void)setHidesCollapsedSourceView:(BOOL)a0;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_prepareAnimatableProperties;
- (void)_updateClippingViews;
- (void)_modelUpdates;
- (id)_interfaceLevelOverrideTraitCollectionForView:(id)a0 expanded:(BOOL)a1;
- (void)_updatePathShadowTransform;
- (void)_updateCollapsedChrome;
- (double)_rectangularShadowAlphaForExpansionProgress:(double)a0;
- (double)_pathShadowAlphaForExpansionProgress:(double)a0;
- (void)_updatePathShadow;
- (BOOL)_previewIsLikelyOpaque:(id)a0;
- (void)_installPreview:(id)a0 inClippingView:(id)a1 transformView:(id)a2;
- (void)didTearOffForDrag;
- (BOOL)_previewPrefersApplyingMask:(id)a0;
- (BOOL)hidesCollapsedSourceView;
- (void)updateContentSize;

@end
