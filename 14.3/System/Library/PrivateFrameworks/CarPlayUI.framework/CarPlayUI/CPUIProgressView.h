@class NSArray, CADisplayLink, UILabel, CPUIProgressBarView;

@interface CPUIProgressView : UIView {
    UILabel *_timeLabel;
    UILabel *_timeRemainingLabel;
    UILabel *_liveLabel;
    CPUIProgressBarView *_progressBarView;
    CADisplayLink *_displayLink;
    double _lastTargetTimestamp;
    NSArray *_constraints;
}

@property (nonatomic) struct { double snapshotTime; double startTime; double endTime; double duration; double elapsedDuration; float rate; float defaultRate; BOOL isLiveContent; BOOL isLoading; } durationSnapshot;
@property (nonatomic) BOOL showsProgressLabels;

- (void)setupConstraints;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_displayLinkTick:(id)a0;
- (void)_updateLabelsForElapsedTime:(double)a0 duration:(double)a1;
- (void)_updateProgressForElapsedTime:(double)a0 duration:(double)a1;
- (void)runUntilNextDisplayLinkEvent;
- (void)pauseDisplayLinkIfNeeded;

@end
