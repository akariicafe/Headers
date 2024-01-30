@class PHAWorkerJob, NSObject;
@protocol OS_dispatch_queue;

@interface PHAVisionServiceFaceProcessingWorkerJobKeepAlive : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    PHAWorkerJob *_job;
    BOOL _continueReporting;
}

- (id)job;
- (void)start;
- (void).cxx_destruct;
- (id)initWithJob:(id)a0;
- (void)stop;
- (void)_extendTimeoutAndDispatchAgainIfNecessary;

@end
