@class NSMapTable, NSMutableDictionary, NSMutableArray;

@interface PXAssetEditOperationManager : NSObject

@property (class, readonly, nonatomic) PXAssetEditOperationManager *sharedManager;

@property (readonly, nonatomic) NSMutableDictionary *pendingPerformersByAsset;
@property (readonly, nonatomic) NSMutableDictionary *operationStatusByAsset;
@property (readonly, nonatomic) NSMapTable *observersWithContexts;
@property (readonly, nonatomic) NSMutableArray *predicateRecords;

- (void)registerAdditionalPerformers;
- (id)init;
- (void).cxx_destruct;
- (void)_updateOperationStatusForAsset:(id)a0;
- (void)_addPendingPerformer:(id)a0;
- (void)_enumerateObserversUsingBlock:(id /* block */)a0;
- (void)_handleCompletionOfPerformer:(id)a0 withSuccess:(BOOL)a1 error:(id)a2 externalCompletionHandler:(id /* block */)a3;
- (Class)_performerClassForEditOperationWithType:(id)a0 onAsset:(id)a1;
- (id)_performerForEditOperationWithType:(id)a0 onAsset:(id)a1;
- (void)_removePendingPerformer:(id)a0;
- (void)_signalPendingPerformersChangeForAsset:(id)a0;
- (void)_signalStatusChangeForAsset:(id)a0;
- (BOOL)canPerformEditOperationWithType:(id)a0 onAsset:(id)a1;
- (long long)editOperationStatusForAsset:(id)a0;
- (void)enumerateEditOperationsPerformedOnAsset:(id)a0 usingBlock:(id /* block */)a1;
- (id)performEditOperationWithType:(id)a0 asset:(id)a1 undoManager:(id)a2 completionHandler:(id /* block */)a3;
- (id)performEditOperationWithType:(id)a0 asset:(id)a1 undoManager:(id)a2 delay:(double)a3 completionHandler:(id /* block */)a4;
- (void)registerObserver:(id)a0 context:(void *)a1;
- (void)registerPerformerClass:(Class)a0 withPredicate:(id /* block */)a1;
- (void)unregisterObserver:(id)a0 context:(void *)a1;

@end
