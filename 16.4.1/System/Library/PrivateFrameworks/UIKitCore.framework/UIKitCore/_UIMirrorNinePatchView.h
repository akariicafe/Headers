@class UIImage, UIImageView;

@interface _UIMirrorNinePatchView : UIView {
    UIImage *_originalImage;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _insets;
    UIImageView *_imageViews[4];
}

- (void)_dynamicUserInterfaceTraitDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_updateResizableImageAndViews;
- (void)setImage:(id)a0 withResizableCornerSize:(struct CGSize { double x0; double x1; })a1;

@end
