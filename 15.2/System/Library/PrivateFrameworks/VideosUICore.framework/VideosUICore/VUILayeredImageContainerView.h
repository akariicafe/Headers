@class VUILayeredImageProxy, NSString, UIImage, UIView, _UIStackedImageContainerLayer;

@interface VUILayeredImageContainerView : _UIStackedImageContainerView <VUIAuxiliaryViewSelecting>

@property (nonatomic, getter=isLayeredImageLoaded) BOOL layeredImageLoaded;
@property (retain, nonatomic) UIImage *loadedImage;
@property (retain, nonatomic) UIView *overlayView;
@property (nonatomic) BOOL fixedFrameOverlayView;
@property (retain, nonatomic) VUILayeredImageProxy *layeredImageProxy;
@property (readonly, nonatomic) _UIStackedImageContainerLayer *layeredImageContainerLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setPressed:(BOOL)a0;
- (void)setPressed:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (void)setPressed:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1 focusAnimationCoordinator:(id)a2;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1 withAnimationCoordinator:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })selectionMarginsForSize:(struct CGSize { double x0; double x1; })a0;
- (void)setOverlayView:(id)a0 masked:(BOOL)a1;
- (void)_loadLayeredImage;
- (id)initWithLayeredImageProxy:(id)a0;

@end
