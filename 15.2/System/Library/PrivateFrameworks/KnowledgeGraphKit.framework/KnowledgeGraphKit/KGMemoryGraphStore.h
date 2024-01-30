@class NSString, NSMutableDictionary, KGMutableDirectedBinaryAdjacency, NSURL, NSUUID;
@protocol KGEntityFactory;

@interface KGMemoryGraphStore : NSObject <KGGraphStore>

@property (class, readonly, copy, nonatomic) NSString *persistentStoreFileExtension;

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, nonatomic) NSMutableDictionary *memoryNodeByIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *memoryNodesByLabel;
@property (readonly, nonatomic) NSMutableDictionary *memoryEdgeByIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *memoryEdgesByLabel;
@property (readonly, nonatomic) KGMutableDirectedBinaryAdjacency *edgeIdentifiersBySourceNodeIdentifier;
@property (readonly, nonatomic) KGMutableDirectedBinaryAdjacency *edgeIdentifiersByTargetNodeIdentifier;
@property (nonatomic) unsigned long long nextNodeIdentifier;
@property (nonatomic) unsigned long long nextEdgeIdentifier;
@property (readonly, nonatomic) NSURL *url;
@property (nonatomic) unsigned long long graphVersion;
@property (readonly, nonatomic) NSUUID *graphIdentifier;
@property (readonly, nonatomic) id<KGEntityFactory> entityFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)copyFromURL:(id)a0 toURL:(id)a1 error:(id *)a2;
+ (BOOL)destroyAtURL:(id)a0 error:(id *)a1;
+ (BOOL)migrateFromURL:(id)a0 toURL:(id)a1 error:(id *)a2;

- (id)nodeLabels;
- (id)arrayOfEdgesWithIdentifiers:(id)a0 error:(id *)a1;
- (id)edgeIdentifiersForNodeIdentifier:(unsigned long long)a0 error:(id *)a1;
- (id)nodeForIdentifier:(unsigned long long)a0 error:(id *)a1;
- (void)beginTransaction;
- (id)_lock_targetsBySourceWithEdgeIdentifiers:(id)a0 error:(id *)a1;
- (void)close;
- (id)_lock_edgeIdentifiersMatchingFilter:(id)a0 intersectingIdentifiers:(id)a1 error:(id *)a2;
- (BOOL)addEdges:(id)a0 error:(id *)a1;
- (void)rollbackTransaction;
- (void)commitTransaction;
- (id)arrayOfUnsignedIntegerPropertiesForEdgesWithIdentifiers:(id)a0 propertyName:(id)a1 error:(id *)a2;
- (id)neighborNodeIdentifiersWithStartNodeIdentifiers:(id)a0 edgeDirection:(unsigned long long)a1 edgeFilter:(id)a2 error:(id *)a3;
- (id)arrayOfDoublePropertiesForEdgesWithIdentifiers:(id)a0 propertyName:(id)a1 error:(id *)a2;
- (id)arrayOfIntegerPropertiesForEdgesWithIdentifiers:(id)a0 propertyName:(id)a1 error:(id *)a2;
- (id)arrayOfDoublePropertiesForNodesWithIdentifiers:(id)a0 propertyName:(id)a1 error:(id *)a2;
- (BOOL)copyToURL:(id)a0 error:(id *)a1;
- (id)arrayOfStringPropertiesForNodesWithIdentifiers:(id)a0 propertyName:(id)a1 error:(id *)a2;
- (id)_lock_nodeIdentifiersOfEdgesWithIdentifiers:(id)a0 edgeDirection:(unsigned long long)a1 error:(id *)a2;
- (BOOL)updateEdgeForIdentifier:(unsigned long long)a0 withWeight:(float)a1 error:(id *)a2;
- (id)edgeForIdentifier:(unsigned long long)a0 error:(id *)a1;
- (BOOL)addNodes:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)arrayOfUnsignedIntegerPropertiesForNodesWithIdentifiers:(id)a0 propertyName:(id)a1 error:(id *)a2;
- (id)init;
- (id)_lock_edgeIdentifiersWithStartNodeIdentifiers:(id)a0 edgeDirection:(unsigned long long)a1 error:(id *)a2;
- (id)nodeIdentifiersOfEdgesWithIdentifiers:(id)a0 edgeDirection:(unsigned long long)a1 error:(id *)a2;
- (BOOL)removeNodesForIdentifiers:(id)a0 error:(id *)a1;
- (BOOL)removeEdgeForIdentifier:(unsigned long long)a0 error:(id *)a1;
- (id)arrayOfIntegerPropertiesForNodesWithIdentifiers:(id)a0 propertyName:(id)a1 error:(id *)a2;
- (id)_lock_sourcesByTargetWithEdgeIdentifiers:(id)a0 error:(id *)a1;
- (id)nodeIdentifiersMatchingFilter:(id)a0 intersectingIdentifiers:(id)a1 error:(id *)a2;
- (BOOL)openWithMode:(unsigned long long)a0 error:(id *)a1;
- (id)sourcesByTargetWithEdgeIdentifiers:(id)a0 error:(id *)a1;
- (BOOL)updateNodeForIdentifier:(unsigned long long)a0 withProperties:(id)a1 error:(id *)a2;
- (id)edgeIdentifiersMatchingFilter:(id)a0 intersectingIdentifiers:(id)a1 error:(id *)a2;
- (id)arrayOfNodesWithIdentifiers:(id)a0 error:(id *)a1;
- (BOOL)updateNodeForIdentifier:(unsigned long long)a0 withWeight:(float)a1 error:(id *)a2;
- (id)edgeIdentifiersWithStartNodeIdentifiers:(id)a0 edgeDirection:(unsigned long long)a1 error:(id *)a2;
- (id)targetsBySourceWithEdgeIdentifiers:(id)a0 error:(id *)a1;
- (BOOL)removeEdgesForIdentifiers:(id)a0 error:(id *)a1;
- (id)edgeLabels;
- (id)arrayOfStringPropertiesForEdgesWithIdentifiers:(id)a0 propertyName:(id)a1 error:(id *)a2;
- (BOOL)updateEdgeForIdentifier:(unsigned long long)a0 withProperties:(id)a1 error:(id *)a2;
- (BOOL)removeNodeForIdentifier:(unsigned long long)a0 error:(id *)a1;
- (id)initForSubclasses;
- (id)initWithEntityFactory:(id)a0;
- (id)insertEdgeWithIdentifier:(unsigned long long)a0 labels:(id)a1 weight:(float)a2 properties:(id)a3 sourceNodeIdentifier:(unsigned long long)a4 targetNodeIdentifier:(unsigned long long)a5 error:(id *)a6;
- (id)insertNodeWithIdentifier:(unsigned long long)a0 labels:(id)a1 weight:(float)a2 properties:(id)a3 error:(id *)a4;
- (id)_lock_snapshotEdgeForIdentifier:(unsigned long long)a0 reusableNode:(id)a1;
- (id)_lock_arrayOfNodesWithIdentifiers:(id)a0 error:(id *)a1;
- (id)_lock_arrayOfEdgesWithIdentifiers:(id)a0 error:(id *)a1;
- (id)_lock_snapshotNodeForIdentifier:(unsigned long long)a0;
- (id)_edgeIdentifiersForNodeIdentifier:(unsigned long long)a0;
- (BOOL)_removeMemoryEdge:(id)a0 error:(id *)a1;
- (BOOL)_removeEdgesForMemoryNode:(id)a0 error:(id *)a1;
- (BOOL)_removeNode:(unsigned long long)a0 error:(id *)a1;

@end
