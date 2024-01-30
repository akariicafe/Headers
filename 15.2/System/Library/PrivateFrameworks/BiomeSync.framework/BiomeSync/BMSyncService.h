@interface BMSyncService : NSObject <BMSyncServiceClientProtocol>

- (id)connection;
- (BOOL)triggerSyncWithError:(id *)a0;
- (void)triggerSyncWithReply:(id /* block */)a0;
- (id)peerInformationWithError:(id *)a0;

@end
