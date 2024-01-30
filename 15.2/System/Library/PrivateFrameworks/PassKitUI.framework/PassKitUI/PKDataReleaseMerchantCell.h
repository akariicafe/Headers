@class NSString, UIImageView, UILabel, UIView;

@interface PKDataReleaseMerchantCell : UITableViewHeaderFooterView {
    UILabel *_titleLabel;
    BOOL _isTemplateLayout;
    UIImageView *_imageView;
    UIView *_imageBackgroundView;
    BOOL _strokeImage;
}

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL useShadows;

- (void)layoutSubviews;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)setImage:(id)a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_setupImageView;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)setStrokeImage:(BOOL)a0;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateImageViewDynamicColors;

@end
