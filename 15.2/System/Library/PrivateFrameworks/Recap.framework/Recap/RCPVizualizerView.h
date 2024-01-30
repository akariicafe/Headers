@class RCPMovie, NSString, AVPlayerLayer, RCPTraceLayer, CALayer, AVPlayer;

@interface RCPVizualizerView : UIView <CALayerDelegate, RCPTimelineViewDelegate>

@property (retain, nonatomic) AVPlayerLayer *playerLayer;
@property (retain, nonatomic) AVPlayer *player;
@property (retain, nonatomic) RCPTraceLayer *traceLayer;
@property (retain, nonatomic) CALayer *screenshotLayer;
@property (nonatomic) unsigned long long time;
@property (retain, nonatomic) RCPMovie *recapMovie;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void).cxx_destruct;
- (void)layout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })screenRect;
- (void)timelineView:(id)a0 didSetTime:(unsigned long long)a1;

@end
