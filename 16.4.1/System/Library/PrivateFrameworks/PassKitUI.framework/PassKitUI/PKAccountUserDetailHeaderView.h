@class CNContactInlineActionsViewController, PKAvatarHeaderView, CNContact;

@interface PKAccountUserDetailHeaderView : UIView {
    PKAvatarHeaderView *_avatarHeaderView;
    CNContactInlineActionsViewController *_actionsViewController;
}

@property (retain, nonatomic) CNContact *contactForDisplay;
@property (retain, nonatomic) CNContact *contactForActions;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
