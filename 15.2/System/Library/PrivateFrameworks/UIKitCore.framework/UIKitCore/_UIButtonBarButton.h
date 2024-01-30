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

- (id)contextMenuInteraction:(id)a0 previewForDismissingMenuWithConfiguration:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)_contextMenuInteraction:(id)a0 styleForMenuWithConfiguration:(id)a1;
- (void)setEnabled:(BOOL)a0;
- (void)willMoveToSuperview:(id)a0;
- (void)_configureFromBarItem:(id)a0 appearanceDelegate:(id)a1 isBackButton:(BOOL)a2;
- (void)configureBackButtonFromBarItem:(id)a0 withAppearanceDelegate:(id)a1;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)pointerInteraction:(id)a0 willEnterRegion:(id)a1 animator:(id)a2;
- (BOOL)pointMostlyInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)configureFromBarItem:(id)a0 withAppearanceDelegate:(id)a1;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_traitCollectionDidChangeOnSubtreeInternal:(const struct _UITraitCollectionChangeDescription { id x0; id x1; BOOL x2; struct _UITraitCollectionTraitChanges { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; } x3; } *)a0;
- (void)pointerInteraction:(id)a0 willExitRegion:(id)a1 animator:(id)a2;
- (BOOL)_accessibilityShouldActivateOnHUDLift;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)pasteTouchDown;
- (id)initWithCoder:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)_accessibilitySettingsChanged:(id)a0;
- (void)willMoveToWindow:(id)a0;
- (void)setNeedsAppearanceUpdate;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (BOOL)updatePresentedMenuFrom:(id)a0;
- (void)_setTouchHasHighlighted:(BOOL)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)dealloc;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)_is_setNeedsLayout;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (id)initWithVisualProvider:(id)a0;
- (id)focusEffect;
- (struct CGPoint { double x0; double x1; })menuAttachmentPointForConfiguration:(id)a0;

@end
