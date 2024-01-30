@class IMNickname, CKAvatarView, UILabel;

@interface CKNicknameAlertHeaderView : UIView

@property (retain, nonatomic) IMNickname *nickname;
@property (retain, nonatomic) CKAvatarView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *handleLabel;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setupViews;
- (void)_updateAvatarView;
- (id)handleText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 nickname:(id)a1;
- (id)nameText;

@end
