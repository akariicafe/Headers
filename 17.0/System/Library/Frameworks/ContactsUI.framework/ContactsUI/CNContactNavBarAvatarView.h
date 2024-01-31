@class CNContact, CNAvatarView;

@interface CNContactNavBarAvatarView : UIView

@property (retain, nonatomic) CNAvatarView *avatarView;
@property (nonatomic) BOOL showing;
@property (retain, nonatomic) CNContact *contact;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setShowing:(BOOL)a0 animated:(BOOL)a1;

@end
