@class NSUUID, NSString;

@interface DAKeySharingInvitationData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *sharingSessionIdentifier;
@property (readonly, nonatomic) NSString *invitationIdentifier;
@property (readonly, nonatomic) NSString *friendKeyIdentifier;
@property (readonly, nonatomic) long long sharingTargetType;
@property (readonly, nonatomic) long long invitationState;
@property (readonly, nonatomic) NSString *passwordPiece;
@property (readonly, nonatomic) NSString *vehicleEnteredPasscode;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSessionUUID:(id)a0 invitationIdentifier:(id)a1 friendKeyIdentifier:(id)a2 sharingTarget:(long long)a3 state:(long long)a4 vehicleEnteredPasscode:(id)a5;

@end
