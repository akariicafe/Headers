@class UIButton, CNContact, UIActivityIndicatorView, HMIncomingHomeInvitation, UIView, UILabel, CNAvatarView;
@protocol HUIncomingInvitationTableViewCellDelegate;

@interface HUIncomingInvitationTableViewCell : UITableViewCell

@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) CNAvatarView *avatarView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *homeNameLabel;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UIButton *declineButton;
@property (retain, nonatomic) UIButton *acceptButton;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (retain, nonatomic) HMIncomingHomeInvitation *invitation;
@property (nonatomic) BOOL showSpinner;
@property (weak, nonatomic) id<HUIncomingInvitationTableViewCellDelegate> delegate;

+ (id)_formatDate:(id)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)declineButtonPressed:(id)a0;
- (void)acceptButtonPressed:(id)a0;
- (void)_showInvitationSpinner;
- (void)_hideInvitationSpinner;

@end
