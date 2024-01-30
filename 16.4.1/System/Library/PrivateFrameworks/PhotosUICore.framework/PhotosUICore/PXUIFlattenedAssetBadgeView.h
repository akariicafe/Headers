@class UIImage;

@interface PXUIFlattenedAssetBadgeView : PXUIAssetBadgeView {
    UIImage *_backgroundImage;
}

- (void)setNeedsLayout;
- (BOOL)isOpaque;
- (void)addSubview:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_setBackgroundImage:(id)a0;

@end
