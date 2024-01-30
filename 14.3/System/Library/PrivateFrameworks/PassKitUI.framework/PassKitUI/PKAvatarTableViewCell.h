@class CNContact, CNAvatarView;

@interface PKAvatarTableViewCell : UITableViewCell

@property (readonly, nonatomic) CNAvatarView *avatarView;
@property (retain, nonatomic) CNContact *contact;

- (id)initWithContact:(id)a0 delegate:(id)a1 style:(long long)a2 reuseIdentifier:(id)a3;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
