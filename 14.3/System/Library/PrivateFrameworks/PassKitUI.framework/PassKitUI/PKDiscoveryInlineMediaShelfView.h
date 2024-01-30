@class PKDiscoveryMedia, UIImageView, UIView, PKDiscoveryInlineMediaCaptionView, PKDiscoveryInlineMediaShelf;

@interface PKDiscoveryInlineMediaShelfView : PKDiscoveryShelfView {
    PKDiscoveryInlineMediaShelf *_shelf;
    PKDiscoveryMedia *_media;
    UIView *_imageContainerView;
    UIImageView *_imageView;
    PKDiscoveryInlineMediaCaptionView *_captionView;
    BOOL _isInline;
    double _leadingSpace;
}

- (void).cxx_destruct;
- (void)setContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)initWithShelf:(id)a0;
- (void)layoutSubviews;
- (void)_loadImageFromBundle;
- (void)_loadImageFromFileURL;
- (void)setImage:(id)a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
