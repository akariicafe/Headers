@class HMUser;

@interface HFAccessoryInvitationAccessoryProfileItemProvider : HFAccessoryProfileItemProvider

@property (readonly, nonatomic) HMUser *user;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (id)initWithHome:(id)a0 user:(id)a1;
- (id)invalidationReasons;

@end
