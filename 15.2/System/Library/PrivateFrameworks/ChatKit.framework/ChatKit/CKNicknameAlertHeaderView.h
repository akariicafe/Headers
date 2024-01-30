@class IMNickname, CKAvatarView, UILabel;

@interface CKNicknameAlertHeaderView : UIView

@property (retain, nonatomic) IMNickname *nickname;
@property (retain, nonatomic) CKAvatarView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *handleLabel;

- (void)layoutSubviews;
- (id)nameText;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)handleText;
- (void).cxx_destruct;
- (void)_updateAvatarView;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 nickname:(id)a1;

@end
