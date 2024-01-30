@class UIView, _TVImageView, NSString, TVMonogramViewConfiguration, TVImageProxy, _TVMonogramDescription, UIImage;

@interface _TVMonogramView : _UIFloatingContentView <_UIFloatingContentViewDelegate, TVAuxiliaryViewSelecting> {
    UIView *_placeholderView;
    UIView *_unfocusedShadowView;
    UIView *_focusedShadowView;
    BOOL _isSelected;
}

@property (copy, nonatomic) id /* block */ pressCompletionBlock;
@property (retain, nonatomic) _TVImageView *imageView;
@property (retain, nonatomic) TVImageProxy *imageProxy;
@property (readonly, nonatomic) TVMonogramViewConfiguration *configuration;
@property (retain, nonatomic) _TVMonogramDescription *monogramDescription;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (nonatomic) double unfocusedImageAlpha;
@property (retain, nonatomic) UIView *overlayView;
@property (nonatomic, getter=isFocusedStateEnabled) BOOL focusedStateEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)floatingContentView:(id)a0 isTransitioningFromState:(unsigned long long)a1 toState:(unsigned long long)a2;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)floatingContentView:(id)a0 didFinishTransitioningToState:(unsigned long long)a1;
- (void)setPressed:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1 withAnimationCoordinator:(id)a2;
- (void)_updatePlaceholerView;
- (void)_loadWithMonogramDescription:(id)a0 imageProxy:(id)a1;
- (void)_updateUnfocusedShadowFrameAndLayerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateAppearanceForSelectionStateWithCoordinator:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })selectionMarginsForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_updateFocusedShadowFrameAndLayerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
