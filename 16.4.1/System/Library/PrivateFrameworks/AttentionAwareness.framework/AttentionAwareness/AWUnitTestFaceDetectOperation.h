@class NSObject, AWUnitTestPearlDevice;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AWUnitTestFaceDetectOperation : BKFaceDetectOperation {
    NSObject<OS_dispatch_queue> *_awQueue;
    NSObject<OS_dispatch_source> *_awInitTimer;
    NSObject<OS_dispatch_source> *_deadlineTimer;
    BOOL _started;
    BOOL _finished;
}

@property (weak, nonatomic) AWUnitTestPearlDevice *unitTestDevice;

- (BOOL)startWithError:(id *)a0;
- (long long)state;
- (void)awDeliverFaceFound;
- (void)awFinishWithReason:(long long)a0;
- (void)awSetFaceDetectError;
- (void)awSetFaceFound;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (void)startWithReply:(id /* block */)a0;
- (void).cxx_destruct;

@end
