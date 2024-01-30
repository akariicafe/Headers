@class CNAvatarViewController, UIView;

@interface MUIAvatarViewController : NSObject

@property (retain, nonatomic) CNAvatarViewController *avatarViewController;
@property (readonly, nonatomic) UIView *view;

+ (id)avatarControllerWithContacts:(id)a0;

- (void).cxx_destruct;
- (void)updateContacts:(id)a0;
- (id)initWithContacts:(id)a0;

@end
