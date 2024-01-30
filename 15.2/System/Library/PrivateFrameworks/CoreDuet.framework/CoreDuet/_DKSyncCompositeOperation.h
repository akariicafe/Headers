@class NSHashTable, NSMutableArray;

@interface _DKSyncCompositeOperation : _DKSyncOperation {
    _DKSyncCompositeOperation *_parent;
    _Atomic BOOL _isReadyToStart;
    NSHashTable *_children;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) NSMutableArray *errors;

- (BOOL)isReady;
- (id)initWithParent:(id)a0;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)childOperationWasAdded:(id)a0;
- (void)setReadyToStart:(BOOL)a0;
- (void)_shutdownOperation;
- (void)childOperation:(id)a0 didEndWithErrors:(id)a1;
- (void)endOperation;

@end
