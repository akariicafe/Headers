@class NSString;

@interface PKUISpringAnimationFactory : PKSpringAnimationFactory <_UIBasicAnimationFactory>

@property (copy, nonatomic) id /* block */ animationDelayHandler;
@property (readonly, nonatomic) double maximumVendedDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
