@class NSString, NSUUID, NSData, MSPVectorTimestamp, NSDate, CKRecord;

@interface MSPHistoryReplicaRecordFromCloudKit : MSPReplicaRecordFromCloudKit <MSPHistoryReplicaRecord, MSPHistoryReplicaRecordFromCloud>

@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (readonly, copy, nonatomic) NSData *contents;
@property (readonly, copy, nonatomic) MSPVectorTimestamp *contentsTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CKRecord *record;
@property (readonly, nonatomic, getter=isTombstoneRepresentedByCloudRecord) BOOL tombstoneRepresentedByCloudRecord;
@property (readonly, nonatomic, getter=recordIdentifier) NSUUID *recordIdentifier;

+ (id)recordFromInsertEdit:(id)a0;
+ (id)tombstoneWithRecordIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)initWithCKRecord:(id)a0;
- (id)initWithReplicaRecord:(id)a0 recordID:(id)a1;
- (void)applyDeleteTombstoneEdit:(id)a0;
- (void)applyUpdateEdit:(id)a0;
- (void)applyUpdateModificationDateEdit:(id)a0;

@end
