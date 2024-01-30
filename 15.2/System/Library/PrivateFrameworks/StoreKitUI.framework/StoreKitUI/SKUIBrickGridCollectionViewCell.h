@class NSString, UIImageView, UIImage, SKUIEditorialCellLayout, UIView;

@interface SKUIBrickGridCollectionViewCell : UICollectionViewCell {
    UIImageView *_brickImageView;
    SKUIEditorialCellLayout *_editorialCellLayout;
    UIView *_editorialContainerView;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (copy, nonatomic) NSString *accessibilityLabel;
@property (retain, nonatomic) UIImage *brickImage;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)setColoringWithColorScheme:(id)a0;
- (void)applyEditorialLayout:(id)a0 orientation:(long long)a1;

@end
