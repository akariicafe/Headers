@class NSString;

@interface HMDIncomingCloudPushLogEvent : HMDLogEvent

@property (readonly, nonatomic) NSString *topic;

+ (id)uuid;
+ (id)incomingCloudPush:(id)a0;

- (void).cxx_destruct;
- (id)initWithTopic:(id)a0;

@end
