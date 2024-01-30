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

+ (void)registerPlatformVisualProviderClass:(Class)a0 forIdiom:(long long)a1;
+ (id)visualProviderForIdiom:(long long)a0;

- (void)updateButton:(id)a0 forEnabledState:(BOOL)a1;
- (id)buttonContextMenuTargetedPreview;
- (id)matchingPointerShapeForView:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inContainer:(id)a2;
- (BOOL)shouldSuppressPointerSpecularFilter;
- (void)updateButton:(id)a0 forSelectedState:(BOOL)a1;
- (struct CGSize { double x0; double x1; })buttonIntrinsicContentSize:(id)a0;
- (id)buttonContextMenuInteractionConfiguration;
- (id)focusEffect;
- (BOOL)buttonSelectionState:(id)a0 forRequestedState:(BOOL)a1;
- (void)buttonWillMoveToWindow:(id)a0;
- (void)traitCollectionChangedInSubtreeFrom:(id)a0 to:(id)a1;
- (void)resetButtonHasHighlighted;
- (void)buttonWillMoveToSuperview:(id)a0;
- (id)buttonSpringLoadedInteractionEffect;
- (id)buttonSpringLoadedInteractionBehavior;
- (BOOL)shouldLift;
- (void)updateButton:(id)a0 appearance:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)buttonEnabledState:(id)a0 forRequestedState:(BOOL)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })buttonAlignmentRectInsets:(id)a0;
- (void)updateMenu;
- (struct CGSize { double x0; double x1; })buttonImageViewSize:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)configureButton:(id)a0 withAppearanceDelegate:(id)a1 fromBarItem:(id)a2;
- (BOOL)canUpdateMenuInPlace;
- (unsigned long long)hash;
- (void)pointerWillExit:(id)a0;
- (void)updateButton:(id)a0 forFocusedState:(BOOL)a1;
- (struct CGPoint { double x0; double x1; })menuAnchorPoint;
- (id)pointerPreviewParameters;
- (BOOL)buttonHighlitedState:(id)a0 forRequestedState:(BOOL)a1;
- (void)buttonLayoutSubviews:(id)a0 baseImplementation:(id /* block */)a1;
- (void)updateButton:(id)a0 toUseButtonShapes:(BOOL)a1;
- (BOOL)supportsBackButtons;
- (void)updateButton:(id)a0 forHighlightedState:(BOOL)a1;
- (id)pointerShapeInContainer:(id)a0;
- (void).cxx_destruct;
- (void)pointerWillEnter:(id)a0;
- (Class)buttonBarButtonClass;
- (id)buttonContextMenuStyleFromDefaultStyle:(id)a0;
- (Class)buttonControlClass;

@end
