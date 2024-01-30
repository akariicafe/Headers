@class CADisplayLink, CAMediaTimingFunction;

@interface _UIPreviewPresentationAnimator : NSObject

@property (nonatomic) double duration;
@property (retain, nonatomic) CAMediaTimingFunction *mediaTimingFunction;
@property (nonatomic) double startMediaTime;
@property (copy, nonatomic) id /* block */ advanceBlock;
@property (weak, nonatomic) CADisplayLink *displayLink;

- (void)_advanceFromDisplayLink:(id)a0;
- (id)initWithDuration:(double)a0 advanceBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)stopAnimation;

@end
