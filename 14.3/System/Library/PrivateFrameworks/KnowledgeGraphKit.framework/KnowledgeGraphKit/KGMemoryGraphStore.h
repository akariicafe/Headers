@class NSString, NSMutableDictionary, NSURL, KGEntityDescription, NSUUID;

@interface KGMemoryGraphStore : NSObject <KGGraphStore>

@property (class, readonly, copy, nonatomic) NSString *persistentStoreFileExtension;

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, nonatomic) NSMutableDictionary *memoryNodeByIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *memoryNodesByLabel;
@property (readonly, nonatomic) NSMutableDictionary *memoryEdgeByIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *memoryEdgesByLabel;
@property (nonatomic) unsigned long long nextNodeIdentifier;
@property (nonatomic) unsigned long long nextEdgeIdentifier;
@property (readonly, nonatomic) BOOL hasMarker;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) KGEntityDescription *entityDescription;
@property (nonatomic) unsigned long long graphVersion;
@property (readonly, nonatomic) NSUUID *graphIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)destroyAtURL:(id)a0 error:(id *)a1;
+ (BOOL)migrateFromURL:(id)a0 toURL:(id)a1 error:(id *)a2;
+ (BOOL)copyFromURL:(id)a0 toURL:(id)a1 error:(id *)a2;
+ (BOOL)hasMarkerForDiskRepresentationAtURL:(id)a0;
+ (BOOL)setMarkerForDiskRepresentationAtURL:(id)a0;
+ (void)deleteMarkerForDiskRepresentationAtURL:(id)a0;

- (void)beginTransaction;
- (id)nodeLabels;
- (id)init;
- (void)close;
- (void).cxx_destruct;
- (BOOL)copyToURL:(id)a0 error:(id *)a1;
- (id)edgeLabels;
- (void)setMarker;
- (void)deleteMarker;
- (void)commitTransaction;
- (unsigned long long)addNodeWithLabels:(id)a0 weight:(float)a1 properties:(id)a2 error:(id *)a3;
- (unsigned long long)addEdgeWithLabels:(id)a0 weight:(float)a1 properties:(id)a2 sourceNodeIdentifier:(unsigned long long)a3 targetNodeIdentifier:(unsigned long long)a4 error:(id *)a5;
- (BOOL)openWithMode:(unsigned long long)a0 error:(id *)a1;
- (id)arrayOfNodesWithIdentifiers:(id)a0 error:(id *)a1;
- (id)arrayOfEdgesWithIdentifiers:(id)a0 error:(id *)a1;
- (id)nodesForIdentifiers:(id)a0 error:(id *)a1;
- (id)edgesForIdentifiers:(id)a0 error:(id *)a1;
- (id)nodeIdentifiersMatchingFilter:(id)a0 intersectingIdentifiers:(id)a1 error:(id *)a2;
- (id)edgeIdentifiersMatchingFilter:(id)a0 intersectingIdentifiers:(id)a1 error:(id *)a2;
- (id)edgeIdentifiersWithStartNodeIdentifiers:(id)a0 edgeDirection:(unsigned long long)a1 error:(id *)a2;
- (id)neighborNodeIdentifiersWithStartNodeIdentifiers:(id)a0 edgeDirection:(unsigned long long)a1 edgeFilter:(id)a2 error:(id *)a3;
- (BOOL)removeNodeForIdentifier:(unsigned long long)a0 error:(id *)a1;
- (BOOL)removeEdgeForIdentifier:(unsigned long long)a0 error:(id *)a1;
- (BOOL)removeNodesForIdentifiers:(id)a0 error:(id *)a1;
- (BOOL)removeEdgesForIdentifiers:(id)a0 error:(id *)a1;
- (BOOL)updateNodeForIdentifier:(unsigned long long)a0 withWeight:(float)a1 error:(id *)a2;
- (BOOL)updateNodeForIdentifier:(unsigned long long)a0 withProperties:(id)a1 error:(id *)a2;
- (BOOL)updateEdgeForIdentifier:(unsigned long long)a0 withWeight:(float)a1 error:(id *)a2;
- (BOOL)updateEdgeForIdentifier:(unsigned long long)a0 withProperties:(id)a1 error:(id *)a2;
- (id)nodeForIdentifier:(unsigned long long)a0 error:(id *)a1;
- (id)edgeForIdentifier:(unsigned long long)a0 error:(id *)a1;
- (id)edgeIdentifiersForNodeIdentifier:(unsigned long long)a0 error:(id *)a1;
- (id)initForSubclasses;
- (id)insertEdgeWithIdentifier:(unsigned long long)a0 labels:(id)a1 weight:(float)a2 properties:(id)a3 sourceNodeIdentifier:(unsigned long long)a4 targetNodeIdentifier:(unsigned long long)a5 error:(id *)a6;
- (unsigned long long)_addEdgeWithLabels:(id)a0 weight:(float)a1 properties:(id)a2 sourceNodeIdentifier:(unsigned long long)a3 targetNodeIdentifier:(unsigned long long)a4 error:(id *)a5;
- (id)insertNodeWithIdentifier:(unsigned long long)a0 labels:(id)a1 weight:(float)a2 properties:(id)a3 error:(id *)a4;
- (unsigned long long)_addNodeWithLabels:(id)a0 weight:(float)a1 properties:(id)a2 error:(id *)a3;
- (id)_lock_snapshotEdgeForIdentifier:(unsigned long long)a0 reusableNode:(id)a1;
- (id)_lock_arrayOfNodesWithIdentifiers:(id)a0 error:(id *)a1;
- (id)_lock_arrayOfEdgesWithIdentifiers:(id)a0 error:(id *)a1;
- (id)_lock_snapshotNodeForIdentifier:(unsigned long long)a0;
- (id)_edgeIdentifiersForNodeIdentifier:(unsigned long long)a0;
- (BOOL)_removeMemoryEdge:(id)a0 fromSourNode:(BOOL)a1 fromTargetNode:(BOOL)a2 error:(id *)a3;
- (BOOL)_removeEdgesForMemoryNode:(id)a0 error:(id *)a1;
- (BOOL)_removeNode:(unsigned long long)a0 error:(id *)a1;

@end
