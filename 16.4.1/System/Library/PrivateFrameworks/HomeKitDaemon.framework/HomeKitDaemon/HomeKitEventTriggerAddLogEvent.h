@class NSString, HMDAnalyticsAddEventTriggerData;

@interface HomeKitEventTriggerAddLogEvent : HMMHomeLogEvent <HMDAWDLogEvent>

@property (readonly, nonatomic) HMDAnalyticsAddEventTriggerData *analyticsData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
