@class UIStackView, NSString, CPSNavigationAlertProgressView, NSArray, CPSAbridgableNewlineLabel, UIImageView, CPSButton, CPSNavigationAlertFocusButton, CPUIFocusRingView, CPNavigationAlert;

@interface CPSNavigationAlertView : UIView <CPSLinearFocusProviding>

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) CPSButton *closeButton;
@property (retain, nonatomic) CPSAbridgableNewlineLabel *titleLabel;
@property (retain, nonatomic) CPSAbridgableNewlineLabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) CPSNavigationAlertFocusButton *primaryButton;
@property (retain, nonatomic) CPSNavigationAlertFocusButton *secondaryButton;
@property (retain, nonatomic) CPSNavigationAlertProgressView *progressView;
@property (retain, nonatomic) CPUIFocusRingView *focusRingView;
@property (retain, nonatomic) NSArray *ringConstraints;
@property (nonatomic) BOOL hasStartedAnimating;
@property (readonly, nonatomic) CPNavigationAlert *navigationAlert;
@property (readonly, nonatomic) BOOL useRightHandDriveFocusGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startAnimating;
- (id)preferredFocusEnvironments;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)_layoutHeightDependsOnWidth;
- (unsigned long long)_axesForDerivingIntrinsicContentSizeFromLayoutSize;
- (void)updateNavigationAlert:(id)a0;
- (id)_linearFocusItems;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 navigationAlert:(id)a1 templateDelegate:(id)a2 buttonDelegate:(id)a3;

@end
