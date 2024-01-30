@class HRStackedButtonView, UITapGestureRecognizer, NSLayoutYAxisAnchor, HKElectrocardiogramCardView, HKAnchoredObjectQuery, HKElectrocardiogram, NSLayoutConstraint, UIActivityIndicatorView, UILabel;
@protocol HROnboardingElectrocardiogramSetupCompleteViewControllerDelegate;

@interface HROnboardingElectrocardiogramSetupCompleteViewController : HROnboardingBaseViewController <HRStackedButtonViewDelegate>

@property (nonatomic) long long state;
@property (retain, nonatomic) HKAnchoredObjectQuery *electrocardiogramQuery;
@property (retain, nonatomic) HKElectrocardiogram *electrocardiogram;
@property (retain, nonatomic) UITapGestureRecognizer *electrocardiogramCardTapGestureRecognizer;
@property (weak, nonatomic) id<HROnboardingElectrocardiogramSetupCompleteViewControllerDelegate> electrocardiogramDelegate;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (retain, nonatomic) UILabel *classificationLabel;
@property (retain, nonatomic) HKElectrocardiogramCardView *electrocardiogramCardView;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) HRStackedButtonView *stackedButtonView;
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint;
@property (retain, nonatomic) NSLayoutYAxisAnchor *viewBottomAnchor;
@property (nonatomic) BOOL firstViewDidLayoutSubviews;
@property (readonly, nonatomic) BOOL isSampleInteractive;

- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)_bodyFont;
- (void)_setUpConstraints;
- (void)_updateUI;
- (void)_setUpUI;
- (void)viewDidLoad;
- (void)stackedButtonView:(id)a0 didTapButtonAtIndex:(long long)a1;
- (void)_resetUI;
- (id)_bodyFontTextStyle;
- (id)_subheadlineFont;
- (id)initForOnboarding:(BOOL)a0 isSampleInteractive:(BOOL)a1 electrocardiogramDelegate:(id)a2;
- (void)_setUpElectrocardiogramQuery;
- (void)_stopElectrocardiogramQuery;
- (void)_recomputeState;
- (id)_classificationAttributedTextForElectrocardiogram:(id)a0 activeAlgorithmVersion:(long long)a1;
- (void)_electrocardiogramCardViewTapped:(id)a0;
- (void)_setupBodyLabelForSetupCompleteState:(long long)a0;
- (double)_classificationTextDistance;
- (void)_updateUIForElectrocardiogram:(id)a0;

@end
