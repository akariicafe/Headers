@class NSArray, UIImageView, EKUILabeledAvatarView, UILabel, UIView, UIActivityIndicatorView;

@interface EKUIInviteesViewInviteesCell : UITableViewCell

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

+ (id)_commentLabelFont;
+ (id)_nameLabelFont;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateConstraints;
- (void).cxx_destruct;
- (id)_statusImageViewSymbolConfiguration;
- (void)updateCommonElements:(id)a0 statusImage:(id)a1 conflict:(BOOL)a2;
- (void)updateWithParticipantForSorting:(id)a0;
- (void)updateWithParticipantForSorting:(id)a0 availabilityType:(long long)a1 showSpinner:(BOOL)a2 animated:(BOOL)a3;

@end
