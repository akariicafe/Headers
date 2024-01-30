@class NSObject;
@protocol OS_dispatch_queue, TPSDeferredActionDelegate;

@interface TPSDeferredAction : NSObject

@property (nonatomic) BOOL scheduled;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<TPSDeferredActionDelegate> delegate;

- (void)scheduleNextRunLoop;
- (id)initWithQueue:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
