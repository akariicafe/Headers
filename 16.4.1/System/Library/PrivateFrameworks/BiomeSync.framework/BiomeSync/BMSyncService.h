@interface BMSyncService : NSObject <BMSyncServiceClientProtocol>

- (id)connection;
- (BOOL)triggerSyncWithError:(id *)a0;
- (id)cloudKitSyncWithErrors:(id *)a0;
- (id)peerInformationWithError:(id *)a0;
- (id)rapportSyncWithErrors:(id *)a0;
- (BOOL)triggerCloudKitSyncWithError:(id *)a0;
- (void)triggerCloudKitSyncWithReply:(id /* block */)a0;
- (BOOL)triggerRapportSyncWithError:(id *)a0;
- (void)triggerRapportSyncWithReply:(id /* block */)a0;

@end
