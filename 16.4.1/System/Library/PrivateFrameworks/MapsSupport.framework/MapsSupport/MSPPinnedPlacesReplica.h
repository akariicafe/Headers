@class NSString, NSArray, NSData;

@interface MSPPinnedPlacesReplica : MSPOrderedReplica <MSPCloudReplica, MSPContainerStateSnapshot, MSPPropertyListReplicaDataSerialization, MSPPropertyListReplicaSerialization>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *contents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSData *propertyListDataRepresentation;
@property (readonly, nonatomic) id propertyListRepresentation;

- (id)initWithPropertyListRepresentation:(id)a0 recordCreationHandler:(id /* block */)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)propertyListRepresentationDecoratingRecordsWithBlock:(id /* block */)a0;
- (id)replicaByMergingWithReplica:(id)a0 mergeOptions:(id)a1 userVisibleEffectiveContentsChanged:(out BOOL *)a2;
- (Class)replicaRecordClass;
- (id)mergeOptionsWithLastSyncDate:(id)a0;
- (id)changesMergingCloudChanges:(id)a0 withReplica:(id)a1 lastSyncDate:(id)a2;
- (id)editsToMergeWithReplica:(id)a0 mergeOptions:(id)a1;

@end
