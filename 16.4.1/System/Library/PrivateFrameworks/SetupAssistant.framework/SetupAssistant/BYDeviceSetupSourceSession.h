@class RPFileTransferSession, NSString, BYBuddyDaemonMigrationSourceClient, CUMessageSession, BYBuddyDaemonProximitySourceClient;

@interface BYDeviceSetupSourceSession : NSObject <BYBuddyDaemonProximitySourceProtocol, SASProximitySessionDelegate>

@property (retain) BYBuddyDaemonProximitySourceClient *client;
@property (retain, nonatomic) BYBuddyDaemonMigrationSourceClient *migrationSourceClient;
@property double backupProgress;
@property double syncProgress;
@property BOOL hasBackupCompleted;
@property BOOL hasSyncCompleted;
@property double timeRemaining;
@property unsigned long long currentPhase;
@property (copy, nonatomic) id /* block */ sendObjectHandler;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (retain, nonatomic) CUMessageSession *messageSession;
@property (retain, nonatomic) RPFileTransferSession *fileTransferSessionTemplate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateProgress;
- (void)syncCompletedWithErrors:(id)a0;
- (void)activate;
- (void)invalidate;
- (void).cxx_destruct;
- (void)receivedObject:(id)a0;
- (void)backupCompletedWithError:(id)a0;
- (void)backupProgress:(double)a0 estimatedTimeRemaining:(long long)a1;
- (void)finishedWithError:(id)a0;
- (void)syncProgress:(double)a0;

@end
