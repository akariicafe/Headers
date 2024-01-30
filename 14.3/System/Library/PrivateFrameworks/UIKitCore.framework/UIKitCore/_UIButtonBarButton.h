@class _UIBarButtonItemData, NSString, _UIButtonBarButtonVisualProvider, NSLayoutConstraint, NSDate;

@interface _UIButtonBarButton : UIControl <UIPointerInteractionDelegate, UISpringLoadedInteractionSupporting> {
    NSLayoutConstraint *_widthMinimizingConstraint;
    NSLayoutConstraint *_heightMinimizingConstraint;
    BOOL _autolayoutIsCleanForBoundsChange;
    NSDate *_appearanceDate;
}

@property (readonly, copy, nonatomic) _UIButtonBarButtonVisualProvider *visualProvider;
@property (readonly, nonatomic, getter=isBackButton) BOOL backButton;
@property (nonatomic) BOOL backButtonMaskEnabled;
@property (retain, nonatomic) _UIBarButtonItemData *appearanceData;
@property (readonly, nonatomic) NSLayoutConstraint *widthMinimizingConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *heightMinimizingConstraint;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } _buttonBarHitRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isSpringLoaded) BOOL springLoaded;

- (id)cursorInteraction:(id)a0 regionForLocation:(struct CGPoint { double x0; double x1; })a1 defaultRegion:(id)a2;
- (void)pointerInteraction:(id)a0 willExitRegion:(id)a1 animator:(id)a2;
- (id)cursorInteraction:(id)a0 styleForRegion:(id)a1 modifiers:(long long)a2;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (id)contextMenuInteraction:(id)a0 previewForDismissingMenuWithConfiguration:(id)a1;
- (void)_accessibilitySettingsChanged:(id)a0;
- (void)willMoveToSuperview:(id)a0;
- (BOOL)pointMostlyInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)init;
- (void)_configureFromBarItem:(id)a0 appearanceDelegate:(id)a1 isBackButton:(BOOL)a2;
- (void)configureBackButtonFromBarItem:(id)a0 withAppearanceDelegate:(id)a1;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (void)pointerInteraction:(id)a0 willEnterRegion:(id)a1 animator:(id)a2;
- (void)cursorInteraction:(id)a0 willExitRegion:(id)a1 withAnimator:(id)a2;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)dealloc;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)configureFromBarItem:(id)a0 withAppearanceDelegate:(id)a1;
- (void)cursorInteraction:(id)a0 willEnterRegion:(id)a1 withAnimator:(id)a2;
- (void)_traitCollectionDidChangeOnSubtreeInternal:(const struct _UITraitCollectionChangeDescription { id x0; id x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; } *)a0;
- (void)setSelected:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (struct CGPoint { double x0; double x1; })menuAttachmentPointForConfiguration:(id)a0;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (BOOL)_accessibilityShouldActivateOnHUDLift;
- (void)layoutSubviews;
- (unsigned long long)_controlEventsForActionTriggered;
- (id)_contextMenuInteraction:(id)a0 styleForMenuWithConfiguration:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)pasteTouchDown;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (void)_setTouchHasHighlighted:(BOOL)a0;
- (void)_is_setNeedsLayout;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithVisualProvider:(id)a0;
- (void)setNeedsAppearanceUpdate;
- (BOOL)updatePresentedMenuFrom:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
