@class UIStackView, NSString, UIImageView, UILayoutGuide, UILabel, NSLayoutConstraint;

@interface PXSearchSuggestionCell : _UICollectionViewListCell

@property (class, readonly, copy, nonatomic) NSString *reuseIdentifier;

@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *countLabel;
@property (readonly, nonatomic) UIStackView *textStackView;
@property (readonly, nonatomic) UILayoutGuide *imageViewLayoutGuide;
@property (readonly, nonatomic) NSLayoutConstraint *imageViewLayoutGuideWidthConstraint;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (double)imageViewLayoutGuideWidth;
- (void)setSearchSuggestion:(id)a0;

@end
