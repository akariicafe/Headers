@class NSString, NSArray, UIImageView, EKUILabeledAvatarView, UILabel, UIView, UIActivityIndicatorView;

@interface EKUIInviteesViewInviteesCell : UITableViewCell <EKUILabeledAvatarViewDelegate>

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *commentLabel;
@property (retain, nonatomic) UILabel *optionalInviteeLabel;
@property (retain, nonatomic) UIImageView *statusImageView;
@property (retain, nonatomic) EKUILabeledAvatarView *contactAvatarView;
@property (retain, nonatomic) UIView *textContainerView;
@property (retain, nonatomic) NSArray *persistentConstraints;
@property (retain, nonatomic) NSArray *removableConstraints;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (nonatomic) BOOL showSpinner;
@property BOOL hideStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_nameLabelFont;
+ (id)_commentLabelFont;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)updateWithParticipantForSorting:(id)a0;
- (id)_statusImageViewSymbolConfiguration;
- (void)updateCommonElements:(id)a0 statusImage:(id)a1;
- (void)avatarViewDidTapped:(id)a0;
- (void)updateWithParticipantForSorting:(id)a0 availabilityType:(long long)a1 showSpinner:(BOOL)a2 animated:(BOOL)a3;

@end
