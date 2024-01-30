@class HKElectrocardiogram, HRImageLabel, HKHeartRhythmAvailability, UIView, HKAnchoredObjectQuery, UILabel;

@interface HROnboardingElectrocardiogramTakeRecordingViewController : HKOnboardingBaseViewController <HKHeartRhythmAvailabilityObserver>

@property (retain, nonatomic) HKHeartRhythmAvailability *availability;
@property (retain, nonatomic) HKAnchoredObjectQuery *electrocardiogramQuery;
@property (retain, nonatomic) HKElectrocardiogram *electrocardiogram;
@property (nonatomic) BOOL electrocardiogramFirstRecordingCompleted;
@property (nonatomic) BOOL didStepForward;
@property (retain, nonatomic) UIView *assetView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) HRImageLabel *recordingStep1ImageLabel;
@property (retain, nonatomic) HRImageLabel *recordingStep2ImageLabel;
@property (retain, nonatomic) UILabel *wristSettingsLabel;

- (void)viewDidLoad;
- (id)_titleFont;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setUpUI;
- (void).cxx_destruct;
- (void)setUpConstraints;
- (void)heartRhythmAvailabilityDidUpdate;
- (id)_titleFontTextStyle;
- (id)_bodyFont;
- (id)initForOnboarding:(BOOL)a0 upgradingFromAlgorithmVersion:(long long)a1;
- (void)skipButtonTapped:(id)a0;
- (id)_bodyFontTextStyle;
- (void)_setUpElectrocardiogramQuery;
- (void)_stopElectrocardiogramQuery;
- (id)_titleForOnboarding:(BOOL)a0;
- (struct CGSize { double x0; double x1; })_takeRecordingImageDimension;
- (void)_stepForwardWithElectrocardiogramRecorded:(BOOL)a0;
- (id)_recordingStepFont;

@end
