@class NSString, NSArray;

@interface HMDAnalyticsEventTriggerExecutionSessionData : HMFObject

@property unsigned long long timestamp;
@property int executionState;
@property int resultErrorCode;
@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSArray *triggerEvents;
@property (copy, nonatomic) NSArray *endEvents;

- (void).cxx_destruct;

@end
