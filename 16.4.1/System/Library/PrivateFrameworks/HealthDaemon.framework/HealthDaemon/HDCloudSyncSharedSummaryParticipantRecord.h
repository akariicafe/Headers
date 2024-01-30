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

+ (id)recordType;
+ (id)codableRecordFromRecord:(id)a0;
+ (id)fieldsForUnprotectedSerialization;
+ (BOOL)hasFutureSchema:(id)a0;
+ (BOOL)isParticipantRecord:(id)a0;
+ (id)recordIDWithZoneID:(id)a0 UUID:(id)a1;
+ (id)recordWithCKRecord:(id)a0 error:(id *)a1;
+ (BOOL)requiresUnderlyingMessage;
+ (BOOL)shouldSerializeUnderlyingMessageAsProtected;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCKRecord:(id)a0 schemaVersion:(long long)a1;
- (id)initInZone:(id)a0 codableEntry:(id)a1;
- (long long)mergeWithLocalEntry:(id)a0 error:(id *)a1;
- (id)printDescription;
- (id)serializeUnderlyingMessage;
- (void)setAuthorizationRecord:(id)a0;
- (BOOL)updateWithLocalEntry:(id)a0 error:(id *)a1;

@end
