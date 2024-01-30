@class NSArray, NSString, POPAnimationTracer;

@interface POPAnimation : NSObject <NSCopying> {
    struct _POPAnimationState { void /* function */ **x0; id x1; int x2; id x3; unsigned long long x4; double x5; double x6; double x7; id x8; id /* block */ x9; id /* block */ x10; id /* block */ x11; id /* block */ x12; id x13; id x14; double x15; long long x16; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; unsigned char x23 : 1; unsigned char x24 : 1; unsigned char x25 : 1; unsigned char x26 : 1; unsigned char x27 : 1; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; unsigned char x31 : 1; } *_state;
}

@property (nonatomic) struct SpringSolver<POP::Vector4<double> > { } *solver;
@property (readonly, nonatomic) int type;
@property (readonly, copy, nonatomic) id currentValue;
@property (copy, nonatomic) NSArray *progressMarkers;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) double beginTime;
@property (weak, nonatomic) id delegate;
@property (readonly, nonatomic) POPAnimationTracer *tracer;
@property (copy, nonatomic) id /* block */ animationDidStartBlock;
@property (copy, nonatomic) id /* block */ animationDidReachToValueBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ animationDidApplyBlock;
@property (nonatomic) BOOL removedOnCompletion;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) BOOL autoreverses;
@property (nonatomic) long long repeatCount;
@property (nonatomic) BOOL repeatForever;

- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)valueForUndefinedKey:(id)a0;
- (id)description;
- (id)_init;
- (id)debugDescription;
- (void)_initState;
- (void)_appendDescription:(id)a0 debug:(BOOL)a1;
- (BOOL)_advance:(id)a0 currentTime:(double)a1 elapsedTime:(double)a2;

@end
