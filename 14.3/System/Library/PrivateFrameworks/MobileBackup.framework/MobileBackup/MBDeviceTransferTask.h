@class RPFileTransferSession, MBManager, NSError, NSObject;
@protocol OS_dispatch_queue;

@interface MBDeviceTransferTask : NSObject <MBManagerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    _Atomic BOOL _started;
    _Atomic BOOL _canceled;
    _Atomic BOOL _finished;
    _Atomic BOOL _suspended;
}

@property (retain, nonatomic) MBManager *manager;
@property (retain, nonatomic) RPFileTransferSession *fileTransferSession;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSError *completionError;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) id /* block */ connectionStateHandler;
@property (copy, nonatomic) id /* block */ connectionInfoHandler;
@property (copy, nonatomic) id /* block */ completionHandler;

- (BOOL)canceled;
- (void)cancel;
- (void)_suspend;
- (BOOL)finished;
- (void)_start;
- (void)managerDidLoseConnectionToService:(id)a0;
- (void).cxx_destruct;
- (BOOL)started;
- (id)initWithFileTransferSession:(id)a0;
- (void)dealloc;
- (void)manager:(id)a0 didUpdateDeviceTransferConnectionInfo:(id)a1;
- (void)_finishWithError:(id)a0;
- (long long)taskType;
- (BOOL)_handleCompletionWithError:(id *)a0;
- (void)start;
- (void)_resume;
- (void)_cancel;

@end
