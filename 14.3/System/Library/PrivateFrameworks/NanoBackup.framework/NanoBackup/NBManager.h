@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface NBManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *externalQueue;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;

+ (void)initialize;

- (id)initWithQueue:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)unsafe_invalidate;
- (id)connection;
- (void)listBackupsOfType:(unsigned long long)a0 timeout:(long long)a1 completionHandler:(id /* block */)a2;
- (void)setBackupsEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)listBackupsWithTimeout:(long long)a0 completionHandler:(id /* block */)a1;
- (void)listBackupsOfType:(unsigned long long)a0 withSynchronousCompletionHandler:(id /* block */)a1;
- (void)createBackupForPairingID:(id)a0 completionHandler:(id /* block */)a1;
- (void)createBackupForPairingID:(id)a0 synchronousCompletionHandler:(id /* block */)a1;
- (void)listBackupsWithCompletionHandler:(id /* block */)a0;
- (BOOL)getBackupsStatus;
- (void)listBackupsWithSynchronousCompletionHandler:(id /* block */)a0;
- (void)restoreFromBackup:(id)a0 forDevice:(id)a1 completionHandler:(id /* block */)a2;
- (id)restoreFromBackup:(id)a0 forDevice:(id)a1;
- (void)restoreFromDevice:(id)a0 forDevice:(id)a1 completionHandler:(id /* block */)a2;
- (id)restoreFromDevice:(id)a0 forDevice:(id)a1;
- (void)createBackupForDevice:(id)a0 completionHandler:(id /* block */)a1;
- (void)createBackupForDevice:(id)a0 synchronousCompletionHandler:(id /* block */)a1;
- (void)deleteBackup:(id)a0 completionHandler:(id /* block */)a1;
- (id)deleteBackup:(id)a0;

@end
