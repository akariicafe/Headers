@class NSString, CAMediaTimingFunction;
@protocol ARUIRingGroupAnimationDelegate;

@interface ARUIUIntAnimation : NSObject <ARUIRingGroupAnimation> {
    double _percent;
    id /* block */ _applier;
    BOOL _completed;
}

@property (weak, nonatomic) id<ARUIRingGroupAnimationDelegate> delegate;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) unsigned long long startValue;
@property (readonly, nonatomic) unsigned long long currentValue;
@property (readonly, nonatomic) unsigned long long endValue;
@property (readonly, nonatomic) CAMediaTimingFunction *timingFunction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)animationWithDuration:(double)a0 startValue:(unsigned long long)a1 endValue:(unsigned long long)a2 timingFunction:(id)a3 applier:(id /* block */)a4;

- (void)completeAnimation;
- (BOOL)isAnimating;
- (void).cxx_destruct;
- (void)update:(double)a0;
- (void)dealloc;
- (id)initWithDuration:(double)a0 startValue:(unsigned long long)a1 endValue:(unsigned long long)a2 timingFunction:(id)a3 applier:(id /* block */)a4;

@end
