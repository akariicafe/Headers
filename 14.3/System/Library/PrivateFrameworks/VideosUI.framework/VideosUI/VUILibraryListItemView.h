@class UIImageView, VUILabel, UIImage;

@interface VUILibraryListItemView : UIView

@property (retain, nonatomic) UIImageView *listImageView;
@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) UIImage *itemImage;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_layoutWithSize:(struct CGSize { double x0; double x1; })a0 metricsOnly:(BOOL)a1;

@end
