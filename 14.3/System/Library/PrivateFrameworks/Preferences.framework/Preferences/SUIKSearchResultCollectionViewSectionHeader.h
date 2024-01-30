@class UIImageView;

@interface SUIKSearchResultCollectionViewSectionHeader : UICollectionReusableView

@property (retain, nonatomic) UIImageView *categoryImageView;

+ (id)reuseIdentifier;

- (void)_commonInit;
- (id)init;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setCategoryImage:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)applyLayoutAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
