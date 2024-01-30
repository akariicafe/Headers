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

- (BOOL)finished;
- (BOOL)started;
- (void)_suspend;
- (void)_resume;
- (BOOL)canceled;
- (void)_cancel;
- (void)managerDidLoseConnectionToService:(id)a0;
- (void)cancel;
- (void)dealloc;
- (void)_finishWithError:(id)a0;
- (long long)taskType;
- (void)start;
- (void).cxx_destruct;
- (id)initWithFileTransferSession:(id)a0;
- (void)manager:(id)a0 didUpdateDeviceTransferConnectionInfo:(id)a1;
- (BOOL)_startWithError:(id *)a0;
- (BOOL)_handleCompletionWithError:(id *)a0;

@end
