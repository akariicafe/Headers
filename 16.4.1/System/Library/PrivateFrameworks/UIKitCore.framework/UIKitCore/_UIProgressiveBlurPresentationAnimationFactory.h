@class NSString;

@interface _UIProgressiveBlurPresentationAnimationFactory : NSObject <_UIBasicAnimationFactory>

@property (readonly, nonatomic) unsigned long long curve;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCurve:(unsigned long long)a0;
- (id)_basicAnimationForView:(id)a0 withKeyPath:(id)a1;
- (id)_timingFunctionForAnimationInView:(id)a0 withKeyPath:(id)a1;

@end
