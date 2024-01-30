@class HMDUserPresenceUpdateReason, HMDUser, HMDUserPresenceRegion, HMUserPresenceAuthorization, HMUserPresenceCompute;

@interface HMDUserPresenceFeed : HMFObject

@property (readonly, weak, nonatomic) HMDUser *user;
@property (readonly, nonatomic) HMUserPresenceAuthorization *presenceAuthStatus;
@property (readonly, nonatomic) HMUserPresenceCompute *presenceComputeStatus;
@property (readonly, nonatomic) HMDUserPresenceRegion *presenceRegion;
@property (readonly, nonatomic) HMDUserPresenceUpdateReason *reason;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithUser:(id)a0 presenceAuthStatus:(id)a1 presenceComputeStatus:(id)a2 presenceRegion:(id)a3 reason:(id)a4;

@end
