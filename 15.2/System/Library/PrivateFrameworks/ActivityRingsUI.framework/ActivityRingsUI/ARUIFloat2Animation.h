@class NSString, CAMediaTimingFunction;
@protocol ARUIRingGroupAnimationDelegate;

@interface ARUIFloat2Animation : NSObject <ARUIRingGroupAnimation> {
    double _percent;
    id /* block */ _applier;
    BOOL _completed;
}

@property (weak, nonatomic) id<ARUIRingGroupAnimationDelegate> delegate;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ startValue;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ currentValue;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ endValue;
@property (readonly, nonatomic) CAMediaTimingFunction *timingFunction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)animationWithDuration:(id)a0 startValue:(SEL)a1 endValue:(double)a2 timingFunction:(id)a3 applier:(id /* block */)a4;

- (void)completeAnimation;
- (BOOL)isAnimating;
- (void).cxx_destruct;
- (void)update:(double)a0;
- (void)dealloc;
- (id)initWithDuration:(id)a0 startValue:(SEL)a1 endValue:(double)a2 timingFunction:(id)a3 applier:(id /* block */)a4;

@end
