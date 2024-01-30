@class HMUser;

@interface HFAccessoryInvitationAccessoryProfileItemProvider : HFAccessoryProfileItemProvider

@property (readonly, nonatomic) HMUser *user;

- (id)initWithHome:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)invalidationReasons;
- (id)initWithHome:(id)a0 user:(id)a1;

@end
