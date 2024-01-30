@class NSString;

@interface SpringFactory : NSObject <_UIBasicAnimationFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedFactory;

- (id)_basicAnimationForView:(id)a0 withKeyPath:(id)a1;
- (id)_timingFunctionForAnimation;

@end
