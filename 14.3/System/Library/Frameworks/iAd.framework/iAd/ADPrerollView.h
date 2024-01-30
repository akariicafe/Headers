@class NSString, UIImageView, NSTimer, ADPrerollTopBar, ADPrerollBottomBar, ADPrivacyMarker;
@protocol ADPrerollViewDelegate;

@interface ADPrerollView : UIView <UIGestureRecognizerDelegate, ADPrerollTopBarDelegate, ADPrerollBottomBarDelegate>

@property (retain, nonatomic) ADPrerollTopBar *topBar;
@property (retain, nonatomic) ADPrerollBottomBar *bottomBar;
@property (nonatomic) BOOL skipButtonCountingDown;
@property (retain, nonatomic) UIImageView *swooshView;
@property (retain, nonatomic) NSTimer *passiveWatchingTimer;
@property (nonatomic) double accumulatedViewingTime;
@property (retain, nonatomic) ADPrivacyMarker *privacyMarker;
@property (weak, nonatomic) id<ADPrerollViewDelegate> delegate;
@property (nonatomic) BOOL barsVisible;
@property (nonatomic) BOOL hasAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;

- (void)shutdown;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void).cxx_destruct;
- (void)_privacyButtonWasTapped;
- (void)enablePrivacyButton;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)accessibilityPerformEscape;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)fadeToBlackWithCompletion:(id /* block */)a0;
- (void)attachToAVPlayer:(id)a0 showiAdBrandingSwoosh:(BOOL)a1;
- (void)beginCountdown:(double)a0;
- (void)setElapsedTime:(double)a0 totalTime:(double)a1;
- (void)displayAsPaused:(BOOL)a0;
- (void)topBarScaleToFill:(id)a0;
- (void)topBarScaleToFit:(id)a0;
- (void)topBarDoneButtonTapped:(id)a0;
- (BOOL)_layoutForExpandedSize;
- (void)bottomBarActionButtonTapped:(id)a0;
- (void)bottomBarSkipButtonTapped:(id)a0;
- (void)bottomBarPauseButtonTapped:(id)a0;
- (void)bottomBarPlayButtonTapped:(id)a0;
- (void)_singleTapGestureRecognized:(id)a0;
- (void)_firePassiveWatchingTimer:(id)a0;
- (void)_restartPassiveWatchingTimer;

@end
