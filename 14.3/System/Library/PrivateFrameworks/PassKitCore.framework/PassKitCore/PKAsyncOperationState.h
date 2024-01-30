@class NSString, NSMutableArray;

@interface PKAsyncOperationState : NSObject <PKCancelObservable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _actionLock;
    NSMutableArray *_cancelActions;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _canceled;
    BOOL _invalidated;
}

@property (readonly, nonatomic, getter=isCanceled) BOOL canceled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addCancelAction:(id /* block */)a0;
- (void)performAction:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)_invalidate;
- (void)_cancel;

@end
