@class CKDeviceToDeviceShareInvitationToken, NSString, CKRecordID, NSData, CKUserIdentity;

@interface CKShareParticipant : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL wantsNewInvitationToken;
@property (nonatomic) BOOL isCurrentUser;
@property (nonatomic) BOOL isOrgAdminUser;
@property (nonatomic) long long mutableInvitationTokenStatus;
@property (retain, nonatomic) CKRecordID *shareRecordID;
@property (retain, nonatomic) NSString *inviterID;
@property (nonatomic) long long originalParticipantRole;
@property (nonatomic) long long originalAcceptanceStatus;
@property (nonatomic) long long originalPermission;
@property (nonatomic) BOOL createdInProcess;
@property (nonatomic) BOOL acceptedInProcess;
@property (retain, nonatomic) NSData *protectionInfo;
@property (retain, nonatomic) NSData *protectionInfoPublicKey;
@property (retain, nonatomic) NSData *encryptedPersonalInfo;
@property (copy, nonatomic) NSString *participantID;
@property (nonatomic) long long acceptanceStatus;
@property (copy, nonatomic) CKUserIdentity *userIdentity;
@property (copy, nonatomic) CKDeviceToDeviceShareInvitationToken *invitationToken;
@property (nonatomic) long long role;
@property (nonatomic) long long type;
@property (nonatomic) long long permission;

- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)_initWithUserIdentity:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_stripPersonalInfo;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (long long)invitationTokenStatus;
- (id)unifiedContactsInStore:(id)a0 keysToFetch:(id)a1 error:(id *)a2;
- (id)description;
- (id)_init;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
