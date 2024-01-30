@class CNBadgingAvatarBadgeStyleSettings, CNAvatarAccessoryView, UIImage, CNVisualIdentityAvatarViewController, CNGroupIdentity;

@interface CNGroupAvatarViewController : UIViewController

@property (retain, nonatomic) CNGroupIdentity *group;
@property (retain, nonatomic) CNVisualIdentityAvatarViewController *avatarViewController;
@property (retain, nonatomic) UIImage *badgeImage;
@property (retain, nonatomic) CNBadgingAvatarBadgeStyleSettings *badgeStyleSettings;
@property (nonatomic) BOOL isMarkedForSyndication;
@property (nonatomic) BOOL isDoNotDisturb;
@property (retain, nonatomic) CNAvatarAccessoryView *mediaContextBadge;

+ (id)descriptorForRequiredKeys;
+ (id)log;
+ (unsigned long long)maxContactAvatars;

- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)loadView;
- (BOOL)contactsEqualToContactsFromGroup:(id)a0;
- (void)groupIdentityDidUpdate:(id)a0;
- (id)initWithGroup:(id)a0;
- (id)initWithGroup:(id)a0 avatarViewControllerSettings:(id)a1;

@end
