@class NSHashTable;

@interface CKAsyncTransactionGroup : NSObject {
    NSHashTable *_containerLayers;
}

+ (id)mainTransactionGroup;
+ (void)registerTransactionGroupAsMainRunloopObserver:(id)a0;

- (void)commit;
- (void).cxx_destruct;
- (id)init;
- (void)addTransactionContainer:(id)a0;

@end
