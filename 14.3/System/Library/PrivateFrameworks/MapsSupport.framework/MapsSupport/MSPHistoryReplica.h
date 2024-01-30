@class NSArray, NSString, NSData;

@interface MSPHistoryReplica : MSPReplica <MSPContainerStateSnapshot, NSSecureCoding, MSPPropertyListReplicaDataSerialization, MSPPropertyListReplicaSerialization, MSPCloudReplica>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *contents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSData *propertyListDataRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id propertyListRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)switchForEdit:(id)a0 caseIsInsertRecord:(id /* block */)a1 caseIsEditContents:(id /* block */)a2 caseIsEditModificationDate:(id /* block */)a3 caseIsDeleteTombstone:(id /* block */)a4;
+ (id)allowedEditClasses;

- (Class)replicaRecordClass;
- (id)initWithPropertyListRepresentation:(id)a0 recordCreationHandler:(id /* block */)a1;
- (id)editsToMergeWithReplica:(id)a0 knownSyncDateForLeastRecentlySyncedClientIfAny:(id)a1;
- (id)mergeOptionsWithLastSyncDate:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)replicaByMergingWithReplica:(id)a0 mergeOptions:(id)a1 userVisibleEffectiveContentsChanged:(out BOOL *)a2;
- (id)editsToMergeWithReplica:(id)a0;
- (id)propertyListRepresentationDecoratingRecordsWithBlock:(id /* block */)a0;
- (id)changesMergingCloudChanges:(id)a0 withReplica:(id)a1 lastSyncDate:(id)a2;
- (id)editsToMergeWithReplica:(id)a0 mergeOptions:(id)a1;
- (void)_mergeSelfRecord:(id)a0 withRecordFromOtherReplica:(id)a1 identifier:(id)a2 options:(id)a3 edits:(id)a4;
- (id)_sortedHistoryEntriesByApplyingEdits:(id)a0 invalidEntryIdentifiers:(out id *)a1;
- (void)encodeWithCoder:(id)a0;

@end
