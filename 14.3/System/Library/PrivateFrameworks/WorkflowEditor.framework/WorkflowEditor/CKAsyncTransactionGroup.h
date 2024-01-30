@class NSHashTable;

@interface CKAsyncTransactionGroup : NSObject {
    NSHashTable *_containerLayers;
}

+ (id)mainTransactionGroup;
+ (void)registerTransactionGroupAsMainRunloopObserver:(id)a0;

- (void)commit;
- (id)init;
- (void).cxx_destruct;
- (void)addTransactionContainer:(id)a0;

@end
