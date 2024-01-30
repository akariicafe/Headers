@class HMUser, HMHome;

@interface HUCameraAccessLevelOptionItem : HFItem

@property (readonly, nonatomic) HMUser *user;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) unsigned long long accessLevel;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithUser:(id)a0 home:(id)a1 accessLevel:(unsigned long long)a2;

@end
