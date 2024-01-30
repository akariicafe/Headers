@class _PASLock, NSObject;
@protocol OS_dispatch_queue;

@interface ATXBackgroundSaver : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _block;
    _PASLock *_lock;
}

- (void)scheduleSave;
- (void)scheduleSaveImmediately;
- (void)_cancelSaveTimer;
- (void).cxx_destruct;
- (id)init;
- (void)_cancelSaveTimerWithLockWitness:(id)a0;
- (void)dealloc;
- (id)initWithQueue:(id)a0 block:(id /* block */)a1;

@end
