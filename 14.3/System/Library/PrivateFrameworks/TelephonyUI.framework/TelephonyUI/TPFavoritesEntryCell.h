@class UIView, NSString, UIImage, UIImageView, NSLayoutConstraint, UIVisualEffectView, UILabel, CNAvatarViewController;

@interface TPFavoritesEntryCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *contactNameLabel;
@property (retain, nonatomic) UIImageView *transportImageView;
@property (retain, nonatomic) UILabel *transportNameLabel;
@property (retain, nonatomic) UIView *transportView;
@property (retain, nonatomic) UIVisualEffectView *primaryVisualEffectView;
@property (retain, nonatomic) UIVisualEffectView *secondaryVisualEffectView;
@property (retain, nonatomic) NSLayoutConstraint *avatarContentViewHeightLayoutConstraint;
@property (readonly, nonatomic) double avatarContentViewHeightLayoutConstraintConstant;
@property (readonly, nonatomic) double contactNameLabelBaselineLayoutConstraintConstant;
@property (retain, nonatomic) NSLayoutConstraint *contactNameLabelBaselineLayoutConstraint;
@property (readonly, nonatomic) double transportNameLabelBaselineLayoutConstraintConstant;
@property (retain, nonatomic) NSLayoutConstraint *transportNameLabelBaselineLayoutConstraint;
@property (readonly, nonatomic) double transportNameLabelLeadingLayoutConstraintConstant;
@property (retain, nonatomic) NSLayoutConstraint *transportNameLabelLeadingLayoutConstraint;
@property (nonatomic, getter=isContentViewLoaded) BOOL contentViewLoaded;
@property (nonatomic, getter=isContentViewLayoutConstraintsLoaded) BOOL contentViewLayoutConstraintsLoaded;
@property (readonly, nonatomic) UIView *avatarContentView;
@property (retain, nonatomic) UIImage *transportImage;
@property (copy, nonatomic) NSString *actionType;
@property (retain, nonatomic) CNAvatarViewController *avatarViewController;

+ (BOOL)requiresConstraintBasedLayout;
+ (id)imageForActionType:(id)a0;
+ (id)reuseIdentifier;

- (void)updateConstraintsConstants;
- (id)init;
- (void).cxx_destruct;
- (void)updateFonts;
- (void)loadContentView;
- (void)commonInit;
- (void)dealloc;
- (void)updateConstraints;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)loadContentViewLayoutConstraints;
- (void)handleContentSizeCategoryDidChangeNotification:(id)a0;

@end
