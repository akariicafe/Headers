@class NSString, NSUUID, NSURL, KGDatabase;
@protocol KGEntityFactory;

@interface KGDegasGraphStore : NSObject <KGGraphStore>

@property (class, readonly, copy, nonatomic) NSString *persistentStoreFileExtension;

@property (retain, nonatomic) NSURL *url;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (nonatomic) long long transactionCounter;
@property (readonly, nonatomic) BOOL isReadOnly;
@property (readonly, nonatomic) KGDatabase *database;
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
- (BOOL)_lock_filterNodesWithRequiredLabels:(id)a0 nodeIdentifiers:(inout id *)a1 error:(id *)a2;
- (id)nodeForIdentifier:(unsigned long long)a0 error:(id *)a1;
- (void)beginTransaction;
- (id)_lock_targetsBySourceWithEdgeIdentifiers:(id)a0 error:(id *)a1;
- (void)close;
- (id)_lock_nodeForIdentifier:(unsigned long long)a0 error:(id *)a1;
- (BOOL)_lock_enumerateEdgesWithIdentifiers:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (id)_lock_edgeIdentifiersMatchingFilter:(id)a0 intersectingIdentifiers:(id)a1 error:(id *)a2;
- (id)initWithURL:(id)a0;
- (BOOL)_lock_filterEdgesWithRequiredLabels:(id)a0 edgeIdentifiers:(inout id *)a1 error:(id *)a2;
- (BOOL)addEdges:(id)a0 error:(id *)a1;
- (void)rollbackTransaction;
- (void)commitTransaction;
- (id)_resolvedPropertyValue:(id)a0 isScalar:(BOOL *)a1;
- (id)_lock_neighborNodeIdentifiersWithStartNodeIdentifiers:(id)a0 edgeDirection:(unsigned long long)a1 edgeFilter:(id)a2 error:(id *)a3;
- (id)arrayOfUnsignedIntegerPropertiesForEdgesWithIdentifiers:(id)a0 propertyName:(id)a1 error:(id *)a2;
- (BOOL)_lock_filterEdgesWithOptionalLabels:(id)a0 edgeIdentifiers:(inout id *)a1 error:(id *)a2;
- (id)neighborNodeIdentifiersWithStartNodeIdentifiers:(id)a0 edgeDirection:(unsigned long long)a1 edgeFilter:(id)a2 error:(id *)a3;
- (id)arrayOfDoublePropertiesForEdgesWithIdentifiers:(id)a0 propertyName:(id)a1 error:(id *)a2;
- (id)arrayOfIntegerPropertiesForEdgesWithIdentifiers:(id)a0 propertyName:(id)a1 error:(id *)a2;
- (BOOL)_lock_filterEdgesWithProperties:(id)a0 edgeIdentifiers:(inout id *)a1 error:(id *)a2;
- (id)arrayOfDoublePropertiesForNodesWithIdentifiers:(id)a0 propertyName:(id)a1 error:(id *)a2;
- (BOOL)copyToURL:(id)a0 error:(id *)a1;
- (id)arrayOfStringPropertiesForNodesWithIdentifiers:(id)a0 propertyName:(id)a1 error:(id *)a2;
- (id)_lock_nodeIdentifiersOfEdgesWithIdentifiers:(id)a0 edgeDirection:(unsigned long long)a1 error:(id *)a2;
- (BOOL)updateEdgeForIdentifier:(unsigned long long)a0 withWeight:(float)a1 error:(id *)a2;
- (id)edgeForIdentifier:(unsigned long long)a0 error:(id *)a1;
- (BOOL)_lock_filterNodesWithOptionalLabels:(id)a0 nodeIdentifiers:(inout id *)a1 error:(id *)a2;
- (BOOL)addNodes:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)arrayOfUnsignedIntegerPropertiesForNodesWithIdentifiers:(id)a0 propertyName:(id)a1 error:(id *)a2;
- (id)_lock_edgeIdentifiersWithStartNodeIdentifiers:(id)a0 edgeDirection:(unsigned long long)a1 error:(id *)a2;
- (id)nodeIdentifiersOfEdgesWithIdentifiers:(id)a0 edgeDirection:(unsigned long long)a1 error:(id *)a2;
- (BOOL)removeNodesForIdentifiers:(id)a0 error:(id *)a1;
- (id)initWithURL:(id)a0 entityFactory:(id)a1;
- (id)_lock_nodeIdentifiersMatchingFilter:(id)a0 intersectingIdentifiers:(id)a1 error:(id *)a2;
- (BOOL)removeEdgeForIdentifier:(unsigned long long)a0 error:(id *)a1;
- (id)arrayOfIntegerPropertiesForNodesWithIdentifiers:(id)a0 propertyName:(id)a1 error:(id *)a2;
- (id)_lock_sourcesByTargetWithEdgeIdentifiers:(id)a0 error:(id *)a1;
- (id)nodeIdentifiersMatchingFilter:(id)a0 intersectingIdentifiers:(id)a1 error:(id *)a2;
- (id)edgeIdentifiersForNodeIdentifier:(unsigned long long)a0 withLabels:(id)a1 edgeDirection:(unsigned long long)a2 error:(id *)a3;
- (BOOL)openWithMode:(unsigned long long)a0 error:(id *)a1;
- (id)sourcesByTargetWithEdgeIdentifiers:(id)a0 error:(id *)a1;
- (BOOL)updateNodeForIdentifier:(unsigned long long)a0 withProperties:(id)a1 error:(id *)a2;
- (id)edgeIdentifiersMatchingFilter:(id)a0 intersectingIdentifiers:(id)a1 error:(id *)a2;
- (id)arrayOfNodesWithIdentifiers:(id)a0 error:(id *)a1;
- (BOOL)_lock_filterNodesWithProperties:(id)a0 nodeIdentifiers:(inout id *)a1 error:(id *)a2;
- (BOOL)updateNodeForIdentifier:(unsigned long long)a0 withWeight:(float)a1 error:(id *)a2;
- (id)edgeIdentifiersWithStartNodeIdentifiers:(id)a0 edgeDirection:(unsigned long long)a1 error:(id *)a2;
- (id)targetsBySourceWithEdgeIdentifiers:(id)a0 error:(id *)a1;
- (void)_lock_enumerateNodesWithIdentifiers:(id)a0 block:(id /* block */)a1;
- (BOOL)openWithMode:(unsigned long long)a0 nameCache:(id)a1 error:(id *)a2;
- (BOOL)removeEdgesForIdentifiers:(id)a0 error:(id *)a1;
- (id)edgeLabels;
- (id)arrayOfStringPropertiesForEdgesWithIdentifiers:(id)a0 propertyName:(id)a1 error:(id *)a2;
- (BOOL)updateEdgeForIdentifier:(unsigned long long)a0 withProperties:(id)a1 error:(id *)a2;
- (BOOL)removeNodeForIdentifier:(unsigned long long)a0 error:(id *)a1;

@end
