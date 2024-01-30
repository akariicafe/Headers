@class UIImageView, UIView;

@interface ICPaperStyleCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *selectionView;

- (void)setSelected:(BOOL)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)preferredTintColor;
- (void)setupCell;

@end
