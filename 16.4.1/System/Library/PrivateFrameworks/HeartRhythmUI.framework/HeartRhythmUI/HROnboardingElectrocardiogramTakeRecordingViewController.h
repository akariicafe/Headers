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

- (id)_titleFont;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)heartRhythmAvailabilityDidUpdate;
- (id)_bodyFont;
- (id)_titleFontTextStyle;
- (void)skipButtonTapped:(id)a0;
- (void)setUpConstraints;
- (void)setUpUI;
- (id)initForOnboarding:(BOOL)a0 upgradingFromAlgorithmVersion:(long long)a1;
- (id)_bodyFontTextStyle;
- (id)_recordingStepFont;
- (void)_setUpElectrocardiogramQuery;
- (void)_stepForwardWithElectrocardiogramRecorded:(BOOL)a0;
- (void)_stopElectrocardiogramQuery;
- (struct CGSize { double x0; double x1; })_takeRecordingImageDimension;
- (id)_titleForOnboarding:(BOOL)a0;

@end
