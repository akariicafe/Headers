@class HMDAnalyticsEventTriggerUserConfirmationSendData, NSString;

@interface HomeKitEventTriggerUserConfirmationSendLogEvent : HMMLogEvent <HMDAWDLogEvent>

@property (readonly, nonatomic) HMDAnalyticsEventTriggerUserConfirmationSendData *analyticsData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
