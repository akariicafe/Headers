@class AVPlayer;
@protocol QLMediaScrubberGestureDelegate;

@interface QLMediaScrubberGesture : UIPanGestureRecognizer {
    struct CGPoint { double x; double y; } _previousTouchLocationInView;
    struct CGPoint { double x; double y; } _startTouchLocationInView;
    BOOL _shouldRecoverFromPrecisionScrubbingIfNeeded;
    double _estimatedFrameRate;
    AVPlayer *_player;
}

@property (weak, nonatomic) id<QLMediaScrubberGestureDelegate> scrubberDelegate;
@property (nonatomic) float value;
@property (nonatomic) float minimumValue;
@property (nonatomic) float maximumValue;

- (float)nominalFrameRate;
- (id)initWithPlayer:(id)a0;
- (void).cxx_destruct;
- (float)clampedEstimatedFrameRate;
- (void)scrubbGestureDidChange:(id)a0;

@end
