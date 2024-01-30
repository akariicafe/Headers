@interface IMDDistributedNotificationXPCEventStreamHandler : IMDXPCEventStreamHandler

+ (id)sharedInstance;

- (id)init;
- (id)initWithEventStreamName:(const char *)a0;

@end
