@class NSString, NSDictionary, NSData;

@interface KCSharingParticipant : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *longDescription;
@property (readonly, copy, nonatomic) NSDictionary *JSONObject;
@property (readonly, copy, nonatomic) NSString *participantID;
@property (readonly, copy, nonatomic) NSString *handle;
@property (nonatomic) long long permissionLevel;
@property (readonly, nonatomic) BOOL isCurrentUser;
@property (readonly, nonatomic) BOOL isOwner;
@property (readonly, nonatomic) long long inviteStatus;
@property (readonly, weak, nonatomic) KCSharingParticipant *invitedBy;
@property (readonly, nonatomic) NSData *sharingInvitationData;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithHandle:(id)a0 permissionLevel:(long long)a1;
- (void)_setInvitedBy:(id)a0;
- (id)initWithParticipantID:(id)a0 handle:(id)a1 permissionLevel:(long long)a2 isCurrentUser:(BOOL)a3 inviteStatus:(long long)a4 sharingInvitationData:(id)a5;

@end
