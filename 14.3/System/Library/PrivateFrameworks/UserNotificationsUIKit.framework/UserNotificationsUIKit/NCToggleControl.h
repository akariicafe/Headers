@class NSString, NCToggleControlPair, UILabel, NCClickInteractionPresenter;
@protocol NCToggleControlDelegate;

@interface NCToggleControl : PLGlyphControl <NCClickInteractionPresenterDelegate, _UICursorInteractionDelegate, PLContentSizeCategoryAdjusting>

@property (readonly, nonatomic, getter=_toggleControlType) unsigned long long toggleControlType;
@property (readonly, nonatomic, getter=_titleLabel) UILabel *titleLabel;
@property (weak, nonatomic, getter=_managingPair, setter=_setManagingPair:) NCToggleControlPair *managingPair;
@property (retain, nonatomic, getter=_previewInteractionPlatterPresenter) NCClickInteractionPresenter *previewInteractionPlatterPresenter;
@property (nonatomic, getter=_wasExpandedPriorToControlEvent) BOOL expandedPriorToControlEvent;
@property (readonly, nonatomic, getter=_cachedEffectiveMaxExpandedSize) struct CGSize { double width; double height; } cachedEffectiveMaxExpandedSize;
@property (readonly, nonatomic, getter=_cachedEffectiveMaxUnexpandedSize) struct CGSize { double width; double height; } cachedEffectiveMaxUnexpandedSize;
@property (copy, nonatomic) NSString *title;
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

+ (id)dismissControlWithMaterialRecipe:(long long)a0;
+ (void)performWithDefaultExpansionAnimation:(id /* block */)a0 completion:(id /* block */)a1;
+ (double)effectiveHeight:(BOOL)a0;
+ (id)showLessControlWithMaterialRecipe:(long long)a0;
+ (id)_labelFont:(BOOL)a0;

- (id)cursorInteraction:(id)a0 regionForLocation:(struct CGPoint { double x0; double x1; })a1 defaultRegion:(id)a2;
- (double)_cornerRadius;
- (id)cursorInteraction:(id)a0 styleForRegion:(id)a1 modifiers:(long long)a2;
- (BOOL)adjustForContentSizeCategoryChange;
- (void).cxx_destruct;
- (id)_labelFont;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_sendActionsForEvents:(unsigned long long)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)dismissModalFullScreenIfNeeded;
- (void)addTarget:(id)a0 forPreviewInteractionPresentedContentWithAction:(SEL)a1;
- (void)_handleSecondaryClickEventForGestureRecognizer:(id)a0;
- (void)_configureTitleLabelIfNecessaryWithTitle:(id)a0;
- (struct CGSize { double x0; double x1; })_effectiveExpandedSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_unexpandedFrame;
- (struct CGSize { double x0; double x1; })_effectiveGlyphSize;
- (double)_effectiveLeadingTrailingPadding;
- (void)_handleTouchUpInsideWithEvent:(id)a0;
- (void)_updateTitleLabelTextAttributes;
- (double)_effectiveHeight;
- (void)_updateTitleLabelVisualStyling;
- (double)_effectiveValueForMinValue:(double)a0 withFont:(id)a1;
- (struct CGSize { double x0; double x1; })_sizeThatFits:(struct CGSize { double x0; double x1; })a0 whenExpanded:(BOOL)a1;
- (struct CGSize { double x0; double x1; })_effectiveUnexpandedSize;
- (double)_effectiveInternalPadding;
- (id)containerViewForClickInteractionPresenter:(id)a0;
- (BOOL)clickInteractionPresenterShouldBegin:(id)a0;
- (void)clickInteractionPresenterDidBeginInteraction:(id)a0;
- (void)clickInteractionPresenterDidCommitToPresentation:(id)a0;
- (void)clickInteractionPresenterDidPresent:(id)a0;
- (void)clickInteractionPresenterDidDismiss:(id)a0;

@end
