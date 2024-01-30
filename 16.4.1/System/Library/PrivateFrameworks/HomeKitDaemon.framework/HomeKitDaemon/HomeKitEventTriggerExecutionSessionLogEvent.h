@class HMDAnalyticsEventTriggerExecutionSessionData, NSString;

@interface HomeKitEventTriggerExecutionSessionLogEvent : HMMLogEvent <HMDAWDLogEvent>

@property (readonly, nonatomic) HMDAnalyticsEventTriggerExecutionSessionData *analyticsData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSessionID:(id)a0;
- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (id)metricForAWD;
- (int)toAWDExecutionState:(int)a0;

@end
