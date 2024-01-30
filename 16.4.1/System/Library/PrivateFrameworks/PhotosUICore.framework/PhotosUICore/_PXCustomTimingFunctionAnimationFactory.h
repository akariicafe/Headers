@class NSString, CAMediaTimingFunction;

@interface _PXCustomTimingFunctionAnimationFactory : NSObject <_UIBasicAnimationFactory>

@property (readonly, nonatomic) CAMediaTimingFunction *timingFunction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)factoryWithTimingFunction:(id)a0;

- (id)_basicAnimationForView:(id)a0 withKeyPath:(id)a1;
- (id)_timingFunctionForAnimationInView:(id)a0 withKeyPath:(id)a1;
- (void).cxx_destruct;

@end
