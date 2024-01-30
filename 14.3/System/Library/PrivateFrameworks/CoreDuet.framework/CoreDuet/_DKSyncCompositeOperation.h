@class NSHashTable, NSMutableArray;

@interface _DKSyncCompositeOperation : _DKSyncOperation {
    _DKSyncCompositeOperation *_parent;
    _Atomic BOOL _isReadyToStart;
    NSHashTable *_children;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) NSMutableArray *errors;

- (void)cancel;
- (BOOL)isReady;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isAsynchronous;
- (id)initWithParent:(id)a0;
- (void)endOperation;
- (void)childOperationWasAdded:(id)a0;
- (void)setReadyToStart:(BOOL)a0;
- (void)_shutdownOperation;
- (void)childOperation:(id)a0 didEndWithErrors:(id)a1;

@end
