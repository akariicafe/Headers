@class GEOAnalyticsPipelineRemoteProxy, NSObject;
@protocol OS_dispatch_queue;

@interface GEOAnalyticsPipelineReportOperation : NSOperation {
    BOOL _finished;
    BOOL _executing;
    id _transaction;
    NSObject<OS_dispatch_queue> *_runQueue;
    GEOAnalyticsPipelineRemoteProxy *_remoteProxy;
    NSObject<OS_dispatch_queue> *_completionQueue;
    id /* block */ _completionBlock;
}

- (BOOL)isFinished;
- (void)start;
- (BOOL)isExecuting;
- (void).cxx_destruct;
- (id)initWithRemoteProxy:(id)a0 runQueue:(id)a1 completionQueue:(id)a2 completionBlock:(id /* block */)a3;
- (void)_completeOperation;

@end
