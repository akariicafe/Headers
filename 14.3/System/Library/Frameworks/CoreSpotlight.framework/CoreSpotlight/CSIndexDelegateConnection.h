@interface CSIndexDelegateConnection : CSIndexConnection

+ (id)sharedConnection;

- (id)indexForID:(id)a0;
- (void)handleReply:(id)a0;
- (void)handleError:(id)a0;
- (id)indexForProtectionClass:(id)a0;

@end
