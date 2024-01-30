@class UILabel, CNAvatarViewController, CNContact;

@interface CNStarkContactNameView : UIView

@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) UILabel *nameLabel;
@property (readonly, nonatomic) CNAvatarViewController *avatarViewController;

- (void)setupConstraints;
- (void).cxx_destruct;
- (void)setupNameLabel;
- (id)initWithName:(id)a0;
- (void)setupAvatar;

@end
