@class NSUUID, NSDate;

@interface HMHomeInvitationData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (nonatomic) long long invitationState;

+ (id)homeInvitationStateDescription:(long long)a0;

- (void).cxx_destruct;
- (id)initWithInvitationState:(long long)a0 invitationIdentifier:(id)a1 expiryDate:(id)a2;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
