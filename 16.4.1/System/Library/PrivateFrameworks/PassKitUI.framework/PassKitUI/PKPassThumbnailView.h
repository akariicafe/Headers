@class UIImageView, PKPassView, UIView, UIImage, PKPass;

@interface PKPassThumbnailView : UIView {
    unsigned int _options;
    BOOL _needsRasterization;
    UIView *_maskView;
    PKPassView *_passView;
    UIImageView *_pocketOverlay;
    BOOL _preferMinimumHeight;
    BOOL _modallyPresented;
    PKPass *_pass;
    unsigned long long _suppressedContent;
    UIImage *_foregroundPocketOverlayImage;
    double _shadowVisibility;
}

- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;

@end
