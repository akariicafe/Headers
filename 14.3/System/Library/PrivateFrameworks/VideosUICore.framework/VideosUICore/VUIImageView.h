@class UIColor, VUIImageProxy, UIImageView, UIImage, CAFilter, UIImageSymbolConfiguration;

@interface VUIImageView : UIControl {
    BOOL _rendersImageAsTemplates;
    UIImage *_image;
    UIImageView *_imageView;
    long long _imageContentMode;
    UIImage *_flatImage;
    UIImage *_flatHighlightImage;
    BOOL _selected;
    double _cornerRadius;
    BOOL _continuousCorners;
    CAFilter *_highlightFilter;
}

@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic, getter=isImageLoaded) BOOL imageLoaded;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (retain, nonatomic) UIColor *placeholderColor;
@property (nonatomic) BOOL shouldScaleToSize;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL imageContainsCornerRadius;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) VUIImageProxy *imageProxy;
@property (copy, nonatomic) id /* block */ dynamicProxyProvider;
@property (retain, nonatomic, setter=_setTintColor:) UIColor *_tintColor;
@property (retain, nonatomic, setter=_setFocusedColor:) UIColor *_focusedColor;
@property (nonatomic, setter=_setEnableEdgeAntialiasingOnSelected:) BOOL _enableEdgeAntialiasingOnSelected;
@property (retain, nonatomic, setter=_setPreferredSymbolConfiguration:) UIImageSymbolConfiguration *preferredSymbolConfiguration;
@property (nonatomic, getter=isSymbolImage) BOOL symbolImage;
@property (nonatomic, getter=isResourceImage) BOOL resourceImage;
@property (nonatomic) struct CGSize { double width; double height; } resourceOrSymbolSize;

- (void)_setImage:(id)a0;
- (void)_setCornerRadius:(double)a0;
- (double)_continuousCornerRadius;
- (double)_cornerRadius;
- (void)_setContinuousCornerRadius:(double)a0;
- (void)_updateTintColor;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)_imageView;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (void)dealloc;
- (void)setContentMode:(long long)a0;
- (long long)contentMode;
- (void)setBackgroundColor:(id)a0;
- (void)_setContentRectInPixels:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)_updateCornerRadius;
- (void)layoutSubviews;
- (id)backgroundColor;
- (void)_updateImageView;
- (void)_resetContentRect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setImageProxy:(id)a0 completion:(id /* block */)a1;
- (void)_loadImage;
- (id)_imageProxyWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)_updateFlatImageWithImage:(id)a0;
- (void)_reloadImageForLayoutDirectionChange;
- (void)vui_setSelected:(BOOL)a0 animated:(BOOL)a1 withAnimationCoordinator:(id)a2;

@end
