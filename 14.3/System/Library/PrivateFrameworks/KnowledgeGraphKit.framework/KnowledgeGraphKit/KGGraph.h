@class KGPerformChangesRequest, NSString, NSObject;
@protocol KGGraphStore, OS_dispatch_queue;

@interface KGGraph : NSObject

@property (retain, nonatomic) id<KGGraphStore> store;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *transactionQueue;
@property (retain, nonatomic) KGPerformChangesRequest *request;
@property (retain, nonatomic) NSString *name;

+ (id)graphForCurrentTransaction;

- (id)nodeLabels;
- (id)nodeForIdentifier:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)performChangesAndWait:(id /* block */)a0 error:(id *)a1;
- (id)nodeIdentifiersMatchingFilter:(id)a0;
- (id)edgeLabels;
- (id)edgeIdentifiersMatchingFilter:(id)a0;
- (id)edgeForIdentifier:(unsigned long long)a0;
- (void)performChanges:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (id)edgesForIdentifiers:(id)a0;
- (id)nodesForIdentifiers:(id)a0;
- (id)initGraphWithStore:(id)a0;
- (id)initializeSnapshotNodeWithIdentifier:(unsigned long long)a0 labels:(id)a1 weight:(float)a2 properties:(id)a3;
- (id)initializeSnapshotEdgeWithIdentifier:(unsigned long long)a0 labels:(id)a1 weight:(float)a2 properties:(id)a3 sourceNode:(id)a4 targetNode:(id)a5;
- (id)nodeIdentifiersMatchingFilter:(id)a0 intersectingIdentifiers:(id)a1;
- (id)_nodeIdentifiersMatchingFilter:(id)a0 intersectingIdentifiers:(id)a1;
- (id)edgeIdentifiersMatchingFilter:(id)a0 intersectingIdentifiers:(id)a1;
- (id)_edgeIdentifiersMatchingFilter:(id)a0 intersectingIdentifiers:(id)a1;
- (id)edgeIdentifiersWithStartNodeIdentifiers:(id)a0 edgeDirection:(unsigned long long)a1;
- (id)neighborNodeIdentifiersWithStartNodeIdentifiers:(id)a0 edgeDirection:(unsigned long long)a1 edgeFilter:(id)a2;
- (void)_prepareForChanges;
- (BOOL)_finalizeChanges:(id *)a0;
- (void)_cancelChanges:(id /* block */)a0;

@end
