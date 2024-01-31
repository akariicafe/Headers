@class NSDateComponentsFormatter, MTCCTimer, CADisplayLink, NSString, UILabel, NSMutableArray, MTCCRoundButton;
@protocol MTCCTimerBackgroundViewControllerDelegate;

@interface MTCCTimerBackgroundViewController : UIViewController <UIPointerInteractionDelegate>

@property (retain, nonatomic) MTCCRoundButton *startStopButton;
@property (retain, nonatomic) MTCCRoundButton *addTimerButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) NSMutableArray *currentConstraints;
@property (retain, nonatomic) NSDateComponentsFormatter *dateComponentsFormatter;
@property (weak, nonatomic) id<MTCCTimerBackgroundViewControllerDelegate> delegate;
@property (copy, nonatomic) MTCCTimer *timer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateLabels;
- (void)setupFonts;
- (void)addTimerButtonTapped:(id)a0 forEvent:(id)a1;
- (id)init;
- (void)dealloc;
- (id)accessibilityCappedFontForStyle:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)setupConstraints;
- (void)startStopButtonTapped:(id)a0;
- (id)portraitConstraints;
- (void)handleContentSizeChange:(id)a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (id)landscapeConstraints;
- (BOOL)_canShowWhileLocked;
- (void)_reloadForCurrentState;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)displayLinkTick:(id)a0;
- (void)setupRegularFonts;
- (void)setupAxFonts;

@end
