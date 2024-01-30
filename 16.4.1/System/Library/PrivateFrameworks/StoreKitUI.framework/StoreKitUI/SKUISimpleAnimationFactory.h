@class NSString, CAMediaTimingFunction;

@interface SKUISimpleAnimationFactory : NSObject <_UIBasicAnimationFactory> {
    CAMediaTimingFunction *_timingFunction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)factoryWithTimingFunction:(id)a0;
+ (id)backOutTimingFunction;
+ (id)easeQuadInOutTimingFunction;
+ (id)easeQuadInTimingFunction;
+ (id)easeQuadOutTimingFunction;

- (id)_basicAnimationForView:(id)a0 withKeyPath:(id)a1;
- (id)_timingFunctionForAnimation;
- (void).cxx_destruct;

@end
