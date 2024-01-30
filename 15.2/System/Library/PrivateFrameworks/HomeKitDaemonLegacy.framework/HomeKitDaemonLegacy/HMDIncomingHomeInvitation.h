@class NSString, NSDictionary, NSUUID, HMDAccount, HMFPairingIdentity;

@interface HMDIncomingHomeInvitation : HMDHomeInvitation

@property (readonly, nonatomic) NSDictionary *bulletinContext;
@property (readonly, copy, nonatomic) NSString *homeName;
@property (readonly, copy, nonatomic) NSUUID *homeUUID;
@property (readonly) HMDAccount *inviterAccount;
@property (readonly, copy) HMFPairingIdentity *inviterIdentity;
@property (readonly, copy, nonatomic) NSString *inviterUserID;
@property (readonly, copy, nonatomic) NSString *inviterMergeID;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)refreshDisplayName;
- (id)describeWithFormat;
- (id)initWithInviterAccount:(id)a0 invitationIdentifier:(id)a1 invitationState:(long long)a2 homeName:(id)a3 homeUUID:(id)a4 inviterIdentity:(id)a5 expiryDate:(id)a6;
- (id)initWithInviterAccount:(id)a0 invitationIdentifier:(id)a1 invitationState:(long long)a2 homeName:(id)a3 homeUUID:(id)a4 inviterIdentity:(id)a5 inviterMergeID:(id)a6 expiryDate:(id)a7;

@end
