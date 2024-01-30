@class MSPPosition, NSString, NSUUID, NSData, MSPVectorTimestamp, CKRecord;

@interface MSPOrderedReplicaRecordFromCloudKit : MSPReplicaRecordFromCloudKit <MSPOrderedReplicaRecord, MSPOrderedReplicaRecordFromCloud>

@property (readonly, nonatomic) MSPPosition *position;
@property (readonly, nonatomic) MSPVectorTimestamp *positionTimestamp;
@property (readonly, copy, nonatomic) NSData *contents;
@property (readonly, copy, nonatomic) MSPVectorTimestamp *contentsTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CKRecord *record;
@property (readonly, nonatomic, getter=isTombstoneRepresentedByCloudRecord) BOOL tombstoneRepresentedByCloudRecord;
@property (readonly, nonatomic, getter=recordIdentifier) NSUUID *recordIdentifier;

+ (id)recordType;
+ (id)recordFromInsertEdit:(id)a0;

- (id)recordRepresentation;
- (id)recordZoneName;
- (void).cxx_destruct;
- (id)initWithCKRecord:(id)a0;
- (id)initWithReplicaRecord:(id)a0 recordID:(id)a1;
- (void)applyUpdatePositionEdit:(id)a0;
- (id)initWithContents:(id)a0 contentsTimestamp:(id)a1 position:(id)a2 positionTimestamp:(id)a3 identifier:(id)a4;

@end
