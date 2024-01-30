@class PHAWorkerJob, NSObject;
@protocol OS_dispatch_queue;

@interface PHAVisionServiceFaceProcessingWorkerJobKeepAlive : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    PHAWorkerJob *_job;
    BOOL _continueReporting;
}

- (id)initWithJob:(id)a0;
- (void).cxx_destruct;
- (void)stop;
- (id)job;
- (void)start;
- (void)_extendTimeoutAndDispatchAgainIfNecessary;

@end
