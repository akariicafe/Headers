@class UIColor, _UIButtonBarButton, UIView, UIBarButtonItem;

@interface _UIButtonBarButtonVisualProvider : NSObject <NSCopying> {
    _UIButtonBarButton *_button;
    UIBarButtonItem *_barButtonItem;
}

@property (readonly, nonatomic) UIView *backIndicatorView;
@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic) BOOL backButtonConstraintsActive;
@property (nonatomic) BOOL backButtonMaskEnabled;
@property (copy, nonatomic) UIColor *tintColor;
@property (readonly, nonatomic) UIView *alignmentViewForStaticNavBarButtonLeading;
@property (readonly, nonatomic) UIView *alignmentViewForStaticNavBarButtonTrailing;

- (id)buttonContextMenuTargetedPreview;
- (id)buttonContextMenuInteractionConfiguration;
- (void)pointerWillExit:(id)a0;
- (BOOL)buttonHighlitedState:(id)a0 forRequestedState:(BOOL)a1;
- (void)traitCollectionChangedInSubtreeFrom:(id)a0 to:(id)a1;
- (void)updateButton:(id)a0 forEnabledState:(BOOL)a1;
- (void)pointerWillEnter:(id)a0;
- (BOOL)shouldButtonAdjustToTraitCollection:(id)a0;
- (id)buttonSpringLoadedInteractionEffect;
- (id)buttonContextMenuStyleFromDefaultStyle:(id)a0;
- (BOOL)supportsBackButtons;
- (void)updateButton:(id)a0 appearance:(id)a1;
- (BOOL)useLocalPointerInteraction;
- (void)configureButton:(id)a0 withAppearanceDelegate:(id)a1 fromBarItem:(id)a2;
- (void)resetButtonHasHighlighted;
- (void)updateButton:(id)a0 forSelectedState:(BOOL)a1;
- (void)updateButton:(id)a0 toUseButtonShapes:(BOOL)a1;
- (void)updateMenu;
- (void)updateButton:(id)a0 forFocusedState:(BOOL)a1;
- (void)buttonLayoutSubviews:(id)a0 baseImplementation:(id /* block */)a1;
- (void)buttonWillMoveToWindow:(id)a0;
- (id)pointerShapeInContainer:(id)a0;
- (void)buttonWillMoveToSuperview:(id)a0;
- (struct CGSize { double x0; double x1; })buttonIntrinsicContentSize:(id)a0;
- (void)updateButton:(id)a0 forHighlightedState:(BOOL)a1;
- (BOOL)canUpdateMenuInPlace;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })buttonAlignmentRectInsets:(id)a0;
- (id)pointerPreviewParameters;
- (id)buttonSpringLoadedInteractionBehavior;
- (BOOL)buttonEnabledState:(id)a0 forRequestedState:(BOOL)a1;
- (struct CGPoint { double x0; double x1; })menuAnchorPoint;
- (BOOL)buttonSelectionState:(id)a0 forRequestedState:(BOOL)a1;
- (BOOL)shouldLift;
- (id)matchingPointerShapeForView:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inContainer:(id)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)focusEffect;

@end
