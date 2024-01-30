@class NSString, _TtC15ActivityRingsUI15SpringAnimation;
@protocol ARUIRingGroupAnimationDelegate;

@interface ARUIFloatSpringAnimation : NSObject <ARUIRingGroupAnimation> {
    id /* block */ _applier;
    BOOL _completed;
    _TtC15ActivityRingsUI15SpringAnimation *_springAnimation;
}

@property (weak, nonatomic) id<ARUIRingGroupAnimationDelegate> delegate;
@property (readonly, nonatomic) float currentValue;
@property (readonly, nonatomic) float endValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)animationWithTension:(double)a0 friction:(double)a1 startValue:(float)a2 endValue:(float)a3 applier:(id /* block */)a4;

- (void)update:(double)a0;
- (BOOL)isAnimating;
- (void).cxx_destruct;
- (void)completeAnimation;
- (id)initWithTension:(double)a0 friction:(double)a1 startValue:(float)a2 endValue:(float)a3 applier:(id /* block */)a4;

@end
