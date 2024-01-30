@class ACAccount, MBManager;

@interface DKBackupProvider : NSObject <MBManagerDelegate>

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) MBManager *manager;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) id /* block */ completionHandler;

- (BOOL)isRestoring;
- (id)initWithAccount:(id)a0;
- (void)managerDidLoseConnectionToService:(id)a0;
- (BOOL)isBackupEnabled;
- (BOOL)isBackingUp;
- (void)managerDidFinishBackup:(id)a0;
- (void)manager:(id)a0 didFailBackupWithError:(id)a1;
- (void).cxx_destruct;
- (void)manager:(id)a0 didUpdateProgress:(float)a1 estimatedTimeRemaining:(unsigned long long)a2;
- (void)cancel;
- (BOOL)isManualBackupOnCellularAllowed;
- (void)startBackupWithExpensiveCellularAllowed:(BOOL)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;

@end
