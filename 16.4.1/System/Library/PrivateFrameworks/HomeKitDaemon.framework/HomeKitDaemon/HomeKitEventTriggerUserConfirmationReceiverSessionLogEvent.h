@class NSString, HMDAnalyticsEventTriggerUserConfirmationReceiverSessionData;

@interface HomeKitEventTriggerUserConfirmationReceiverSessionLogEvent : HMMLogEvent <HMDAWDLogEvent>

@property (readonly, nonatomic) HMDAnalyticsEventTriggerUserConfirmationReceiverSessionData *analyticsData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
