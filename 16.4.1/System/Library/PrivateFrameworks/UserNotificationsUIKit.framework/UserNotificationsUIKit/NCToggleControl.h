@class NSString, NCToggleControlPair, UILabel, NCClickInteractionPresenter, UIPointerInteraction;
@protocol NCToggleControlDelegate;

@interface NCToggleControl : PLGlyphControl <NCClickInteractionPresenterDelegate, UIPointerInteractionDelegate, PLContentSizeCategoryAdjusting>

@property (readonly, nonatomic, getter=_toggleControlType) unsigned long long toggleControlType;
@property (readonly, nonatomic, getter=_titleLabel) UILabel *titleLabel;
@property (weak, nonatomic, getter=_managingPair, setter=_setManagingPair:) NCToggleControlPair *managingPair;
@property (retain, nonatomic, getter=_previewInteractionPlatterPresenter) NCClickInteractionPresenter *previewInteractionPlatterPresenter;
@property (nonatomic, getter=_wasExpandedPriorToControlEvent) BOOL expandedPriorToControlEvent;
@property (readonly, nonatomic, getter=_cachedEffectiveMaxExpandedSize) struct CGSize { double width; double height; } cachedEffectiveMaxExpandedSize;
@property (readonly, nonatomic, getter=_cachedEffectiveMaxUnexpandedSize) struct CGSize { double width; double height; } cachedEffectiveMaxUnexpandedSize;
@property (retain, nonatomic) UIPointerInteraction *pointerInteraction;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *clearAllText;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (nonatomic) unsigned int anchorEdge;
@property (nonatomic, getter=isGlyphAlwaysVisible) BOOL glyphAlwaysVisible;
@property (weak, nonatomic) id<NCToggleControlDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;

+ (void)performWithDefaultExpansionAnimation:(id /* block */)a0 completion:(id /* block */)a1;
+ (id)dismissControlWithMaterialRecipe:(long long)a0 clearAllText:(id)a1;
+ (id)showLessControlWithMaterialRecipe:(long long)a0 clearAllText:(id)a1;
+ (double)effectiveHeight:(BOOL)a0;
+ (id)_labelFont:(BOOL)a0;

- (void)_updateTitleLabelVisualStyling;
- (void)clickInteractionPresenterDidCommitToPresentation:(id)a0;
- (void)addTarget:(id)a0 forPreviewInteractionPresentedContentWithAction:(SEL)a1;
- (BOOL)dismissModalFullScreenIfNeeded;
- (void)_sendActionsForEvents:(unsigned long long)a0 withEvent:(id)a1;
- (void)_updateTitleLabelTextAttributes;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)setVisualStyle:(long long)a0;
- (void)_handleTouchUpInsideWithEvent:(id)a0;
- (double)_effectiveValueForMinValue:(double)a0 withFont:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_unexpandedFrame;
- (struct CGSize { double x0; double x1; })_effectiveExpandedSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_labelFont;
- (struct CGSize { double x0; double x1; })_effectiveGlyphSize;
- (void)_configureTitleLabelIfNecessaryWithTitle:(id)a0;
- (double)_effectiveLeadingTrailingPadding;
- (id)containerViewForClickInteractionPresenter:(id)a0;
- (double)_effectiveInternalPadding;
- (double)_effectiveHeight;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)clickInteractionPresenterDidBeginInteraction:(id)a0;
- (void)layoutSubviews;
- (double)_cornerRadius;
- (void)_handleSecondaryClickEventForGestureRecognizer:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })_sizeThatFits:(struct CGSize { double x0; double x1; })a0 whenExpanded:(BOOL)a1;
- (void)clickInteractionPresenterDidPresent:(id)a0;
- (void)clickInteractionPresenterDidDismiss:(id)a0;
- (BOOL)adjustForContentSizeCategoryChange;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_effectiveUnexpandedSize;
- (BOOL)clickInteractionPresenterShouldBegin:(id)a0;

@end
