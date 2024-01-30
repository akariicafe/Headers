@class CKDeviceToDeviceShareInvitationToken, NSString, CKRecordID, NSData, CKUserIdentity;

@interface CKShareParticipant : NSObject <CKPropertiesDescription, NSSecureCoding, NSCopying>

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
@property (nonatomic) BOOL isAnonymousInvitedParticipant;
@property (nonatomic) BOOL forceSendPublicKeyForAnonymousParticipants;
@property (copy, nonatomic) NSString *participantID;
@property (nonatomic) long long acceptanceStatus;
@property (copy, nonatomic) CKUserIdentity *userIdentity;
@property (copy, nonatomic) CKDeviceToDeviceShareInvitationToken *invitationToken;
@property (nonatomic) long long role;
@property (nonatomic) long long type;
@property (nonatomic) long long permission;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_stripPersonalInfo;
- (long long)invitationTokenStatus;
- (id)unifiedContactsInStore:(id)a0 keysToFetch:(id)a1 error:(id *)a2;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)CKDescribePropertiesUsing:(id)a0;
- (id)_init;
- (id)_initWithUserIdentity:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)redactedDescription;

@end
