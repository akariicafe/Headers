@class UIView, NSString, CADisplayLink, CAGradientLayer, AVTimeFormatter, MPCPlayerResponseItem, UILabel, MRUVisualStylingProvider;

@interface MRUNowPlayingTimeControlsView : UIControl <MRUVisualStylingProviderObserver>

@property (retain, nonatomic) UIView *elapsedTrack;
@property (retain, nonatomic) UIView *remainingTrack;
@property (retain, nonatomic) UIView *knobView;
@property (retain, nonatomic) UILabel *elapsedTimeLabel;
@property (retain, nonatomic) UILabel *remainingTimeLabel;
@property (retain, nonatomic) UILabel *liveLabel;
@property (retain, nonatomic) UIView *liveBackground;
@property (retain, nonatomic) CAGradientLayer *liveBackgroundMask;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) AVTimeFormatter *elapsedTimeFormatter;
@property (retain, nonatomic) AVTimeFormatter *remainingTimeFormatter;
@property (nonatomic) struct { double snapshotTime; double startTime; double endTime; double duration; double elapsedDuration; float rate; float defaultRate; BOOL isLiveContent; BOOL isLoading; } durationSnapshot;
@property (nonatomic) double elapsedTimeFactor;
@property (nonatomic) BOOL debugPreviousDisplayLinkPaused;
@property (retain, nonatomic) MPCPlayerResponseItem *playerResponseItem;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) long long context;
@property (nonatomic, getter=isOnScreen) BOOL onScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelTrackingWithEvent:(id)a0;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)updateVisibility;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)updateDisplayLink;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateVisualStyling;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)setEnabled:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)updateBackgroundMask;
- (void)visualStylingProviderDidChange:(id)a0;
- (void)updateContentSizeCategory;
- (void)updateDisplayLinkPaused;
- (void)updateElapsedTime;
- (void)animateLayout;
- (void)updateElapsedTimeWithElapsedTime:(double)a0;
- (void)updateElapsedTimeOnDisplayLinkTick:(id)a0;

@end
