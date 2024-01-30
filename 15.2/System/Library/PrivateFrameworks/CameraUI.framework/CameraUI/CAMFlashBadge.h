@class UIImage;

@interface CAMFlashBadge : CEKBadgeView

@property (retain, nonatomic) UIImage *_contentImage;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })_imageSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)_maskImage;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_imageInsets;

@end
