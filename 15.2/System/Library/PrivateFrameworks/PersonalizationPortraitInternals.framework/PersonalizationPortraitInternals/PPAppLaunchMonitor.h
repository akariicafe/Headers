@class _PASLock, NSObject;
@protocol OS_dispatch_queue;

@interface PPAppLaunchMonitor : NSObject {
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_contextHandlerQueue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)_init;
- (id)registerForAppLaunchWithBundleId:(id)a0 queue:(id)a1 handler:(id /* block */)a2;
- (void)deregisterForAppLaunchWithToken:(id)a0;

@end
