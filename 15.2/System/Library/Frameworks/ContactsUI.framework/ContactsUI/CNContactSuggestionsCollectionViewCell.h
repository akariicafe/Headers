@class NSString, UIImageView, UIImage, UILabel;

@interface CNContactSuggestionsCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIImageView *checkImageView;
@property (retain, nonatomic) UIImageView *checkImageBackgroundView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *displayString;

+ (id)cellIdentifier;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)useAccessibleLayout;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)setupConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForReuse;
- (void)setCheckMarkHidden:(BOOL)a0;
- (void)setUpCheckMarkConstraints;

@end
