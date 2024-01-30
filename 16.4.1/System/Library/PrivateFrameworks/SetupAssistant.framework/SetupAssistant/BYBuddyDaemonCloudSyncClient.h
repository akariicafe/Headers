@class NSString, NSXPCConnection;
@protocol BYClientDaemonCloudSyncProtocol;

@interface BYBuddyDaemonCloudSyncClient : NSObject <BYClientDaemonCloudSyncProtocol>

@property (retain) NSXPCConnection *connection;
@property (nonatomic) BOOL syncDidStart;
@property (nonatomic) BOOL syncDidComplete;
@property (weak) id<BYClientDaemonCloudSyncProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;

- (void)connectToDaemon;
- (void)syncCompletedWithErrors:(id)a0;
- (void)cancelSync;
- (id)init;
- (void).cxx_destruct;
- (void)cloudSyncProgressUpdate:(long long)a0 completedClients:(long long)a1 errors:(id)a2;
- (void)fetchCurrentSyncState:(id /* block */)a0;
- (void)isSyncInProgress:(id /* block */)a0;
- (void)needsToSync:(id /* block */)a0;
- (void)startSync;
- (void)syncProgress:(double)a0;

@end
