@class CKLabel, UIImageView, NSMutableArray;

@interface CKAvatarTitleCollectionReusableView : UICollectionReusableView

@property (retain, nonatomic) CKLabel *titleLabel;
@property (retain, nonatomic) UIImageView *chevronImageView;
@property (retain, nonatomic) UIImageView *statusIndicatorImageView;
@property (retain, nonatomic) NSMutableArray *pendingTitles;
@property (nonatomic) long long style;
@property (nonatomic) long long avatarTitleAccessoryImageType;
@property (nonatomic, getter=isAvatarPickerActive) BOOL avatarPickerActive;
@property (nonatomic) long long statusIndicatorType;
@property (nonatomic, getter=isChevronHidden) BOOL chevronHidden;

+ (id)supplementaryViewKind;
+ (id)reuseIdentifier;

- (BOOL)isLTR;
- (void).cxx_destruct;
- (void)_rotateChevronImageView;
- (void)_animateFromQueue;
- (void)setTitle:(id)a0 animated:(BOOL)a1;
- (void)configureWithTitle:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
