@class StreamingOperation, AWSampleLogger, NSObject;
@protocol OS_dispatch_queue;

@interface AWAttentionStreamer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    StreamingOperation *_faceDetectStreamer;
    BOOL _unitTestMode;
    AWSampleLogger *_sampleLogger;
}

- (void).cxx_destruct;
- (id)cancelEventStreamWithMask:(unsigned long long)a0;
- (id)initForUnitTest:(BOOL)a0 withMask:(unsigned long long)a1;
- (BOOL)isStreamerRunningWithMask:(unsigned long long)a0;
- (void)logStreamComplete:(unsigned long long)a0 identifier:(id)a1 duration:(unsigned long long)a2 ERActivated:(BOOL)a3;
- (void)setNotificationHandler:(id /* block */)a0 withMask:(unsigned long long)a1;
- (void)setSmartCoverStateWithMask:(unsigned long long)a0 smartCoverState:(BOOL)a1;
- (id)streamEventsWithMask:(unsigned long long)a0 block:(id /* block */)a1 options:(union { })a2;

@end
