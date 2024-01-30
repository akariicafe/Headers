@class UIColor, UIImageView, UIImage, TVImageProxy, UIImageSymbolConfiguration, CAFilter;

@interface _TVImageView : UIControl {
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
@property (retain, nonatomic, setter=_setTintColor:) UIColor *_tintColor;
@property (retain, nonatomic, setter=_setDarkTintColor:) UIColor *_darkTintColor;
@property (retain, nonatomic, setter=_setFocusedColor:) UIColor *_focusedColor;
@property (nonatomic, setter=_setEnableEdgeAntialiasingOnSelected:) BOOL _enableEdgeAntialiasingOnSelected;
@property (retain, nonatomic, setter=_setPreferredSymbolConfiguration:) UIImageSymbolConfiguration *preferredSymbolConfiguration;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL imageContainsCornerRadius;
@property (retain, nonatomic) TVImageProxy *imageProxy;
@property (copy, nonatomic) id /* block */ dynamicProxyProvider;

- (id)backgroundColor;
- (long long)contentMode;
- (id)_imageView;
- (void)_updateTintColor;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)_continuousCornerRadius;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)_setImage:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setContentMode:(long long)a0;
- (void)_setCornerRadius:(double)a0;
- (void)willMoveToWindow:(id)a0;
- (void)dealloc;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (double)_cornerRadius;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateCornerRadius;
- (void)traitCollectionDidChange:(id)a0;
- (void)_setContinuousCornerRadius:(double)a0;
- (void).cxx_destruct;
- (void)_updateImageView;
- (void)_resetContentRect;
- (void)_setContentRectInPixels:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forContentSize:(struct CGSize { double x0; double x1; })a1;
- (id)_imageProxyWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)_loadImage;
- (void)_reloadImageForLayoutDirectionChange;
- (void)_updateFlatImageWithImage:(id)a0;
- (void)setImageProxy:(id)a0 completion:(id /* block */)a1;

@end
