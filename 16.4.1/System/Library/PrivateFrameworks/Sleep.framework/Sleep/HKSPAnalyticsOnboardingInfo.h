@interface HKSPAnalyticsOnboardingInfo : NSObject

@property (readonly, nonatomic) unsigned long long step;
@property (readonly, nonatomic) unsigned long long action;
@property (readonly, nonatomic) unsigned long long entryPoint;

- (id)initWithStep:(unsigned long long)a0 action:(unsigned long long)a1 entryPoint:(unsigned long long)a2;
- (id)actionPayloadValue;
- (id)entryPointPayloadValue;
- (id)stepPayloadValue;

@end
