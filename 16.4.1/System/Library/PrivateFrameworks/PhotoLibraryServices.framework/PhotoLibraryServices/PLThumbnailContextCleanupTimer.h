@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface PLThumbnailContextCleanupTimer : NSObject {
    id /* block */ _handler;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _transactionLock;
    NSObject<OS_os_transaction> *_transaction;
}

- (void)_timerFired;
- (id)initWithHandler:(id /* block */)a0;
- (void)activate;
- (void)invalidate;
- (void)startOrRestartTimer;
- (void).cxx_destruct;

@end
