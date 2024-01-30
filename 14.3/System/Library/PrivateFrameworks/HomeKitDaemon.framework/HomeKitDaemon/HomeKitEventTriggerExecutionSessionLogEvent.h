@class HMDAnalyticsEventTriggerExecutionSessionData, NSString;

@interface HomeKitEventTriggerExecutionSessionLogEvent : HMDLogEvent <HMDAWDLogEvent>

@property (readonly, nonatomic) HMDAnalyticsEventTriggerExecutionSessionData *analyticsData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)uuid;

- (void).cxx_destruct;
- (id)initWithSessionID:(id)a0;
- (unsigned int)AWDMessageType;
- (id)metricForAWD;
- (int)toAWDExecutionState:(int)a0;

@end
