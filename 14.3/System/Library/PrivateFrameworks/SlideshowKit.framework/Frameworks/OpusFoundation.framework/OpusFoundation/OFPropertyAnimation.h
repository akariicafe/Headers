@class NSString, OFPropertyAnimationLayer, CAPropertyAnimation, NSTimer;

@interface OFPropertyAnimation : NSObject <CAAnimationDelegate> {
    NSString *_animationKey;
    OFPropertyAnimationLayer *_layer;
    CAPropertyAnimation *_propertyAnimation;
    NSTimer *_timer;
    id /* block */ _progressBlock;
    id /* block */ _completionBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)animateWithDuration:(double)a0 rootLayer:(id)a1 animation:(id /* block */)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;
+ (id)interpolateValueForKey:(id)a0 animation:(id /* block */)a1 progress:(double)a2;

- (void)cancel;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)init;
- (void)_cleanup;
- (void)dealloc;
- (void)animationDidStart:(id)a0;
- (void)handleTimer:(id)a0;
- (struct CGPoint { double x0; double x1; })animatedPoint;
- (void)setDestinationAnimatedPoint:(struct CGPoint { double x0; double x1; })a0;
- (double)animatedFloat;
- (void)setDestinationAnimatedFloat:(double)a0;

@end
