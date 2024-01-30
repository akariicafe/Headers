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

+ (id)_triPath;
+ (id)sharedServer;

- (void)_dispatchWhenUnlocked:(id /* block */)a0;
- (id)initWithPath:(id)a0;
- (void)_registerSetupAssistantFetchActivityOnce;
- (void)_asyncStartWithMetrics:(id)a0;
- (void)_registerXpcStreamEventHandler;
- (void)_excludeUserLevelTrialFromTimeMachineBackups;
- (void)_logMetrics:(id)a0 stopwatch:(id)a1;
- (id)init;
- (void)start;
- (unsigned long long)_getDiskUsageInBytes;
- (void)_updateSystemInfo;
- (void).cxx_destruct;

@end
