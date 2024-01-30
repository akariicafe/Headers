@class NSString, NSUUID, NSDictionary;

@interface MSPReplica : NSObject <MSPCloudReplica>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSUUID *clientIdentifier;
@property (readonly, nonatomic) NSDictionary *records;

+ (id)allowedEditClasses;
+ (void)_switchForEdit:(id)a0 caseIsInsertRecord:(id /* block */)a1 caseIsEditContents:(id /* block */)a2;

- (id)_replicaByApplyingContainerEdits:(id)a0 toOldContents:(id)a1 forNewContents:(id)a2 recordCreationHandler:(id /* block */)a3 replicaEditApplier:(id /* block */)a4 error:(out id *)a5;
- (id)replicaByApplyingContainerEdits:(id)a0 toOldContents:(id)a1 forNewContents:(id)a2 recordCreationHandler:(id /* block */)a3 replicaEditApplier:(id /* block */)a4 error:(out id *)a5;
- (id)editsToInsertOrUpdateRecords:(id)a0;
- (id)editsToMergeWithReplica:(id)a0;
- (id)editsToRemoveRecordsWithIdentifiers:(id)a0;
- (BOOL)_containerSerializationRequiresTrackingPositionEdits;
- (void).cxx_destruct;
- (id)mergeOptionsWithLastSyncDate:(id)a0;
- (id)init;
- (id)changesMergingCloudChanges:(id)a0 withReplica:(id)a1 lastSyncDate:(id)a2;
- (Class)replicaRecordClass;
- (id)initWithRecords:(id)a0 clientIdentifier:(id)a1;
- (id)tombstoneRecordForRecord:(id)a0;
- (void)_mergeSelfRecord:(id)a0 withRecordFromOtherReplica:(id)a1 identifier:(id)a2 options:(id)a3 edits:(id)a4;
- (id)editsToMergeWithReplica:(id)a0 mergeOptions:(id)a1;

@end
