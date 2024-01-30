@class HDCloudSyncSharedSummaryRelationshipRecord, HDCloudSyncDataUploadRequestRecord, NSMutableArray, HDCloudSyncZoneIdentifier, CKRecordID, HDCloudSyncRepository, HDCloudSyncRegistryRecord, HDCloudSyncStore, HDCloudSyncStoreRecord, NSArray, HDCloudSyncMasterRecord, CKShare, NSUUID;

@interface HDCloudSyncZone : NSObject {
    NSMutableArray *_records;
    NSMutableArray *_storeRecords;
    NSMutableArray *_orphanedSequenceRecords;
}

@property (readonly, weak, nonatomic) HDCloudSyncRepository *repository;
@property (readonly, copy, nonatomic) HDCloudSyncZoneIdentifier *zoneIdentifier;
@property (readonly, nonatomic) long long zoneType;
@property (nonatomic) BOOL hasLostIdentity;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL hasOrphanedSequenceRecords;
@property (readonly, copy, nonatomic) NSArray *recordNames;
@property (readonly, nonatomic) long long recordCount;
@property (readonly, nonatomic) HDCloudSyncRegistryRecord *registryRecord;
@property (readonly, copy, nonatomic) NSArray *storeRecords;
@property (readonly, copy, nonatomic) NSArray *records;
@property (nonatomic) BOOL hasFutureSchemaRecord;
@property (nonatomic) long long purpose;
@property (readonly, copy, nonatomic) CKRecordID *zoneShareRecordID;
@property (retain, nonatomic) CKShare *zoneShare;
@property (nonatomic) BOOL validatedForSharing;
@property (readonly, copy, nonatomic) NSUUID *storeIdentifier;
@property (readonly, nonatomic) HDCloudSyncStoreRecord *storeRecord;
@property (readonly, nonatomic) HDCloudSyncMasterRecord *masterRecord;
@property (retain, nonatomic) HDCloudSyncStore *store;
@property (readonly, nonatomic) HDCloudSyncDataUploadRequestRecord *dataUploadRequestRecord;
@property (readonly, nonatomic) HDCloudSyncSharedSummaryRelationshipRecord *relationshipRecord;
@property (readonly, nonatomic) NSMutableArray *participantRecords;
@property (readonly, nonatomic) NSMutableArray *authorizationRecords;
@property (readonly, nonatomic) NSMutableArray *transactionRecords;

- (id)description;
- (void).cxx_destruct;
- (BOOL)addRecord:(id)a0 error:(id *)a1;
- (BOOL)_addSubscriptionRecord:(id)a0 error:(id *)a1;
- (id)initForZoneIdentifier:(id)a0 repository:(id)a1 type:(long long)a2;
- (void)removeRecord:(id)a0;

@end
