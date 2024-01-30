@class CKDPContactInformation, CKDPProtectionInfo, NSData, CKDPDate, CKDPIdentifier;

@interface CKDPParticipant : PBCodable <NSCopying> {
    struct { unsigned char acceptTimestamp : 1; unsigned char keyHealth : 1; unsigned char outOfNetworkKeyType : 1; unsigned char participantType : 1; unsigned char permission : 1; unsigned char publicKeyVersion : 1; unsigned char state : 1; unsigned char acceptedInProcess : 1; unsigned char createdInProcess : 1; unsigned char isAnonymousInvitedParticipant : 1; unsigned char isInNetwork : 1; unsigned char isOrgUser : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasParticipantId;
@property (retain, nonatomic) CKDPIdentifier *participantId;
@property (readonly, nonatomic) BOOL hasUserId;
@property (retain, nonatomic) CKDPIdentifier *userId;
@property (readonly, nonatomic) BOOL hasContactInformation;
@property (retain, nonatomic) CKDPContactInformation *contactInformation;
@property (nonatomic) BOOL hasState;
@property (nonatomic) int state;
@property (nonatomic) BOOL hasParticipantType;
@property (nonatomic) int participantType;
@property (nonatomic) BOOL hasPermission;
@property (nonatomic) int permission;
@property (readonly, nonatomic) BOOL hasInviterId;
@property (retain, nonatomic) CKDPIdentifier *inviterId;
@property (nonatomic) BOOL hasCreatedInProcess;
@property (nonatomic) BOOL createdInProcess;
@property (readonly, nonatomic) BOOL hasPublicKey;
@property (retain, nonatomic) CKDPProtectionInfo *publicKey;
@property (nonatomic) BOOL hasAcceptTimestamp;
@property (nonatomic) long long acceptTimestamp;
@property (readonly, nonatomic) BOOL hasProtectionInfo;
@property (retain, nonatomic) CKDPProtectionInfo *protectionInfo;
@property (readonly, nonatomic) BOOL hasOutOfNetworkPrivateKey;
@property (retain, nonatomic) NSData *outOfNetworkPrivateKey;
@property (nonatomic) BOOL hasOutOfNetworkKeyType;
@property (nonatomic) int outOfNetworkKeyType;
@property (nonatomic) BOOL hasPublicKeyVersion;
@property (nonatomic) int publicKeyVersion;
@property (nonatomic) BOOL hasAcceptedInProcess;
@property (nonatomic) BOOL acceptedInProcess;
@property (nonatomic) BOOL hasIsInNetwork;
@property (nonatomic) BOOL isInNetwork;
@property (readonly, nonatomic) BOOL hasAcceptedTimestampDate;
@property (retain, nonatomic) CKDPDate *acceptedTimestampDate;
@property (nonatomic) BOOL hasIsOrgUser;
@property (nonatomic) BOOL isOrgUser;
@property (readonly, nonatomic) BOOL hasProtectionInfoPublicKey;
@property (retain, nonatomic) NSData *protectionInfoPublicKey;
@property (nonatomic) BOOL hasKeyHealth;
@property (nonatomic) int keyHealth;
@property (readonly, nonatomic) BOOL hasInviteTimestampDate;
@property (retain, nonatomic) CKDPDate *inviteTimestampDate;
@property (nonatomic) BOOL hasIsAnonymousInvitedParticipant;
@property (nonatomic) BOOL isAnonymousInvitedParticipant;

- (id)stateAsString:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)permissionAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsPermission:(id)a0;
- (int)StringAsState:(id)a0;
- (int)StringAsKeyHealth:(id)a0;
- (int)StringAsParticipantType:(id)a0;
- (id)_participantTypeCKLogValue;
- (id)_permissionCKLogValue;
- (id)_stateCKLogValue;
- (id)keyHealthAsString:(int)a0;
- (id)participantTypeAsString:(int)a0;

@end
