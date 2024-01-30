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

- (long long)state;
- (BOOL)startWithError:(id *)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)startWithReply:(id /* block */)a0;
- (void)awFinishWithReason:(long long)a0;
- (void)awDeliverFaceFound;
- (void)awSetFaceFound;
- (void)awSetFaceDetectError;

@end
