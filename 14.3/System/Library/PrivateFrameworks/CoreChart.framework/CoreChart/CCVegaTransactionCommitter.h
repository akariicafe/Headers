@class NSMutableArray, NSHashTable;

@interface CCVegaTransactionCommitter : NSObject {
    NSHashTable *_renderers;
    NSMutableArray *_mainThreadOperations;
    BOOL _needsCATransaction;
}

- (void)commit;
- (void).cxx_destruct;
- (id)initWithRenderers:(id)a0;
- (id)newMainThreadOperation;
- (void)setNeedsCATransaction;

@end
