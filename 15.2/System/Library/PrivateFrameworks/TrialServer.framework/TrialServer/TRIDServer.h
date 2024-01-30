@class TRITaskQueue, TRIXPCServerContextPromise, TRIXPCActivityManager, TRIServerContext, NSObject;
@protocol OS_dispatch_queue;

@interface TRIDServer : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    TRIServerContext *_context;
    TRITaskQueue *_taskQueue;
    TRIXPCServerContextPromise *_promise;
    TRIXPCActivityManager *_xpcActivityManager;
}

@property (readonly, nonatomic) BOOL isRunning;

+ (id)sharedServer;
+ (id)_triPath;

- (id)initWithPath:(id)a0;
- (void)_updateSystemInfo;
- (void)_logMetrics:(id)a0 stopwatch:(id)a1;
- (void)start;
- (void)_dispatchWhenUnlocked:(id /* block */)a0;
- (void).cxx_destruct;
- (unsigned long long)_getDiskUsageInBytes;
- (id)init;
- (void)_asyncStartWithMetrics:(id)a0;
- (void)_registerXpcStreamEventHandler;
- (void)_registerSetupAssistantFetchActivityOnce;

@end
