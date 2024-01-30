@class NSMapTable, TSPDocumentResourceCache, NSSet, TSPDocumentResourceRegistry, NSHashTable, TSPDocumentResourceLegacyRegistry, NSObject;
@protocol OS_dispatch_queue;

@interface TSPResourceContext : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_progressAggregationQueue;
    NSHashTable *_accessQueue_resourceRequests;
    NSMapTable *_accessQueue_resourceRequestTable;
}

@property (readonly, nonatomic) TSPDocumentResourceCache *documentResourceCache;
@property (readonly, nonatomic) TSPDocumentResourceRegistry *documentResourceRegistry;
@property (readonly, nonatomic) TSPDocumentResourceLegacyRegistry *sageDocumentResourceLegacyRegistry;
@property (readonly, nonatomic) TSPDocumentResourceLegacyRegistry *tangierDocumentResourceLegacyRegistry;
@property (readonly) NSSet *resourceRequests;

- (id)init;
- (void).cxx_destruct;
- (void)accessQueue_addResourceRequest:(id)a0;
- (void)addResourceRequests:(id)a0;
- (void)conditionallyBeginAccessingResourcesWithCompletionQueue:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithDocumentResourceCache:(id)a0 documentResourceRegistry:(id)a1 sageDocumentResourceLegacyRegistry:(id)a2 tangierDocumentResourceLegacyRegistry:(id)a3;
- (id)newDataStorageForDocumentResourceInfo:(id)a0 createResourceRequestIfNeeded:(BOOL)a1 error:(id *)a2;
- (id)performResourceAccessUsingQueue:(id)a0 block:(id /* block */)a1;
- (void)removeResourceRequests:(id)a0;

@end
