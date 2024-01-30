@class CADisplayLink, CAMediaTimingFunction;

@interface _UIPreviewPresentationAnimator : NSObject

@property (nonatomic) double duration;
@property (retain, nonatomic) CAMediaTimingFunction *mediaTimingFunction;
@property (nonatomic) double startMediaTime;
@property (copy, nonatomic) id /* block */ advanceBlock;
@property (weak, nonatomic) CADisplayLink *displayLink;

- (id)init;
- (void)stopAnimation;
- (void).cxx_destruct;
- (void)_advanceFromDisplayLink:(id)a0;
- (id)initWithDuration:(double)a0 advanceBlock:(id /* block */)a1;

@end
