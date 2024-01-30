@class NSUUID, NSString, CKShareParticipant, NSArray, NSDate, HDCodableSharingSetupMetadata, HDCloudSyncCodableSharedSummaryParticipantRecord, NSNumber;

@interface HDCloudSyncSharedSummaryParticipantRecord : HDCloudSyncRecord {
    HDCloudSyncCodableSharedSummaryParticipantRecord *_underlyingSummaryParticipantRecord;
}

@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSString *contactIdentifier;
@property (readonly, copy, nonatomic) NSUUID *authorizationRecordIdentifier;
@property (copy, nonatomic) NSUUID *invitationUUID;
@property (copy, nonatomic) NSString *cloudKitIdentifier;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSArray *allContactIdentifiers;
@property (copy, nonatomic) NSNumber *userWheelchairMode;
@property (copy, nonatomic) NSNumber *relationshipType;
@property (copy, nonatomic) NSNumber *relationshipDirection;
@property (copy, nonatomic) NSNumber *relationshipStatus;
@property (copy, nonatomic) NSNumber *notificationStatus;
@property (copy, nonatomic) NSDate *entryModificationDate;
@property (copy, nonatomic) NSDate *entryInvitationDate;
@property (copy, nonatomic) NSDate *entryAcceptanceDate;
@property (copy, nonatomic) HDCodableSharingSetupMetadata *shareSetupMetadata;
@property (copy, nonatomic) CKShareParticipant *ownerParticipant;

+ (BOOL)isParticipantRecord:(id)a0;
+ (BOOL)shouldSerializeUnderlyingMessageAsProtected;
+ (id)codableRecordFromRecord:(id)a0;
+ (id)recordWithCKRecord:(id)a0 error:(id *)a1;
+ (BOOL)requiresUnderlyingMessage;
+ (id)fieldsForUnprotectedSerialization;
+ (id)recordType;
+ (BOOL)hasFutureSchema:(id)a0;
+ (id)recordIDWithZoneID:(id)a0 UUID:(id)a1;

- (id)initWithCKRecord:(id)a0 schemaVersion:(long long)a1;
- (id)description;
- (id)printDescription;
- (void).cxx_destruct;
- (id)serializeUnderlyingMessage;
- (long long)mergeWithLocalEntry:(id)a0 error:(id *)a1;
- (id)initInZone:(id)a0 UUID:(id)a1 contactIdentifier:(id)a2 relationshipRecord:(id)a3;
- (id)initInZone:(id)a0 codableEntry:(id)a1 relationshipRecord:(id)a2;
- (BOOL)updateWithLocalEntry:(id)a0 error:(id *)a1;
- (void)setAuthorizationRecord:(id)a0;

@end
