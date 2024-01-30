@class NSString, HMDAnalyticsUpdateEventTriggerData;

@interface HomeKitEventTriggerUpdateLogEvent : HMMLogEvent <HMDAWDLogEvent>

@property (readonly, nonatomic) HMDAnalyticsUpdateEventTriggerData *analyticsData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
