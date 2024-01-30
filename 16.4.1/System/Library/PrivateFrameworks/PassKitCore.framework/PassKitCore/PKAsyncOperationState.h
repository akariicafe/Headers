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

- (void)_cancel;
- (id)_init;
- (void)performAction:(id /* block */)a0;
- (id)init;
- (void)addCancelAction:(id /* block */)a0;
- (void)_invalidate;
- (void).cxx_destruct;

@end
