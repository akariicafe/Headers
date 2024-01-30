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

- (id)target;
- (void)markStop;
- (void)setAction:(SEL)a0;
- (void)markStart:(double)a0;
- (void)setCompletion:(id /* block */)a0;
- (void)setDuration:(double)a0;
- (BOOL)usesNSTimer;
- (int)state;
- (id /* block */)completion;
- (void)setDelegate:(id)a0;
- (float)progressForFraction:(float)a0;
- (void)setProgress:(float)a0;
- (id)initWithTarget:(id)a0;
- (void).cxx_destruct;
- (float)fractionForTime:(double)a0;
- (id)delegate;
- (void)setUsesNSTimer:(BOOL)a0;
- (void)setAnimationCurve:(int)a0;
- (int)type;
- (SEL)action;
- (void)stopAnimation;

@end
