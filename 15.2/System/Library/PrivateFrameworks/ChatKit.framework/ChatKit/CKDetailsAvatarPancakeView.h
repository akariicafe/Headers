@class CKAvatarView, UIView;

@interface CKDetailsAvatarPancakeView : UIView

@property (retain, nonatomic) CKAvatarView *topAvatar;
@property (retain, nonatomic) CKAvatarView *middleAvatar;
@property (retain, nonatomic) CKAvatarView *bottomAvatar;
@property (retain, nonatomic) UIView *topAvatarCutOutView;
@property (retain, nonatomic) UIView *bottomAvatarCutOutView;

- (void)addConstraints;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 avatarViews:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)createAvatarCutOutView;

@end
