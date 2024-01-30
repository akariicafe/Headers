@class NSArray, UIImageView, UIImage, UIView, CNAvatarViewController, NSString;
@protocol CNUIObjectViewControllerDelegate;

@interface CNBadgingAvatarViewController : NSObject <CNUIObjectViewControllerDelegate, CNUIObjectViewController>

@property (retain, nonatomic) CNAvatarViewController *avatarViewController;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *badgeImageView;
@property (copy, nonatomic) NSArray *contacts;
@property (retain, nonatomic) UIImage *badgeImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *view;
@property (weak, nonatomic) id<CNUIObjectViewControllerDelegate> objectViewControllerDelegate;

- (id)initWithSettings:(id)a0;
- (id)descriptorForRequiredKeys;
- (id)init;
- (void).cxx_destruct;
- (id)hostingViewControllerForController:(id)a0;
- (void)setupContainerViewIfNeeded;

@end
