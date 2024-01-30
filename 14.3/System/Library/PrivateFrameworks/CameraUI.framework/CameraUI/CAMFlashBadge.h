@class UIImage, NSString;

@interface CAMFlashBadge : CEKBadgeView

@property (retain, nonatomic) UIImage *_contentImage;
@property (copy, nonatomic) NSString *_contentSizeCategory;

- (struct CGSize { double x0; double x1; })_imageSize;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (id)_maskImage;
- (void)updateToContentSize:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_imageInsets;

@end
