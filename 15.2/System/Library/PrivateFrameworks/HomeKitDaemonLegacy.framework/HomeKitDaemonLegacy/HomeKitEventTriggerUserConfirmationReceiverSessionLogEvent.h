@class NSString, HMDAnalyticsEventTriggerUserConfirmationReceiverSessionData, NSDate;

@interface HomeKitEventTriggerUserConfirmationReceiverSessionLogEvent : HMMLogEvent <HMDAWDLogEvent>

@property (readonly, nonatomic) HMDAnalyticsEventTriggerUserConfirmationReceiverSessionData *analyticsData;
@property (readonly, nonatomic) NSDate *startTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
