@interface CSIndexDelegateConnection : CSIndexConnection

+ (id)sharedConnection;

- (void)handleError:(id)a0;
- (void)handleReply:(id)a0;
- (id)indexForProtectionClass:(id)a0;
- (id)indexForID:(id)a0;

@end
