@class NSData, NSString, NSArray;

@interface MSPFavoritesReplica : MSPOrderedReplica <NSSecureCoding, MSPPropertyListReplicaDataSerialization, MSPPropertyListReplicaSerialization, MSPContainerStateSnapshot, MSPCloudReplica>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *propertyListDataRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id propertyListRepresentation;
@property (readonly, copy, nonatomic) NSArray *contents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)switchForEdit:(id)a0 caseIsInsertRecord:(id /* block */)a1 caseIsEditContents:(id /* block */)a2 caseIsEditPosition:(id /* block */)a3 caseIsRemoveTombstone:(id /* block */)a4;

- (id)replicaByMergingWithReplica:(id)a0 mergeOptions:(id)a1 userVisibleEffectiveContentsChanged:(out BOOL *)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPropertyListRepresentation:(id)a0 recordCreationHandler:(id /* block */)a1;
- (id)mergeOptionsWithLastSyncDate:(id)a0;
- (id)changesMergingCloudChanges:(id)a0 withReplica:(id)a1 lastSyncDate:(id)a2;
- (id)initWithCoder:(id)a0;
- (Class)replicaRecordClass;
- (id)propertyListRepresentationDecoratingRecordsWithBlock:(id /* block */)a0;
- (id)editsToMergeWithReplica:(id)a0 mergeOptions:(id)a1;

@end
