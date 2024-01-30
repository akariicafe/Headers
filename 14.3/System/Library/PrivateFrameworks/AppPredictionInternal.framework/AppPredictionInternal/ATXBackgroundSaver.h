@class _PASLock, NSObject;
@protocol OS_dispatch_queue;

@interface ATXBackgroundSaver : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _block;
    _PASLock *_lock;
}

- (id)init;
- (void).cxx_destruct;
- (void)_cancelSaveTimerWithLockWitness:(id)a0;
- (void)dealloc;
- (id)initWithQueue:(id)a0 block:(id /* block */)a1;
- (void)scheduleSave;
- (void)_cancelSaveTimer;
- (void)scheduleSaveImmediately;

@end
