@class UIView, MPCPlayerResponse, NSString, NSArray, NSLayoutConstraint, CADisplayLink, AVTimeFormatter, CAGradientLayer, UILayoutGuide, MPCPlayerResponseItem, MTVisualStylingProvider, UILabel;

@interface MediaControlsTimeControl : UIControl <MTVisualStylingProviderObservingPrivate, UIGestureRecognizerDelegate> {
    NSArray *_defaultConstraints;
    NSArray *_trackingConstraints;
    NSArray *_initialConstraints;
    NSLayoutConstraint *_knobViewXConstraint;
    CADisplayLink *_displayLink;
    AVTimeFormatter *_elapsedTimeFormatter;
    AVTimeFormatter *_remainingTimeFormatter;
    double _lastRecordedTime;
    double _currentTimeInTrack;
    NSString *_elapsedTime;
    NSString *_remainingTime;
    BOOL _debugPreviousDisplayLinkPaused;
}

@property (retain, nonatomic) UIView *elapsedTrack;
@property (retain, nonatomic) UIView *remainingTrack;
@property (retain, nonatomic) UIView *knobView;
@property (retain, nonatomic) UILabel *elapsedTimeLabel;
@property (retain, nonatomic) UILabel *remainingTimeLabel;
@property (retain, nonatomic) UILabel *liveLabel;
@property (retain, nonatomic) UIView *liveBackground;
@property (retain, nonatomic) CAGradientLayer *liveBackgroundMask;
@property (retain, nonatomic) UILayoutGuide *trackLayoutGuide;
@property (nonatomic) double sliderValue;
@property (nonatomic, getter=isCurrentlyTracking) BOOL currentlyTracking;
@property (nonatomic, getter=isTransitioning) BOOL transitioning;
@property (nonatomic, getter=isEmpty) BOOL empty;
@property (nonatomic) long long style;
@property (retain, nonatomic) MPCPlayerResponse *response;
@property (retain, nonatomic) MPCPlayerResponseItem *responseItem;
@property (nonatomic) struct { double snapshotTime; double startTime; double endTime; double duration; double elapsedDuration; float rate; float defaultRate; BOOL isLiveContent; BOOL isLoading; } durationSnapshot;
@property (nonatomic, getter=isTimeControlOnScreen) BOOL timeControlOnScreen;
@property (retain, nonatomic) MTVisualStylingProvider *visualStylingProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)setEnabled:(BOOL)a0;
- (void)_updateStyle;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)providedStylesDidChangeForProvider:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)_displayLinkTick:(id)a0;
- (void)cancelTrackingWithEvent:(id)a0;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)viewDidMoveToSuperview;
- (void).cxx_destruct;
- (void)updateBackgroundMask;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)tintColorDidChange;
- (void)_updateSliderPosition;
- (void)updateSliderConstraint;
- (void)_updateLabels:(struct { double x0; double x1; double x2; double x3; double x4; float x5; float x6; BOOL x7; BOOL x8; })a0 withTargetTimestamp:(double)a1;
- (void)_updateLabels:(double)a0 withRemainingDuration:(double)a1;
- (void)updateLabelAvoidance;
- (void)_updateTimeControl;
- (void)_updateDisplayLinkPause;
- (void)createDisplayLinkIfNeeded;
- (void)invalidateDisplayLinkIfNeeded;

@end
