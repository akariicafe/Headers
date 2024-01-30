@class UIImageView;

@interface SUIKSearchResultCollectionViewSectionHeader : UICollectionReusableView

@property (retain, nonatomic) UIImageView *categoryImageView;

+ (id)reuseIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setCategoryImage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void)_commonInit;
- (void)applyLayoutAttributes:(id)a0;

@end
