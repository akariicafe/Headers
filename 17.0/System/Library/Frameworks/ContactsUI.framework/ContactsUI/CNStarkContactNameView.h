@class UILabel, CNAvatarViewController, CNContact;

@interface CNStarkContactNameView : UIView

@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) UILabel *nameLabel;
@property (readonly, nonatomic) CNAvatarViewController *avatarViewController;

- (void)setupConstraints;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (void)setupAvatar;
- (void)setupNameLabel;

@end
