@class PKDiscoveryMedia, UIView, PKDiscoveryInlineMediaCaptionView, PKDiscoveryInlineMediaShelf;

@interface PKDiscoveryInlineCaptionedMediaShelfView : PKDiscoveryShelfView {
    PKDiscoveryInlineMediaShelf *_shelf;
    UIView *_mediaContainerView;
    PKDiscoveryInlineMediaCaptionView *_captionView;
    BOOL _isInline;
    double _leadingSpace;
    UIView *_mediaView;
    PKDiscoveryMedia *_media;
}

- (void)layoutSubviews;
- (void)setContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithShelf:(id)a0 mediaView:(id)a1;

@end
