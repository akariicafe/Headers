@class NSArray, KGStoredGraph;

@interface KnowledgeGraphTestEnvironment : NSObject

@property (class, readonly, copy, nonatomic) NSArray *testEnvironmentsForExistingStores;
@property (class, readonly, copy, nonatomic) NSArray *testEnvironmentsForOnDiskExistingStores;
@property (class, readonly, copy, nonatomic) NSArray *matisseGraphs;

@property (readonly, nonatomic) KGStoredGraph *graph;

+ (id)environmentWithTestDBWithStoreType:(Class)a0 extraOptions:(unsigned long long)a1;
+ (id)temporaryURLWithFileExtension:(id)a0;

- (unsigned long long)nodeCount;
- (unsigned long long)edgeCount;
- (void).cxx_destruct;
- (id)addEdgeWithLabels:(id)a0 properties:(id)a1 sourceNode:(id)a2 targetNode:(id)a3;
- (id)addNodeWithLabels:(id)a0 properties:(id)a1;
- (void)closeAndDeleteEnvironment;
- (BOOL)deleteEdge:(id)a0;
- (BOOL)deleteNode:(id)a0;
- (id)initWithKGGraph:(id)a0;
- (id)placeholderEdgeWithLabels:(id)a0 properties:(id)a1 sourceNode:(id)a2 targetNode:(id)a3;
- (id)placeholderNodeWithLabels:(id)a0 properties:(id)a1;
- (void)populateGraph;
- (id)refetchEdge:(id)a0;
- (id)refetchNode:(id)a0;

@end
