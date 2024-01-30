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

- (id)initWithWidth:(long long)a0;
- (void).cxx_destruct;
- (BOOL)becomeInstaller;
- (id)availableOperationOfType:(long long)a0;
- (BOOL)becomeUninstaller;
- (id)claimOperationOfType:(long long)a0;
- (void)enqueueInstallationOperation:(id)a0;
- (void)performOperationForBundleIdentifier:(id)a0 installType:(long long)a1 block:(id /* block */)a2;
- (void)retireFromInstaller;
- (void)retireFromUninstaller;
- (void)retireOperation:(id)a0;

@end
