@class HKElectrocardiogram, NSLayoutAnchor, NSLayoutConstraint, UILabel, HROnboardingElectrocardiogramResultView, HRStackedButtonView;

@interface HROnboardingElectrocardiogramPossibleResultsViewController : HROnboardingBaseViewController <HRLinkTextViewDelegate, HRStackedButtonViewDelegate>

@property (retain, nonatomic) HKElectrocardiogram *electrocardiogram;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) HROnboardingElectrocardiogramResultView *sinusRhythmResultReview;
@property (retain, nonatomic) HROnboardingElectrocardiogramResultView *atrialFibrillationResultView;
@property (retain, nonatomic) HROnboardingElectrocardiogramResultView *highOrLowHeartRateResultView;
@property (retain, nonatomic) HROnboardingElectrocardiogramResultView *inconclusiveResultView;
@property (retain, nonatomic) HROnboardingElectrocardiogramResultView *onlyResultView;
@property (retain, nonatomic) HROnboardingElectrocardiogramResultView *bottomResultView;
@property (retain, nonatomic) UILabel *disclaimerLabel;
@property (retain, nonatomic) HRStackedButtonView *stackedButtonView;
@property (retain, nonatomic) NSLayoutAnchor *viewTopAnchor;
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *disclaimerLabelTopConstraint;

- (void)_updateForCurrentSizeCategory;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithSample:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setUpConstraints;
- (void)setUpUI;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)stackedButtonView:(id)a0 didTapButtonAtIndex:(long long)a1;
- (id)initForOnboarding:(BOOL)a0 upgradingFromAlgorithmVersion:(long long)a1;
- (void)_setStackedButtonViewAsFooterView;
- (void)_playResultViewVideos;
- (void)_pauseResultViewVideos;
- (void)_adjustStackedButtonViewLocationForViewContentHeight;
- (void)_setUpTitle;
- (void)_setUpOnlyResultView;
- (void)_setUpAllResultViews;
- (void)_setUpStackedButtonView;
- (void)_setUpDisclaimerLabel;
- (void)_setUpTitleConstraints;
- (void)_setUpOnlyResultViewConstraints;
- (void)_setUpAllResultViewConstraints;
- (void)_setUpBottomResultViewConstraint;
- (void)_adjustDisclaimerLabelConstraints;
- (id)_resultViewForSample:(id)a0 activeAlgorithmVersion:(long long)a1;
- (void)linkTextView:(id)a0 didTapOnLinkInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
