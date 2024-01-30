@class NSString, NSDictionary;

@interface HKSPAnalyticsOnboardingEvent : NSObject <HKSPAnalyticsEvent>

@property (retain, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSDictionary *eventPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_payloadValueForOnboardingStep:(unsigned long long)a0;
+ (id)_payloadValueForOnboardingEntryPoint:(unsigned long long)a0;
+ (id)_payloadValueForOnboardingAction:(unsigned long long)a0 atStep:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)_initWithOnboardingStep:(unsigned long long)a0 entryPoint:(unsigned long long)a1 action:(unsigned long long)a2 launchContext:(id)a3;
- (id)initWithOnboardingEntryPoint:(unsigned long long)a0 launchSource:(id)a1;
- (id)initWithOnboardingStep:(unsigned long long)a0 entryPoint:(unsigned long long)a1 action:(unsigned long long)a2;

@end
