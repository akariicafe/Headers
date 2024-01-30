@class UIBarButtonItem, _UIButtonBarButton, UIView;

@interface _UIButtonBarButtonVisualProvider : NSObject <NSCopying> {
    _UIButtonBarButton *_button;
    UIBarButtonItem *_barButtonItem;
}

@property (readonly, nonatomic) UIView *backIndicatorView;
@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic) BOOL backButtonConstraintsActive;
@property (nonatomic) BOOL backButtonMaskEnabled;
@property (readonly, nonatomic) UIView *alignmentViewForStaticNavBarButtonLeading;
@property (readonly, nonatomic) UIView *alignmentViewForStaticNavBarButtonTrailing;

- (id)pointerPreviewParameters;
- (id)pointerShapeInContainer:(id)a0;
- (void)updateButton:(id)a0 forEnabledState:(BOOL)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)shouldLift;
- (BOOL)buttonSelectionState:(id)a0 forRequestedState:(BOOL)a1;
- (void)traitCollectionChangedInSubtreeFrom:(id)a0 to:(id)a1;
- (void)resetButtonHasHighlighted;
- (void)updateMenu;
- (void)updateButton:(id)a0 forHighlightedState:(BOOL)a1;
- (id)buttonContextMenuInteractionConfiguration;
- (BOOL)buttonHighlitedState:(id)a0 forRequestedState:(BOOL)a1;
- (struct CGPoint { double x0; double x1; })menuAnchorPoint;
- (void)updateButton:(id)a0 toUseButtonShapes:(BOOL)a1;
- (unsigned long long)hash;
- (id)matchingPointerShapeForView:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inContainer:(id)a2;
- (void)updateButton:(id)a0 forSelectedState:(BOOL)a1;
- (void)pointerWillExit:(id)a0;
- (void)configureButton:(id)a0 withAppearanceDelegate:(id)a1 fromBarItem:(id)a2;
- (BOOL)buttonEnabledState:(id)a0 forRequestedState:(BOOL)a1;
- (id)buttonSpringLoadedInteractionBehavior;
- (BOOL)shouldButtonAdjustToTraitCollection:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)canUpdateMenuInPlace;
- (void)buttonLayoutSubviews:(id)a0 baseImplementation:(id /* block */)a1;
- (id)buttonContextMenuStyleFromDefaultStyle:(id)a0;
- (void)updateButton:(id)a0 forFocusedState:(BOOL)a1;
- (id)contentCursorInContainer:(id)a0;
- (void)pointerWillEnter:(id)a0;
- (id)buttonSpringLoadedInteractionEffect;
- (void)updateButton:(id)a0 appearance:(id)a1;
- (id)buttonContextMenuTargetedPreview;
- (void)cursorWillExit:(id)a0;
- (void)buttonWillMoveToWindow:(id)a0;
- (void)buttonWillMoveToSuperview:(id)a0;
- (struct CGSize { double x0; double x1; })buttonIntrinsicContentSize:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })buttonAlignmentRectInsets:(id)a0;
- (BOOL)supportsBackButtons;
- (void)cursorWillEnter:(id)a0;
- (BOOL)useLocalPointerInteraction;

@end
