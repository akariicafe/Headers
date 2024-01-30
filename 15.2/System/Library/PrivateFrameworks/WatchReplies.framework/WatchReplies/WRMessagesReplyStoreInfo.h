@interface WRMessagesReplyStoreInfo : WRReplyStoreInfo

- (id)defaultsDomain;
- (id)defaultsKey;
- (id)defaultsChangedNotificationName;
- (BOOL)supportsSmartReplies;
- (id)hiddenTinkerReplyKeys;
- (unsigned long long)defaultCount;

@end
