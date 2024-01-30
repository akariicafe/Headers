@class NSArray, POPAnimation, NSMutableArray;

@interface POPAnimationTracer : NSObject {
    POPAnimation *_animation;
    struct _POPAnimationState { void /* function */ **x0; id x1; int x2; id x3; unsigned long long x4; double x5; double x6; double x7; id x8; id /* block */ x9; id /* block */ x10; id /* block */ x11; id /* block */ x12; id x13; id x14; double x15; long long x16; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; unsigned char x23 : 1; unsigned char x24 : 1; unsigned char x25 : 1; unsigned char x26 : 1; unsigned char x27 : 1; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; unsigned char x31 : 1; } *_animationState;
    NSMutableArray *_events;
    BOOL _animationHasVelocity;
}

@property (readonly, nonatomic) NSArray *allEvents;
@property (readonly, nonatomic) NSArray *writeEvents;
@property (nonatomic) BOOL shouldLogAndResetOnCompletion;

- (void).cxx_destruct;
- (void)reset;
- (void)stop;
- (void)start;
- (void)didStart;
- (id)initWithAnimation:(id)a0;
- (void)updateFromValue:(id)a0;
- (void)updateToValue:(id)a0;
- (void)readPropertyValue:(id)a0;
- (void)didReachToValue:(id)a0;
- (void)updateVelocity:(id)a0;
- (void)updateSpeed:(float)a0;
- (void)updateBounciness:(float)a0;
- (void)updateTension:(float)a0;
- (void)updateFriction:(float)a0;
- (void)updateMass:(float)a0;
- (void)autoreversed;
- (void)writePropertyValue:(id)a0;
- (void)didStop:(BOOL)a0;
- (id)eventsWithType:(unsigned long long)a0;

@end
