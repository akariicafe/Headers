@class UIView, CNAvatarViewController, NSArray, CNAvatarAccessoryView, UIImage, NSString, CNBadgingAvatarView, CNBadgingAvatarBadgeStyleSettings;
@protocol CNUIObjectViewControllerDelegate;

@interface CNBadgingAvatarViewController : NSObject <CNUIObjectViewControllerDelegate, CNUIObjectViewController>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) CNBadgingAvatarView *badgingAvatarView;
@property (retain, nonatomic) CNAvatarViewController *avatarViewController;
@property (retain, nonatomic) CNAvatarAccessoryView *mediaContextBadge;
@property (nonatomic) BOOL isMarkedForSyndication;
@property (nonatomic) BOOL isDoNotDisturb;
@property (copy, nonatomic) NSArray *contacts;
@property (retain, nonatomic) UIImage *badgeImage;
@property (retain, nonatomic) CNBadgingAvatarBadgeStyleSettings *badgeStyleSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *view;
@property (weak, nonatomic) id<CNUIObjectViewControllerDelegate> objectViewControllerDelegate;

- (id)descriptorForRequiredKeys;
- (id)initWithSettings:(id)a0;
- (id)hostingViewControllerForController:(id)a0;
- (void)setupContainerViewIfNeeded;
- (void).cxx_destruct;
- (id)init;

@end
