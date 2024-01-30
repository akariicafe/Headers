@class TRITaskQueue, TRIXPCActivityManager, TRIServerContext, NSObject;
@protocol OS_dispatch_queue;

@interface TRIDServer : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    TRIServerContext *_context;
    TRITaskQueue *_taskQueue;
    TRIXPCActivityManager *_xpcActivityManager;
}

@property (readonly, nonatomic) BOOL isRunning;

+ (id)sharedServer;
+ (id)_triPath;

- (id)initWithPath:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)_updateSystemInfo;
- (void)_dispatchIfUnlocked:(id /* block */)a0;
- (id)_getFreeDiskSpace;
- (void)_asyncStartWithMetrics:(id)a0;
- (void)_registerXpcStreamEventHandler;
- (void)_logMetrics:(id)a0 stopwatch:(id)a1;
- (unsigned long long)_getDiskUsageInBytes;
- (BOOL)_shouldContinue;

@end
