@class NSTimer, ADPrerollButton, UILabel, UIImage, ADVolumeSlider;
@protocol ADPrerollBottomBarDelegate;

@interface ADPrerollBottomBar : UIView

@property (retain, nonatomic) ADPrerollButton *actionButton;
@property (retain, nonatomic) UILabel *skipLabel;
@property (retain, nonatomic) UILabel *shortSkipLabel;
@property (retain, nonatomic) ADPrerollButton *skipButton;
@property (nonatomic) BOOL skipButtonCountingDown;
@property (nonatomic) double skipDuration;
@property (nonatomic) double lastViewingStartTime;
@property (nonatomic) double accumulatedViewingTime;
@property (retain, nonatomic) NSTimer *skipAccumulationTimer;
@property (retain, nonatomic) UIImage *playImage;
@property (retain, nonatomic) UIImage *pauseImage;
@property (retain, nonatomic) ADPrerollButton *playPauseButton;
@property (retain, nonatomic) ADVolumeSlider *volumeSlider;
@property (weak, nonatomic) id<ADPrerollBottomBarDelegate> delegate;
@property (nonatomic) BOOL layoutForExpandedSize;
@property (nonatomic) BOOL isFullscreen;

- (void)_actionButtonTapped:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_playButtonTapped:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_skipButtonTapped:(id)a0;
- (void)displayAsPaused:(BOOL)a0;
- (void)_pauseButtonTapped:(id)a0;
- (void)_pauseCountdown;
- (void)_resumeCountdown;
- (void)_updateSkipLabel;
- (void)_accumulateViewingTime;
- (void)showActionButton:(BOOL)a0;
- (void)beginCountdownWithDuration:(double)a0;

@end
