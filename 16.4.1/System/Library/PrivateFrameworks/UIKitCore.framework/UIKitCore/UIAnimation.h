@class UIScreen, NSString;

@interface UIAnimation : NSObject {
    id _target;
    SEL _action;
    id _delegate;
    id /* block */ _completion;
    struct { unsigned char curve : 4; } _animationFlags;
    double _startTime;
    double _duration;
    int _state;
    UIScreen *_screen;
    NSString *_screenIdentifier;
}

- (id)delegate;
- (int)state;
- (void)setProgress:(float)a0;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)a0;
- (id)initWithTarget:(id)a0;
- (void)setDelegate:(id)a0;
- (float)progressForFraction:(float)a0;
- (id)target;
- (id)_screen;
- (SEL)action;
- (void)stopAnimation;
- (void).cxx_destruct;
- (void)setDuration:(double)a0;
- (void)setAction:(SEL)a0;
- (id)_screenIdentifier;
- (float)fractionForTime:(double)a0;
- (void)markStart:(double)a0;
- (void)markStop;
- (void)setAnimationCurve:(int)a0;

@end
