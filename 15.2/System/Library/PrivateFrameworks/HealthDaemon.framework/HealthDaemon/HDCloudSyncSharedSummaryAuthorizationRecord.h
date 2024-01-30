@class NSUUID, NSArray, CKRecordID, HDCloudSyncCodableSharedSummaryAuthorizationRecord;

@interface HDCloudSyncSharedSummaryAuthorizationRecord : HDCloudSyncRecord {
    HDCloudSyncCodableSharedSummaryAuthorizationRecord *_underlyingAuthorizationRecord;
}

@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSArray *authorizationCategories;
@property (readonly, copy, nonatomic) CKRecordID *participantRecordID;

+ (BOOL)shouldSerializeUnderlyingMessageAsProtected;
+ (id)codableRecordFromRecord:(id)a0;
+ (id)recordWithCKRecord:(id)a0 error:(id *)a1;
+ (BOOL)requiresUnderlyingMessage;
+ (id)fieldsForUnprotectedSerialization;
+ (id)recordType;
+ (BOOL)hasFutureSchema:(id)a0;
+ (id)recordIDWithZoneID:(id)a0 UUID:(id)a1;
+ (BOOL)isAuthorizationRecord:(id)a0;

- (id)initWithCKRecord:(id)a0 schemaVersion:(long long)a1;
- (id)description;
- (id)printDescription;
- (void).cxx_destruct;
- (id)serializeUnderlyingMessage;
- (void)replaceAuthorizationCategories:(id)a0;
- (id)initInZone:(id)a0 UUID:(id)a1 authorizationCategories:(id)a2 participantRecord:(id)a3;
- (void)updateAuthorizationWithCategoriesToAdd:(id)a0 categoriesToDelete:(id)a1;

@end
