@interface MBTargetDeviceTransferTask : MBDeviceTransferTask <MBManagerDelegate> {
    _Atomic BOOL _startedPreflight;
    _Atomic BOOL _startedKeychainTransfer;
    _Atomic BOOL _startedKeychainDataTransfer;
    _Atomic BOOL _startedKeychainDataImport;
    _Atomic BOOL _startedDataTransfer;
}

@property (copy, nonatomic) id /* block */ preflightCompletionHandler;
@property (copy, nonatomic) id /* block */ keychainTransferCompletionHandler;

- (void)_cancel;
- (void)startDataTransferWithPreflightInfo:(id)a0 completionHandler:(id /* block */)a1;
- (void)startKeychainDataTransferWithCompletionHandler:(id /* block */)a0;
- (void)cancel;
- (void)startKeychainDataImportWithKeychainInfo:(id)a0 completionHandler:(id /* block */)a1;
- (void)_finishWithError:(id)a0;
- (long long)taskType;
- (void)start;
- (void)startKeychainTransferWithCompletionHandler:(id /* block */)a0;
- (void)startPreflightWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)resume;
- (id)initWithFileTransferSession:(id)a0;
- (void)manager:(id)a0 didFinishDeviceTransferPreflight:(id)a1 error:(id)a2;
- (void)manager:(id)a0 didFinishDeviceTransferWithError:(id)a1;
- (void)manager:(id)a0 didUpdateDeviceTransferProgress:(id)a1;
- (BOOL)_startWithError:(id *)a0;
- (void)_finishKeychainTransferWithError:(id)a0 completionHandler:(id /* block */)a1;
- (void)manager:(id)a0 didFinishDeviceTransferKeychainTransferWithError:(id)a1;

@end
