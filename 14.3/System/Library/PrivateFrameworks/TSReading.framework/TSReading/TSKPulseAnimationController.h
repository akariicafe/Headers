@protocol TSKPulseAnimationControllerProtocol;

@interface TSKPulseAnimationController : TSKHighlightController {
    id<TSKPulseAnimationControllerProtocol> _delegate;
}

@property (nonatomic) BOOL pulsating;
@property (nonatomic) BOOL autohide;
@property (nonatomic) double duration;
@property (nonatomic) double pulseOffset;

- (void)disconnect;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)reset;
- (void)dealloc;
- (void)stop;
- (id)initWithDelegate:(id)a0;
- (void)startAnimating;
- (BOOL)drawRoundedRect;

@end
