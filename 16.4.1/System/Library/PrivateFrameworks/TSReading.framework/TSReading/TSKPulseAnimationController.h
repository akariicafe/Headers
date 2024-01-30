@protocol TSKPulseAnimationControllerProtocol;

@interface TSKPulseAnimationController : TSKHighlightController {
    id<TSKPulseAnimationControllerProtocol> _delegate;
}

@property (nonatomic) BOOL pulsating;
@property (nonatomic) BOOL autohide;
@property (nonatomic) double duration;
@property (nonatomic) double pulseOffset;

- (void)startAnimating;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)disconnect;
- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)stop;
- (void)reset;
- (BOOL)drawRoundedRect;

@end
