@class UIButton, NSString, UILabel, NSLayoutConstraint, PMRoundProgressView;

@interface PMiOSProgressViewController : UIViewController <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UILabel *stageLabel;
@property (retain, nonatomic) PMRoundProgressView *progressView;
@property (retain, nonatomic) NSLayoutConstraint *verticalProgressLabelSpace;
@property (retain, nonatomic) NSLayoutConstraint *verticalCenteredLabel;
@property (retain, nonatomic) NSLayoutConstraint *horizontalCenteredLabel;
@property (retain, nonatomic) NSLayoutConstraint *nonCompactRoundProgressCenterY;
@property (retain, nonatomic) NSLayoutConstraint *cancelButtonTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *cancelButtonLeadingConstraint;
@property (retain, nonatomic) UIButton *cancelButton;
@property (copy, nonatomic) NSString *description;
@property (copy, nonatomic) NSString *stageDescription;
@property (nonatomic) float progress;
@property (nonatomic) BOOL showCancelButton;
@property (nonatomic) unsigned long long cancelStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)setCancelTarget:(id)a0 action:(SEL)a1;
- (void)attachCancelButton;
- (void)updateLayoutWithTraitCollection:(id)a0;

@end
