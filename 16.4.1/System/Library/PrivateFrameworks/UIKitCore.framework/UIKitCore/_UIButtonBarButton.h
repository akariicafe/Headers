@class _UIBarButtonItemData, NSString, _UIButtonBarButtonVisualProvider, NSLayoutConstraint, NSDate;

@interface _UIButtonBarButton : UIControl <UIPointerInteractionDelegate, UISpringLoadedInteractionSupporting> {
    NSLayoutConstraint *_widthMinimizingConstraint;
    NSLayoutConstraint *_heightMinimizingConstraint;
    BOOL _autolayoutIsCleanForBoundsChange;
    NSDate *_appearanceDate;
}

@property (readonly, copy, nonatomic) _UIButtonBarButtonVisualProvider *visualProvider;
@property (readonly, nonatomic, getter=isBackButton) BOOL backButton;
@property (readonly, nonatomic, getter=isBreadcrumb) BOOL breadcrumb;
@property (nonatomic) BOOL backButtonMaskEnabled;
@property (retain, nonatomic) _UIBarButtonItemData *appearanceData;
@property (readonly, nonatomic) NSLayoutConstraint *widthMinimizingConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *heightMinimizingConstraint;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } _buttonBarHitRect;
@property (nonatomic) long long preferredMenuElementOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isSpringLoaded) BOOL springLoaded;

- (void)_traitCollectionDidChangeOnSubtreeInternal:(const struct _UITraitCollectionChangeDescription { id x0; id x1; BOOL x2; struct _UITraitCollectionTraitChanges { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; } x3; } *)a0;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)encodeWithCoder:(id)a0;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (BOOL)pointMostlyInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_contextMenuInteraction:(id)a0 styleForMenuWithConfiguration:(id)a1;
- (void)setSelected:(BOOL)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)initWithCoder:(id)a0;
- (id)focusEffect;
- (id)contextMenuInteraction:(id)a0 previewForDismissingMenuWithConfiguration:(id)a1;
- (void)configureBreadcrumbBackButtonFromBarItem:(id)a0 withAppearanceDelegate:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_setTouchHasHighlighted:(BOOL)a0;
- (void)_is_setNeedsLayout;
- (struct CGPoint { double x0; double x1; })menuAttachmentPointForConfiguration:(id)a0;
- (id)_preferredSender;
- (void)willMoveToWindow:(id)a0;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (struct CGSize { double x0; double x1; })imageViewSize;
- (BOOL)_accessibilityShouldActivateOnHUDLift;
- (void)setNeedsAppearanceUpdate;
- (void)dealloc;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureFromBarItem:(id)a0 withAppearanceDelegate:(id)a1;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)a0;
- (BOOL)updatePresentedMenuFrom:(id)a0;
- (void)_accessibilitySettingsChanged:(id)a0;
- (id)initWithVisualProvider:(id)a0;
- (id)init;
- (void)willMoveToSuperview:(id)a0;
- (void)_configureFromBarItem:(id)a0 appearanceDelegate:(id)a1 isBackButton:(BOOL)a2 useBreadcrumbStyle:(BOOL)a3;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (void)configureBackButtonFromBarItem:(id)a0 withAppearanceDelegate:(id)a1;
- (void)pointerInteraction:(id)a0 willEnterRegion:(id)a1 animator:(id)a2;
- (void)pasteTouchDown;
- (void)pointerInteraction:(id)a0 willExitRegion:(id)a1 animator:(id)a2;

@end
