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

+ (id)interpolateValueForKey:(id)a0 animation:(id /* block */)a1 progress:(double)a2;
+ (id)animateWithDuration:(double)a0 rootLayer:(id)a1 animation:(id /* block */)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;

- (void)_cleanup;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)animationDidStart:(id)a0;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (void)handleTimer:(id)a0;
- (double)animatedFloat;
- (struct CGPoint { double x0; double x1; })animatedPoint;
- (void)setDestinationAnimatedFloat:(double)a0;
- (void)setDestinationAnimatedPoint:(struct CGPoint { double x0; double x1; })a0;

@end
