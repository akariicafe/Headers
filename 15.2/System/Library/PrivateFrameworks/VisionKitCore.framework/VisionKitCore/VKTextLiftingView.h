@class VKImageAnalysisInteraction, UIImageView, UIBezierPath, UIVisualEffectView, UIImage;
@protocol VKTextLiftingViewDelegate;

@interface VKTextLiftingView : UIView

@property (readonly, nonatomic) UIImageView *_imageView;
@property (readonly, nonatomic) UIBezierPath *_rotatedCutoutPath;
@property (readonly, nonatomic) UIVisualEffectView *_highlightView;
@property (nonatomic, setter=_hasLifted:) BOOL _hasLifted;
@property (nonatomic, setter=_hasFadedOut:) BOOL _hasFadedOut;
@property (nonatomic, setter=_setPresentedMenuForLiftedText:) BOOL _presentedMenuForLiftedText;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIBezierPath *cutoutPath;
@property (readonly, nonatomic) double baselineAngle;
@property (retain, nonatomic) UIBezierPath *hitTestPath;
@property (nonatomic) double maxScale;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (retain, nonatomic) VKImageAnalysisInteraction *imageInteraction;
@property (nonatomic) BOOL presentsMenuForLiftedText;
@property (weak, nonatomic) id<VKTextLiftingViewDelegate> delegate;

- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentBounds;
- (void)performLiftAnimation;
- (void)fadeOutAndRemoveFromSuperview;
- (id)initWithImage:(id)a0 cutoutPath:(id)a1 baselineAngle:(double)a2;
- (void)_applyInteractionToImageViewIfReady;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_imageTransformInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_springAnimationForKeyPath:(id)a0 fromValue:(id)a1 toValue:(id)a2;
- (id)_gaussianBlurFilterWithRadius:(double)a0;
- (id)initWithImage:(id)a0 cutoutPath:(id)a1;

@end
