@class NSString, UIImageView, UIImage, UILabel;

@interface CNContactSuggestionsCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIImageView *checkImageView;
@property (retain, nonatomic) UIImageView *checkImageBackgroundView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *displayString;

+ (id)cellIdentifier;

- (void)setSelected:(BOOL)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupConstraints;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)setCheckMarkHidden:(BOOL)a0;
- (void)setUpCheckMarkConstraints;
- (BOOL)useAccessibleLayout;

@end
