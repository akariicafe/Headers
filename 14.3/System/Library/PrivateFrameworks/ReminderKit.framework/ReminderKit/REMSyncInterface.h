@class REMXPCDaemonController;

@interface REMSyncInterface : NSObject

@property (retain, nonatomic) REMXPCDaemonController *daemonController;

- (id)initWithDaemonController:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)syncCloudKitWithReason:(id)a0 discretionary:(BOOL)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)restartCloudKitSyncWithReason:(id)a0 queue:(id)a1 completion:(id /* block */)a2;

@end
