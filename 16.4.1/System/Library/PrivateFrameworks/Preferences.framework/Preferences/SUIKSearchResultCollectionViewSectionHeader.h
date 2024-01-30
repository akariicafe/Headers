@class UIImageView;

@interface SUIKSearchResultCollectionViewSectionHeader : UICollectionReusableView

@property (retain, nonatomic) UIImageView *categoryImageView;

+ (id)reuseIdentifier;

- (void)applyLayoutAttributes:(id)a0;
- (void)_commonInit;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void).cxx_destruct;
- (void)setCategoryImage:(id)a0;

@end
