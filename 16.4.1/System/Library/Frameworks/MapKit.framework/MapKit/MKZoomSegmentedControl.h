@class CALayer, CABackdropLayer;

@interface MKZoomSegmentedControl : UIView {
    struct CGImage { } *_backgroundUnselectedImage;
    struct CGImage { } *_backgroundMinusSelectedImage;
    struct CGImage { } *_backgroundPlusSelectedImage;
    struct CGImage { } *_maskImage;
    CALayer *_displayLayer;
    CABackdropLayer *_blurLayer;
    CALayer *_maskLayer;
}

- (void)updateAppearance;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_unloadResources;
- (void)minusPressed:(id)a0;
- (void)plusPressed:(id)a0;
- (void)touchEnded:(id)a0;

@end
