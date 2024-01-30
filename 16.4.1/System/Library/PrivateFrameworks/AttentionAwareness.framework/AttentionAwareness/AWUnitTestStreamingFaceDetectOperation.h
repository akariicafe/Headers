@class AWUnitTestPearlStreamingDevice, NSTimer, NSObject;
@protocol OS_dispatch_queue;

@interface AWUnitTestStreamingFaceDetectOperation : BKFaceDetectOperation {
    NSObject<OS_dispatch_queue> *_awQueue;
    NSTimer *_streamingtimer;
}

@property (weak, nonatomic) AWUnitTestPearlStreamingDevice *unitTestDevice;

- (BOOL)startWithError:(id *)a0;
- (void)awDeliverStreamingEvent;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (void)startWithReply:(id /* block */)a0;
- (void).cxx_destruct;

@end
