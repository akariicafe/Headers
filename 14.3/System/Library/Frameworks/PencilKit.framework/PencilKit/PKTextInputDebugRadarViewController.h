@class UIButton, NSArray, UIBarButtonItem, NSString, UISegmentedControl, PKTextInputDebugSharpenerLog, PKTextInputDebugReplayView;

@interface PKTextInputDebugRadarViewController : UIViewController <PKTextInputDebugReplayViewDelegate>

@property (retain, nonatomic) UISegmentedControl *detailControl;
@property (retain, nonatomic) NSArray *contextLabels;
@property (retain, nonatomic) NSArray *intendedTexts;
@property (retain, nonatomic) PKTextInputDebugReplayView *replayView;
@property (retain, nonatomic) UIButton *replayPlayPauseButton;
@property (retain, nonatomic) UIBarButtonItem *submitButton;
@property (readonly, nonatomic) PKTextInputDebugSharpenerLog *sharpenerLog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupViews;
- (BOOL)_canShowWhileLocked;
- (id)_deviceString;
- (void)viewDidLoad;
- (id)initWithSharpenerLog:(id)a0;
- (void)debugReplayViewDidFinishReplay:(id)a0;
- (void)updateCurrentLogEntries;
- (void)handleCancelButton:(id)a0;
- (void)handleSubmitRadarButton:(id)a0;
- (void)handleDetailControl:(id)a0;
- (void)updatePlayPauseButtonTitle;
- (void)handlePlayPauseButton:(id)a0;
- (id)_contextStringForLogEntry:(id)a0;
- (void)_launchTTRAndDismiss;
- (id)_buildString;
- (id)_accumulatedLogEntryTextsForRadar;
- (id)_loggedLocaleDescription;
- (id)_logEntryTextForRadarTitle;
- (id)_generateLaunchURLWithLogFilename:(id)a0;

@end
