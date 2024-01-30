@class NSString, NSMapTable;

@interface HMDBackgroundOperationGraph : HMFObject <HMFLogging>

@property (retain, nonatomic) NSMapTable *opGraph;
@property (retain, nonatomic) NSMapTable *inDegrees;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (BOOL)doesCycleExist;
- (id)getIndepentVertices;
- (void)addVertex:(id)a0;
- (void)addEdgeFrom:(id)a0 to:(id)a1;
- (BOOL)canAddEdgeFrom:(id)a0 to:(id)a1;
- (id)initWithOperations:(id)a0;
- (void)removeVertex:(id)a0;
- (BOOL)doesVertexAlreadyExistInGraph:(id)a0;
- (void).cxx_destruct;

@end
