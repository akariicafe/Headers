@class UIStackView, PKPaletteReturnKeyButton, NSArray, NSString, NSLayoutConstraint, UIView, PKPaletteButtonGroupView;

@interface PKUCBPaletteView : PKPaletteView <PKPaletteButtonIntrinsicContentSizeObserver>

@property (retain, nonatomic) UIView *_contentView;
@property (retain, nonatomic) NSLayoutConstraint *_contentViewTopAnchor;
@property (retain, nonatomic) NSLayoutConstraint *_contentViewBottomAnchor;
@property (retain, nonatomic) NSLayoutConstraint *_contentViewLeadingAnchor;
@property (retain, nonatomic) NSLayoutConstraint *_contentViewTrailingAnchor;
@property (retain, nonatomic) UIStackView *_buttonStackView;
@property (retain, nonatomic) NSLayoutConstraint *_buttonStackViewHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *_buttonStackViewBottomConstraint;
@property (retain, nonatomic) PKPaletteButtonGroupView *_leadingButtonGroupView;
@property (retain, nonatomic) PKPaletteButtonGroupView *_centeredButtonGroupView;
@property (retain, nonatomic) PKPaletteButtonGroupView *_trailingButtonGroupView;
@property (retain, nonatomic) PKPaletteButtonGroupView *_returnKeyButtonGroupView;
@property (retain, nonatomic) PKPaletteReturnKeyButton *_returnKeyButton;
@property (nonatomic) BOOL alwaysIncludeReturnKeyAndInputAssistantItems;
@property (nonatomic, getter=isUpdatingUI) BOOL updatingUI;
@property (copy, nonatomic) NSArray *nonCompactContentViewConstraints;
@property (copy, nonatomic) NSArray *compactContentViewConstraints;
@property (nonatomic) long long returnKeyType;
@property (nonatomic, getter=isReturnKeyEnabled) BOOL returnKeyEnabled;
@property (copy, nonatomic) id /* block */ returnKeyHandler;
@property (copy, nonatomic) NSString *localeIdentifier;
@property (copy, nonatomic) NSArray *leadingBarButtons;
@property (copy, nonatomic) NSArray *centeredBarButtons;
@property (copy, nonatomic) NSArray *trailingBarButtons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeBackgroundView;

- (void).cxx_destruct;
- (double)shadowOpacity;
- (void)updateConstraints;
- (double)shadowRadius;
- (void)_updateUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (double)_contentMargin;
- (void)dismissPalettePopoverWithCompletion:(id /* block */)a0;
- (struct CGSize { double x0; double x1; })paletteSizeForEdge:(unsigned long long)a0;
- (unsigned long long)paletteViewType;
- (void)didChangePalettePosition;
- (void)didChangePaletteScaleFactor;
- (BOOL)isPalettePresentingPopover;
- (id)borderColorForTraitCollection:(id)a0;
- (double)borderWidthForTraitCollection:(id)a0;
- (double)responseForThrowingFromPosition:(long long)a0 toPosition:(long long)a1 withVelocity:(struct CGPoint { double x0; double x1; })a2;
- (double)dampingRatioForThrowingFromPosition:(long long)a0 toPosition:(long long)a1 withVelocity:(struct CGPoint { double x0; double x1; })a2;
- (double)compactPaletteHeight;
- (BOOL)shouldStartUpMinimized;
- (BOOL)shouldExpandFromCorner;
- (BOOL)shouldAdjustShadowRadiusForMinimized;
- (void)buttonDidChangeIntrinsicContentSize:(id)a0;
- (void)_handleReturnKey;
- (double)_narrowLength;
- (double)_buttonGroupSpacing;
- (void)_updateReturnKeyButton;
- (void)_updateLeadingButtonGroup;
- (void)_updateCenteredButtonGroup;
- (void)_updateTrailingButtonGroup;
- (void)_updateSubviewLayoutAxis;
- (void)_performUpdateUIBlock:(id /* block */)a0;
- (BOOL)_shouldHideReturnKeyButtonGroupView;
- (BOOL)_shouldShowReturnKey;
- (BOOL)_shouldHideLeadingButtonGroupView;
- (BOOL)_shouldShowCenterButtonGroupView;
- (id)_centeredBarButtons;
- (BOOL)_shouldHideTrailingButtonGroupView;
- (BOOL)_shouldShowInputAssistantItems;

@end
