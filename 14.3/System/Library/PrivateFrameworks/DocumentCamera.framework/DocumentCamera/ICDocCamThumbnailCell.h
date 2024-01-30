@class UIImageView;

@interface ICDocCamThumbnailCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;

- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)accessibilityLabel;
- (void)applyLayoutAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityHint;
- (id)indexStringForAccessibility;
- (id)parentCollectionView;

@end
