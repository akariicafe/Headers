@class HMDAnalyticsEventTriggerUserConfirmationSendData, NSString;

@interface HomeKitEventTriggerUserConfirmationSendLogEvent : HMDLogEvent <HMDAWDLogEvent>

@property (readonly, nonatomic) HMDAnalyticsEventTriggerUserConfirmationSendData *analyticsData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)uuid;

@end
