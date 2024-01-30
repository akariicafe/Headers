@class NSString, KGEntityDescription, NSURL, NSUUID, KGDatabase;

@interface KGDegasGraphStore : NSObject <KGGraphStore>

@property (class, readonly, copy, nonatomic) NSString *persistentStoreFileExtension;

@property (retain, nonatomic) NSURL *url;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (nonatomic) long long transactionCounter;
@property (readonly, nonatomic) KGDatabase *database;
@property (readonly, nonatomic) BOOL hasMarker;
@property (readonly, nonatomic) KGEntityDescription *entityDescription;
@property (nonatomic) unsigned long long graphVersion;
@property (readonly, nonatomic) NSUUID *graphIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)destroyAtURL:(id)a0 error:(id *)a1;
+ (BOOL)migrateFromURL:(id)a0 toURL:(id)a1 error:(id *)a2;
+ (id)_markerFilePathForPersistentStoreFileURL:(id)a0;
+ (BOOL)copyFromURL:(id)a0 toURL:(id)a1 error:(id *)a2;
+ (BOOL)hasMarkerForDiskRepresentationAtURL:(id)a0;
+ (BOOL)setMarkerForDiskRepresentationAtURL:(id)a0;
+ (void)deleteMarkerForDiskRepresentationAtURL:(id)a0;

- (void)beginTransaction;
- (id)nodeLabels;
- (void)close;
- (void).cxx_destruct;
- (id)_markerFilePath;
- (BOOL)copyToURL:(id)a0 error:(id *)a1;
- (id)initWithURL:(id)a0;
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
- (id)nodeForIdentifier:(unsigned long long)a0 labels:(id)a1 weight:(float)a2 properties:(id)a3;
- (id)_lock_edgeForIdentifier:(unsigned long long)a0 labels:(id)a1 weight:(float)a2 sourceNode:(id)a3 targetNode:(id)a4 properties:(id)a5 error:(id *)a6;
- (void)_lock_enumerateNodesWithIdentifiers:(id)a0 block:(id /* block */)a1;
- (id)_lock_nodeForIdentifier:(unsigned long long)a0 error:(id *)a1;
- (id)nodeForIdentifier:(unsigned long long)a0 error:(id *)a1;
- (BOOL)_lock_enumerateEdgesWithIdentifiers:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (id)edgeForIdentifier:(unsigned long long)a0 error:(id *)a1;
- (id)_lock_nodeIdentifiersMatchingFilter:(id)a0 intersectingIdentifiers:(id)a1 error:(id *)a2;
- (BOOL)_lock_filterNodesWithLabels:(id)a0 nodeIdentifiers:(inout id *)a1 error:(id *)a2;
- (BOOL)_lock_filterNodesWithProperties:(id)a0 nodeIdentifiers:(inout id *)a1 error:(id *)a2;
- (id)_lock_edgeIdentifiersMatchingFilter:(id)a0 intersectingIdentifiers:(id)a1 error:(id *)a2;
- (BOOL)_lock_filterEdgesWithLabels:(id)a0 edgeIdentifiers:(inout id *)a1 error:(id *)a2;
- (BOOL)_lock_filterEdgesWithProperties:(id)a0 edgeIdentifiers:(inout id *)a1 error:(id *)a2;
- (id)_lock_edgeIdentifiersWithStartNodeIdentifiers:(id)a0 edgeDirection:(unsigned long long)a1 error:(id *)a2;
- (id)edgeIdentifiersForNodeIdentifier:(unsigned long long)a0 withLabels:(id)a1 edgeDirection:(unsigned long long)a2 error:(id *)a3;
- (id)_lock_neighborNodeIdentifiersWithStartNodeIdentifiers:(id)a0 edgeDirection:(unsigned long long)a1 edgeFilter:(id)a2 error:(id *)a3;

@end
