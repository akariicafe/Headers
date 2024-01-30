@interface MBSourceDeviceTransferTask : MBDeviceTransferTask <MBManagerDelegate>

- (void)cancel;
- (void)_start;
- (id)initWithFileTransferSession:(id)a0;
- (void)manager:(id)a0 didFinishDeviceTransferWithError:(id)a1;
- (void)manager:(id)a0 didFinishDeviceTransferKeychainTransfer:(id)a1;
- (void)manager:(id)a0 didFinishDeviceTransferPreflight:(id)a1 error:(id)a2;
- (void)manager:(id)a0 didUpdateDeviceTransferProgress:(id)a1;
- (void)_finishWithError:(id)a0;
- (long long)taskType;
- (void)start;
- (void)resume;
- (void)_cancel;

@end
