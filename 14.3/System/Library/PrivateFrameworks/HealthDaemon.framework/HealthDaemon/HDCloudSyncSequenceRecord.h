@class HDCloudSyncCodableSequence, NSUUID, HDSyncAnchorMap, NSSet, CKRecordID;

@interface HDCloudSyncSequenceRecord : HDCloudSyncRecord {
    HDCloudSyncCodableSequence *_underlyingSequence;
}

@property (readonly, copy, nonatomic) NSUUID *storeIdentifier;
@property (nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) int slot;
@property (readonly, nonatomic) long long changeIndex;
@property (readonly, nonatomic) long long baselineEpoch;
@property (readonly, nonatomic) long long childRecordCount;
@property (readonly, nonatomic) HDSyncAnchorMap *syncAnchorMap;
@property (readonly, copy, nonatomic) NSSet *includedIdentifiers;
@property (nonatomic) int protocolVersion;
@property (readonly, nonatomic) HDSyncAnchorMap *frozenSyncAnchorMap;
@property (copy, nonatomic) CKRecordID *firstUnfrozenChangeRecord;

+ (id)recordType;
+ (id)recordWithCKRecord:(id)a0 error:(id *)a1;
+ (BOOL)requiresUnderlyingMessage;
+ (BOOL)hasFutureSchema:(id)a0;
+ (id)recordIDWithOwnerIdentifier:(id)a0 storeIdentifier:(id)a1 zoneID:(id)a2 sequenceSlot:(int)a3;
+ (id)recordIDWithIndividualZoneID:(id)a0 sequenceSlot:(int)a1;
+ (id)_recordIDForStoreRecord:(id)a0 slot:(int)a1;
+ (id)_recordNameForSequenceSlot:(int)a0;
+ (id)recordIDsWithIndividualZoneID:(id)a0;
+ (id)recordIDsForOwnerIdentifier:(id)a0 storeIdentifier:(id)a1 zoneID:(id)a2;
+ (BOOL)isSequenceRecord:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)serializeUnderlyingMessage;
- (id)initWithCKRecord:(id)a0 schemaVersion:(long long)a1;
- (void)incrementChildRecordCount;
- (void)decrementChildRecordCount:(unsigned long long)a0;
- (void)resetChangeIndex:(unsigned long long)a0;
- (void)replaceSyncAnchorMapWithSyncAnchorMap:(id)a0;
- (void)incrementChangeIndex;
- (void)updateSyncAnchorMapWithSyncAnchorMap:(id)a0;
- (void)updateFrozenSyncAnchorMapWithSyncAnchorMap:(id)a0;
- (id)initForSequenceSlot:(int)a0 syncAnchorMap:(id)a1 active:(BOOL)a2 changeIndex:(unsigned long long)a3 childRecordCount:(unsigned long long)a4 baselineEpoch:(long long)a5 includedIdentifiers:(id)a6 protocolVersion:(int)a7 storeRecordID:(id)a8 record:(id)a9 schemaVersion:(long long)a10;
- (id)initWithCKRecord:(id)a0 schemaVersion:(long long)a1 underlyingSequence:(id)a2;
- (id)initForSequenceSlot:(int)a0 syncAnchorMap:(id)a1 changeIndex:(unsigned long long)a2 baselineEpoch:(long long)a3 includedIdentifiers:(id)a4 storeRecord:(id)a5;
- (void)_unitTest_setChildRecordCount:(unsigned long long)a0;

@end
