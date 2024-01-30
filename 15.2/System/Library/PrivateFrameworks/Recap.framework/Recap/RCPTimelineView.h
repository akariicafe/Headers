@class CALayer, NSTimer, RCPMovie;
@protocol RCPTimelineViewDelegate;

@interface RCPTimelineView : UIView {
    CALayer *_playbackHead;
    CALayer *_cropStartHead;
    CALayer *_cropEndHead;
    unsigned long long _time;
    long long _draggingHandle;
    NSTimer *_playbackTimer;
}

@property (weak, nonatomic) id<RCPTimelineViewDelegate> delegate;
@property (retain, nonatomic) RCPMovie *recapMovie;
@property (nonatomic) unsigned long long startCropTimestamp;
@property (nonatomic) unsigned long long endCropTimestamp;

- (void)layoutSubviews;
- (void)setTime:(unsigned long long)a0;
- (void)startPlayback;
- (void)setup;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (BOOL)isFlipped;
- (void)setNeedsDisplay:(BOOL)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)cropHead:(BOOL)a0;
- (double)xForTimestamp:(unsigned long long)a0;
- (void)updateCropUI;
- (void)dragBeganAtLocation:(struct CGPoint { double x0; double x1; })a0 hitThreshold:(double)a1;
- (void)dragAtLocation:(struct CGPoint { double x0; double x1; })a0;

@end
