@interface WRMessagesReplyStoreInfo : WRReplyStoreInfo

- (id)defaultsDomain;
- (id)defaultsKey;
- (id)defaultsChangedNotificationName;
- (unsigned long long)defaultCount;
- (BOOL)supportsSmartReplies;

@end
