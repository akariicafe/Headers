@class NSUUID, NSArray, CKRecordID, HDCloudSyncCodableSharedSummaryAuthorizationRecord;

@interface HDCloudSyncSharedSummaryAuthorizationRecord : HDCloudSyncRecord {
    HDCloudSyncCodableSharedSummaryAuthorizationRecord *_underlyingAuthorizationRecord;
}

@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSArray *authorizationIdentifiers;
@property (readonly, copy, nonatomic) CKRecordID *participantRecordID;

+ (id)recordType;
+ (id)codableRecordFromRecord:(id)a0;
+ (id)fieldsForUnprotectedSerialization;
+ (BOOL)hasFutureSchema:(id)a0;
+ (BOOL)isAuthorizationRecord:(id)a0;
+ (id)recordIDWithZoneID:(id)a0 UUID:(id)a1;
+ (id)recordWithCKRecord:(id)a0 error:(id *)a1;
+ (BOOL)requiresUnderlyingMessage;
+ (BOOL)shouldSerializeUnderlyingMessageAsProtected;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCKRecord:(id)a0 schemaVersion:(long long)a1;
- (id)initInZone:(id)a0 UUID:(id)a1 authorizationIdentifiers:(id)a2 participantRecord:(id)a3;
- (id)printDescription;
- (void)replaceAuthorizationIdentifiers:(id)a0;
- (id)serializeUnderlyingMessage;
- (void)updateAuthorizationWithIdentifiersToAdd:(id)a0 identifiersToDelete:(id)a1;

@end
