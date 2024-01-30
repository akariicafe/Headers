@class UIStackView, PKPaletteButtonGroupView, PKPaletteKeyboardButton, NSString, PKPaletteMoreOptionsViewController, UIViewController, NSLayoutConstraint, PKPaletteButton;
@protocol PKPaletteAdditionalOptionsViewDelegate, PKPalettePopoverPresenting;

@interface PKPaletteAdditionalOptionsView : UIView <PKPaletteMoreOptionsViewControllerDelegate, UIPopoverPresentationControllerDelegate, PKPaletteEdgeLocating, PKPalettePopoverUpdating, PKPalettePopoverDismissing, PKPaletteViewSizeScaling>

@property (retain, nonatomic) UIStackView *contentStackView;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) PKPaletteButton *plusButton;
@property (retain, nonatomic) PKPaletteButton *ellipsisButton;
@property (retain, nonatomic) PKPaletteButtonGroupView *keyboardButtonGroupView;
@property (retain, nonatomic) PKPaletteKeyboardButton *keyboardButton;
@property (retain, nonatomic) PKPaletteButton *returnKeyButton;
@property (retain, nonatomic) PKPaletteMoreOptionsViewController *moreOptionsViewController;
@property (retain, nonatomic) UIViewController *presentedPopoverViewController;
@property (retain, nonatomic) NSLayoutConstraint *plusButtonWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *plusButtonHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *ellipsisButtonWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *ellipsisButtonHeightConstraint;
@property (weak, nonatomic) id<PKPalettePopoverPresenting> palettePopoverPresenting;
@property (weak, nonatomic) id<PKPaletteAdditionalOptionsViewDelegate> delegate;
@property (nonatomic) BOOL showsPlusButton;
@property (nonatomic, getter=isAutoHideOn) BOOL autoHideOn;
@property (nonatomic) BOOL isFingerDrawsOn;
@property (nonatomic) BOOL shouldShowFingerDrawsOption;
@property (nonatomic) BOOL shouldShowTapToRadarOption;
@property (nonatomic) BOOL wantsEllipsisButtonVisible;
@property (nonatomic) BOOL wantsInputAssistantViewVisible;
@property (nonatomic) BOOL enableKeyboardButtons;
@property (nonatomic) long long floatingKeyboardType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long edgeLocation;
@property (nonatomic) double scalingFactor;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)willMoveToSuperview:(id)a0;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0;
- (void)_updateUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)dismissPalettePopoverWithCompletion:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })plusButtonFrame;
- (void)updatePopoverUI;
- (void)moreOptionsViewControllerDidToggleAutoHide:(id)a0;
- (void)moreOptionsViewControllerDidToggleFingerDraws:(id)a0;
- (void)moreOptionsViewControllerDidSelectTapToRadar:(id)a0;
- (void)moreOptionsViewControllerDidSelectOpenPencilSettings:(id)a0;
- (void)_handleKeyboardButton;
- (void)_handleReturnKeyButton;
- (void)_didSelectPlusButton:(id)a0;
- (void)_didSelectEllipsisButton:(id)a0;
- (id)_keyboardButtonGroupViewButtons;

@end
