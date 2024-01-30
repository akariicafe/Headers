@class CNVisualIdentityAvatarViewController, CNGroupIdentity;

@interface CNGroupAvatarViewController : UIViewController

@property (retain, nonatomic) CNGroupIdentity *group;
@property (retain, nonatomic) CNVisualIdentityAvatarViewController *avatarViewController;

+ (id)descriptorForRequiredKeys;
+ (id)log;
+ (unsigned long long)maxContactAvatars;

- (id)initWithGroup:(id)a0;
- (void).cxx_destruct;
- (id)initWithGroup:(id)a0 avatarViewControllerSettings:(id)a1;
- (void)groupIdentityDidUpdate:(id)a0;

@end
