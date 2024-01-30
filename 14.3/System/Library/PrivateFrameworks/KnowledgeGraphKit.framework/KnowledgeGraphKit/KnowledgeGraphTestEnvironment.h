@class NSArray, KGGraph;

@interface KnowledgeGraphTestEnvironment : NSObject

@property (class, readonly, copy, nonatomic) NSArray *testEnvironmentsForExistingStores;
@property (class, readonly, copy, nonatomic) NSArray *testEnvironmentsForOnDiskExistingStores;
@property (class, readonly, copy, nonatomic) NSArray *matisseGraphs;

@property (readonly, nonatomic) KGGraph *graph;

+ (id)temporaryURLWithFileExtension:(id)a0;
+ (id)environmentWithTestDBWithStoreType:(Class)a0;

- (void).cxx_destruct;
- (unsigned long long)edgeCount;
- (unsigned long long)nodeCount;
- (id)initWithKGGraph:(id)a0;
- (void)closeAndDeleteEnvironment;
- (id)addNodeWithLabels:(id)a0 weight:(double)a1 properties:(id)a2;
- (id)addEdgeWithLabels:(id)a0 weight:(double)a1 properties:(id)a2 sourceNode:(id)a3 targetNode:(id)a4;
- (id)refetchNode:(id)a0;
- (id)refetchEdge:(id)a0;
- (BOOL)deleteNode:(id)a0;
- (BOOL)deleteEdge:(id)a0;
- (void)populateGraph;

@end
