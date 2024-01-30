@class NSMutableArray, KGMutableElementIdentifierSet;

@interface KGGraphChangeRequest : NSObject

@property (retain, nonatomic) NSMutableArray *nodesToInsert;
@property (retain, nonatomic) NSMutableArray *edgesToInsert;
@property (retain, nonatomic) NSMutableArray *nodeUpdates;
@property (retain, nonatomic) NSMutableArray *edgeUpdates;
@property (retain, nonatomic) KGMutableElementIdentifierSet *nodeIdentifiersToRemove;
@property (retain, nonatomic) KGMutableElementIdentifierSet *edgeIdentifiersToRemove;
@property (readonly, nonatomic) unsigned long long count;

- (void)removeNode:(id)a0;
- (void)insertNode:(id)a0;
- (void)removeEdge:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setResolved;
- (void)updateNode:(id)a0 newWeight:(float)a1 newProperties:(id)a2;
- (void)updateNode:(id)a0 newWeight:(float)a1;
- (void)updateNode:(id)a0 newProperties:(id)a1;
- (void)removeNodesForIdentifiers:(id)a0;
- (void)insertEdge:(id)a0;
- (void)updateEdge:(id)a0 newWeight:(float)a1 newProperties:(id)a2;
- (void)updateEdge:(id)a0 newWeight:(float)a1;
- (void)updateEdge:(id)a0 newProperties:(id)a1;
- (void)removeEdgesForIdentifiers:(id)a0;

@end
