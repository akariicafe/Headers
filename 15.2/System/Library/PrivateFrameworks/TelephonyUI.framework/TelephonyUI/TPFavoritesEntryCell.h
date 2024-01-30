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

+ (id)reuseIdentifier;
+ (BOOL)requiresConstraintBasedLayout;
+ (id)imageForActionType:(id)a0;

- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)loadContentView;
- (void)updateConstraintsConstants;
- (void)updateFonts;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)loadContentViewLayoutConstraints;
- (void)handleContentSizeCategoryDidChangeNotification:(id)a0;

@end
