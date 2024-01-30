@class NSString, NSMutableArray, NSData;

@interface HDCloudSyncCodableSharedSummaryParticipantRecord : PBCodable <NSCopying> {
    struct { unsigned char direction : 1; unsigned char entryAcceptanceDate : 1; unsigned char entryInvitationDate : 1; unsigned char entryModificationDate : 1; unsigned char notificationStatus : 1; unsigned char status : 1; unsigned char type : 1; unsigned char userWheelchairMode : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) BOOL hasContactIdentifier;
@property (retain, nonatomic) NSString *contactIdentifier;
@property (readonly, nonatomic) BOOL hasAuthorizationRecordIdentifier;
@property (retain, nonatomic) NSString *authorizationRecordIdentifier;
@property (readonly, nonatomic) BOOL hasCloudKitIdentifier;
@property (retain, nonatomic) NSString *cloudKitIdentifier;
@property (readonly, nonatomic) BOOL hasInvitationUUID;
@property (retain, nonatomic) NSString *invitationUUID;
@property (readonly, nonatomic) BOOL hasFirstName;
@property (retain, nonatomic) NSString *firstName;
@property (readonly, nonatomic) BOOL hasLastName;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSMutableArray *allContactIdentifiers;
@property (nonatomic) BOOL hasType;
@property (nonatomic) long long type;
@property (nonatomic) BOOL hasDirection;
@property (nonatomic) long long direction;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) long long status;
@property (nonatomic) BOOL hasNotificationStatus;
@property (nonatomic) long long notificationStatus;
@property (nonatomic) BOOL hasEntryModificationDate;
@property (nonatomic) double entryModificationDate;
@property (nonatomic) BOOL hasEntryInvitationDate;
@property (nonatomic) double entryInvitationDate;
@property (nonatomic) BOOL hasEntryAcceptanceDate;
@property (nonatomic) double entryAcceptanceDate;
@property (readonly, nonatomic) BOOL hasOwnerParticipant;
@property (retain, nonatomic) NSData *ownerParticipant;
@property (readonly, nonatomic) BOOL hasSetupMetadata;
@property (retain, nonatomic) NSData *setupMetadata;
@property (nonatomic) BOOL hasUserWheelchairMode;
@property (nonatomic) long long userWheelchairMode;

+ (Class)allContactIdentifiersType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addAllContactIdentifiers:(id)a0;
- (id)allContactIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)allContactIdentifiersCount;
- (void)clearAllContactIdentifiers;

@end
