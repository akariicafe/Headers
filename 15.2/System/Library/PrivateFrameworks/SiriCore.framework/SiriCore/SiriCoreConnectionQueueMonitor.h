@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface SiriCoreConnectionQueueMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_watcher;
}

- (void)_startWatcher;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_signalWatcher;
- (void)startWatcher;
- (void)signalWatcher;

@end
