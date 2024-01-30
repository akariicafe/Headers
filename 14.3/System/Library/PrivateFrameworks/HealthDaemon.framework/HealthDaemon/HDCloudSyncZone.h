@class NSUUID, HDCloudSyncStore, NSArray, CKRecordID, HDCloudSyncZoneIdentifier, HDCloudSyncRepository, HDCloudSyncRegistryRecord, HDCloudSyncDataUploadRequestRecord, NSMutableArray, CKShare, HDCloudSyncStoreRecord, HDCloudSyncMasterRecord;

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

- (void).cxx_destruct;
- (id)description;
- (id)initForZoneIdentifier:(id)a0 repository:(id)a1 type:(long long)a2;
- (BOOL)addRecord:(id)a0 error:(id *)a1;
- (void)removeRecord:(id)a0;
- (BOOL)_addSubscriptionRecord:(id)a0 error:(id *)a1;

@end
