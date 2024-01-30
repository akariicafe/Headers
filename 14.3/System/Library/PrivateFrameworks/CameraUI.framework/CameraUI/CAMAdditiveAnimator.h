@class NSMutableDictionary, CADisplayLink;
@protocol CAMAdditiveAnimatorDelegate;

@interface CAMAdditiveAnimator : NSObject

@property (readonly, nonatomic) NSMutableDictionary *_values;
@property (readonly, nonatomic) NSMutableDictionary *_animations;
@property (retain, nonatomic) CADisplayLink *_displayLink;
@property (weak, nonatomic) id<CAMAdditiveAnimatorDelegate> delegate;
@property (readonly, nonatomic, getter=isAnimating) BOOL animating;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateDisplayLink;
- (double)valueForKey:(id)a0;
- (void)setValue:(double)a0 forKey:(id)a1;
- (void)setValue:(double)a0 forKey:(id)a1 duration:(double)a2 timingCurve:(id)a3;
- (BOOL)isAnimatingForKey:(id)a0;
- (void)_handleDisplayLinkFired:(id)a0;

@end
