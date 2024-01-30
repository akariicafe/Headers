@class _UIBarCustomizationItem, NSArray, NSString, _UIBarCustomizationChicletAnchorView, UILabel, UIView, UIPointerInteraction;

@interface _UIBarCustomizationChiclet : UIView <UIPointerInteractionDelegate>

@property (retain, nonatomic) UIView *contentWrapperView;
@property (retain, nonatomic) UIView *rootItemView;
@property (retain, nonatomic) NSArray *subitemViews;
@property (retain, nonatomic) UIView *platterView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIPointerInteraction *pointerInteraction;
@property (nonatomic) BOOL platterVisible;
@property (nonatomic) BOOL labelVisible;
@property (nonatomic) BOOL minimized;
@property (readonly, nonatomic) BOOL fixed;
@property (nonatomic) long long chicletSize;
@property (weak, nonatomic) _UIBarCustomizationChicletAnchorView *anchorView;
@property (readonly, weak, nonatomic) _UIBarCustomizationItem *representedItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_traitCollectionDidChangeOnSubtreeInternal:(const struct _UITraitCollectionChangeDescription { id x0; id x1; BOOL x2; struct _UITraitCollectionTraitChanges { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; } x3; } *)a0;
- (struct CGSize { double x0; double x1; })_currentContentSize;
- (void)sizeToFit;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_addContentView:(id)a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_contentSizeWithInterItemSpacing:(double)a0;
- (double)_currentInterItemSpacing;
- (double)_interItemSpacingForChicletSize:(long long)a0;
- (BOOL)_isDisplayingRootItem;
- (void)_updatePlatterShadow;
- (struct CGSize { double x0; double x1; })fittingSizeWithChicletSize:(long long)a0;
- (id)initWithItem:(id)a0;
- (void)updateItemCenterPoints;

@end
