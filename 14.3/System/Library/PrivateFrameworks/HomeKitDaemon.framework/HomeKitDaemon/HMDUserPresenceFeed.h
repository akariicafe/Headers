@class HMUserPresenceCompute, HMDUser, HMDUserPresenceRegion, HMDUserPresenceUpdateReason, HMUserPresenceAuthorization, HMDDevice;

@interface HMDUserPresenceFeed : HMFObject

@property (readonly, weak, nonatomic) HMDUser *user;
@property (readonly, weak, nonatomic) HMDDevice *residentDevice;
@property (readonly, nonatomic) HMUserPresenceAuthorization *presenceAuthStatus;
@property (readonly, nonatomic) HMUserPresenceCompute *presenceComputeStatus;
@property (readonly, nonatomic) HMDUserPresenceRegion *presenceRegion;
@property (readonly, nonatomic) HMDUserPresenceUpdateReason *reason;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithUser:(id)a0 residentDevice:(id)a1 presenceAuthStatus:(id)a2 presenceComputeStatus:(id)a3 presenceRegion:(id)a4 reason:(id)a5;

@end
