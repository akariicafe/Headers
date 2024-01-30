@class NSMutableArray;

@interface _DKSyncBlockCompositeOperation : _DKSyncCompositeOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) NSMutableArray *blocks;

- (void)main;
- (BOOL)isAsynchronous;
- (id)executionBlocks;
- (void).cxx_destruct;

@end
