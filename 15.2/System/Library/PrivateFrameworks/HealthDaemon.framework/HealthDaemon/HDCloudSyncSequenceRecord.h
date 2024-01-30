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

+ (id)recordIDsWithIndividualZoneID:(id)a0;
+ (id)recordWithCKRecord:(id)a0 error:(id *)a1;
+ (BOOL)requiresUnderlyingMessage;
+ (id)fieldsForUnprotectedSerialization;
+ (BOOL)isSequenceRecord:(id)a0;
+ (id)recordType;
+ (id)recordIDsForOwnerIdentifier:(id)a0 storeIdentifier:(id)a1 zoneID:(id)a2;
+ (BOOL)hasFutureSchema:(id)a0;

- (id)initWithCKRecord:(id)a0 schemaVersion:(long long)a1;
- (id)initForSequenceSlot:(int)a0 syncAnchorMap:(id)a1 changeIndex:(unsigned long long)a2 baselineEpoch:(long long)a3 includedIdentifiers:(id)a4 storeRecord:(id)a5;
- (void)resetChangeIndex:(unsigned long long)a0;
- (void)updateSyncAnchorMapWithSyncAnchorMap:(id)a0;
- (void)updateFrozenSyncAnchorMapWithSyncAnchorMap:(id)a0;
- (void)incrementChildRecordCount;
- (id)description;
- (id)printDescription;
- (void)decrementChildRecordCount:(unsigned long long)a0;
- (void)replaceSyncAnchorMapWithSyncAnchorMap:(id)a0;
- (void).cxx_destruct;
- (void)incrementChangeIndex;
- (BOOL)isEqual:(id)a0;
- (void)_unitTest_setChildRecordCount:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)serializeUnderlyingMessage;

@end
