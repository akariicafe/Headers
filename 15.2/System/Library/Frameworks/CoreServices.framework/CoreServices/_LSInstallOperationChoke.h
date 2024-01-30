@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface _LSInstallOperationChoke : NSObject {
    unsigned long long _numConcurrentOperations;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_queuedWork;
    unsigned long long _activeInstallers;
    unsigned long long _activeUninstallers;
    NSObject<OS_dispatch_semaphore> *_backpressureSemaphore;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
}

+ (long long)_bufferedRequestSlop;

- (void)performOperationForBundleIdentifier:(id)a0 installType:(long long)a1 block:(id /* block */)a2;
- (BOOL)becomeInstaller;
- (void)retireOperation:(id)a0;
- (id)claimOperationOfType:(long long)a0;
- (BOOL)becomeUninstaller;
- (void)retireFromUninstaller;
- (id)availableOperationOfType:(long long)a0;
- (void)retireFromInstaller;
- (void)enqueueInstallationOperation:(id)a0;
- (id)initWithWidth:(long long)a0;
- (void).cxx_destruct;

@end
