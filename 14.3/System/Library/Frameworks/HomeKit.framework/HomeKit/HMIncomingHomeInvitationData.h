@class NSString, NSUUID;

@interface HMIncomingHomeInvitationData : HMHomeInvitationData

@property (copy, nonatomic) NSString *inviterName;
@property (readonly, nonatomic) NSString *inviterUserID;
@property (readonly, copy, nonatomic) NSString *homeName;
@property (readonly, copy, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSUUID *inviterUUID;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithInviterUserID:(id)a0 invitationIdentifier:(id)a1 inviterName:(id)a2 invitationState:(long long)a3 homeName:(id)a4 homeUUID:(id)a5 expiryDate:(id)a6;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
