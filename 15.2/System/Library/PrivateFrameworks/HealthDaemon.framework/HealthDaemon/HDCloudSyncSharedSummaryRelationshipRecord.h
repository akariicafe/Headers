@class HDCloudSyncCodableSharedSummaryRelationshipRecord;

@interface HDCloudSyncSharedSummaryRelationshipRecord : HDCloudSyncRecord {
    HDCloudSyncCodableSharedSummaryRelationshipRecord *_underlyingSummaryRelationshipRecord;
}

+ (BOOL)shouldSerializeUnderlyingMessageAsProtected;
+ (id)recordIDWithZoneID:(id)a0;
+ (BOOL)isRelationshipRecord:(id)a0;
+ (BOOL)requiresUnderlyingMessage;
+ (id)recordType;
+ (BOOL)isRelationshipRecordID:(id)a0;
+ (BOOL)hasFutureSchema:(id)a0;

- (id)initWithCKRecord:(id)a0 schemaVersion:(long long)a1;
- (id)description;
- (id)printDescription;
- (void).cxx_destruct;
- (id)serializeUnderlyingMessage;
- (id)initInZone:(id)a0;
- (BOOL)addOrUpdateParticipant:(id)a0 errorOut:(id *)a1;
- (id)authorizationRecordIdentifierForContactIdentifier:(id)a0 errorOut:(id *)a1;
- (BOOL)removeParticipant:(id)a0 errorOut:(id *)a1;
- (id)codableParticipantForContactIdentifier:(id)a0 errorOut:(id *)a1;
- (BOOL)containsContactIdentifier:(id)a0;

@end
