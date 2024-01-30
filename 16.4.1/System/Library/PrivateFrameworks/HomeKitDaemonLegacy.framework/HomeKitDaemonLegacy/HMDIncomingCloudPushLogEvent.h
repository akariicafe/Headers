@class NSString;

@interface HMDIncomingCloudPushLogEvent : HMMLogEvent

@property (readonly, nonatomic) NSString *topic;

+ (id)incomingCloudPush:(id)a0;

- (void).cxx_destruct;
- (id)initWithTopic:(id)a0;

@end
