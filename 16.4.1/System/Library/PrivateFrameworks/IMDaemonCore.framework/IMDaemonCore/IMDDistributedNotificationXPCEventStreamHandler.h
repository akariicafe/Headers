@interface IMDDistributedNotificationXPCEventStreamHandler : IMDXPCEventStreamHandler

+ (id)sharedInstance;

- (id)initWithEventStreamName:(const char *)a0;
- (id)init;

@end
