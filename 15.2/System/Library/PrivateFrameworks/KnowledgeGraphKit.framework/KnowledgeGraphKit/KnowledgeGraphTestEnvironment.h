@class NSArray, KGStoredGraph;

@interface KnowledgeGraphTestEnvironment : NSObject

@property (class, readonly, copy, nonatomic) NSArray *testEnvironmentsForExistingStores;
@property (class, readonly, copy, nonatomic) NSArray *testEnvironmentsForOnDiskExistingStores;
@property (class, readonly, copy, nonatomic) NSArray *matisseGraphs;

@property (readonly, nonatomic) KGStoredGraph *graph;

+ (id)temporaryURLWithFileExtension:(id)a0;
+ (id)environmentWithTestDBWithStoreType:(Class)a0;

- (unsigned long long)edgeCount;
- (void).cxx_destruct;
- (unsigned long long)nodeCount;
- (id)initWithKGGraph:(id)a0;
- (void)closeAndDeleteEnvironment;
- (id)placeholderNodeWithLabels:(id)a0 weight:(float)a1 properties:(id)a2;
- (id)placeholderEdgeWithLabels:(id)a0 weight:(float)a1 properties:(id)a2 sourceNode:(id)a3 targetNode:(id)a4;
- (id)addNodeWithLabels:(id)a0 weight:(float)a1 properties:(id)a2;
- (id)addEdgeWithLabels:(id)a0 weight:(float)a1 properties:(id)a2 sourceNode:(id)a3 targetNode:(id)a4;
- (id)refetchNode:(id)a0;
- (id)refetchEdge:(id)a0;
- (BOOL)deleteNode:(id)a0;
- (BOOL)deleteEdge:(id)a0;
- (void)populateGraph;

@end
