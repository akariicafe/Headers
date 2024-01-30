@class VNSequenceRequestHandler, NSDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ICDocCamImageSequenceAnalyzer : NSObject {
    NSMutableArray *_frameArray;
    NSObject<OS_dispatch_semaphore> *_frameArraySem;
    NSObject<OS_dispatch_queue> *_dq;
    NSDictionary *_sessionOptions;
    id /* block */ _callback;
    NSObject<OS_dispatch_semaphore> *_queueSizeSem;
    VNSequenceRequestHandler *_seqHandler;
    BOOL _bRealTime;
    BOOL _bSynchronous;
}

- (void)finish;
- (void)dealloc;
- (void).cxx_destruct;
- (void)addFrame:(struct __CVBuffer { } *)a0 metaData:(id)a1 frameOptions:(id)a2 rectangleRequest:(id)a3 pixelFocalLength:(float)a4 cameraIntrinsicData:(const struct __CFData { } *)a5;
- (id)initWithOptions:(id)a0 callback:(id /* block */)a1;

@end
