@interface UIAnimation : NSObject {
    id _target;
    SEL _action;
    id _delegate;
    id /* block */ _completion;
    struct { unsigned char curve : 4; unsigned char tvOutput : 1; unsigned char useNSTimer : 1; } _animationFlags;
    double _startTime;
    double _duration;
    int _state;
}

- (id)initWithTarget:(id)a0;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (float)fractionForTime:(double)a0;
- (void)setProgress:(float)a0;
- (void)stopAnimation;
- (SEL)action;
- (int)type;
- (id)target;
- (void)setUsesNSTimer:(BOOL)a0;
- (void)setAction:(SEL)a0;
- (void)markStop;
- (void)setAnimationCurve:(int)a0;
- (void)setDelegate:(id)a0;
- (float)progressForFraction:(float)a0;
- (int)state;
- (BOOL)usesNSTimer;
- (void)markStart:(double)a0;
- (id)delegate;
- (void)setDuration:(double)a0;

@end
