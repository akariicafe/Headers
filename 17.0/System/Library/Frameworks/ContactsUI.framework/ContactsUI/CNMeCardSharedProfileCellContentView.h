@class UIStackView, NSArray, CNContact, UILabel, CNAvatarView;

@interface CNMeCardSharedProfileCellContentView : UIView

@property (retain, nonatomic) CNAvatarView *avatarView;
@property (retain, nonatomic) UIStackView *labelStackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) CNContact *meContact;

+ (id)log;

- (id)init;
- (void)updateView;
- (void)setupConstraints;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)setUpAvatarView;
- (id)displayStringForSharingAudience;
- (void)setAvatarHidden:(BOOL)a0;
- (void)setLabelTextAttributes:(id)a0;
- (void)setUpLabels;
- (void)setupViews;
- (void)updateAvatarViewContact;

@end
