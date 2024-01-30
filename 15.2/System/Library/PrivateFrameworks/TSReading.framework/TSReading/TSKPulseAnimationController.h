@protocol TSKPulseAnimationControllerProtocol;

@interface TSKPulseAnimationController : TSKHighlightController {
    id<TSKPulseAnimationControllerProtocol> _delegate;
}

@property (nonatomic) BOOL pulsating;
@property (nonatomic) BOOL autohide;
@property (nonatomic) double duration;
@property (nonatomic) double pulseOffset;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithDelegate:(id)a0;
- (void)disconnect;
- (void)startAnimating;
- (void)dealloc;
- (void)reset;
- (void)stop;
- (BOOL)drawRoundedRect;

@end
