@class NSString, UIImage, CNAvatarAccessoryView, CALayer, UIImageView, CNGroupIdentity, CNSharedProfileStateOracle, CNVisualIdentityAvatarViewController, CNBadgingAvatarBadgeStyleSettings;

@interface CNGroupAvatarViewController : UIViewController <CNSharedProfileAnimatingAvatarView>

@property (retain, nonatomic) CNGroupIdentity *group;
@property (retain, nonatomic) CNVisualIdentityAvatarViewController *avatarViewController;
@property (nonatomic) BOOL isPerformingTransition;
@property (retain, nonatomic) UIImage *badgeImage;
@property (retain, nonatomic) CNBadgingAvatarBadgeStyleSettings *badgeStyleSettings;
@property (nonatomic) BOOL isMarkedForSyndication;
@property (nonatomic) BOOL isDoNotDisturb;
@property (retain, nonatomic) CNAvatarAccessoryView *mediaContextBadge;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } primaryAvatarSize;
@property (retain, nonatomic) CNSharedProfileStateOracle *sharedProfileStateOracle;
@property (readonly, nonatomic) CALayer *sourceAvatarLayer;
@property (readonly, nonatomic) UIImageView *destinationAvatarImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;
+ (id)log;
+ (unsigned long long)maxContactAvatars;

- (void)performTransitionAnimationWithStartHandler:(id /* block */)a0 completion:(id /* block */)a1;
- (void)performTransitionAnimationWithCompletion:(id /* block */)a0;
- (void)loadView;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)initWithGroup:(id)a0 avatarLayoutType:(unsigned long long)a1;
- (id)avatarLayers;
- (BOOL)contactsEqualToContactsFromGroup:(id)a0;
- (void)groupIdentityDidUpdate:(id)a0;
- (id)initWithGroup:(id)a0;
- (id)initWithGroup:(id)a0 avatarViewControllerSettings:(id)a1;
- (id)initWithGroup:(id)a0 avatarViewControllerSettings:(id)a1 avatarLayoutType:(unsigned long long)a2;

@end
