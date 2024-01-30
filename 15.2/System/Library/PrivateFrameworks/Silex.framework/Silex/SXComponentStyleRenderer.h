@class SXLayer, SXRepeatableImageFillView, SXGradientFillView, NSString, SXImageFillView, SXShapeLayer, SXViewport, SXVideoFillView, SXComponentView;
@protocol SXComponentStyle, SXImageFillViewFactory, SXGradientFactory, SXVideoFillViewFactory, SXRepeatableImageFillViewFactory;

@interface SXComponentStyleRenderer : NSObject <SXViewportChangeListener, SXComponentStyleRenderer>

@property (readonly, nonatomic) id<SXComponentStyle> componentStyle;
@property (readonly, nonatomic) SXViewport *viewport;
@property (readonly, nonatomic) id<SXVideoFillViewFactory> videoFillViewFactory;
@property (readonly, nonatomic) id<SXImageFillViewFactory> imageFillViewFactory;
@property (readonly, nonatomic) id<SXGradientFactory> gradientFactory;
@property (readonly, nonatomic) id<SXRepeatableImageFillViewFactory> repeatableImageFillViewFactory;
@property (readonly, weak, nonatomic) SXComponentView *componentView;
@property (retain, nonatomic) SXGradientFillView *gradientFillView;
@property (retain, nonatomic) SXImageFillView *imageFillView;
@property (retain, nonatomic) SXVideoFillView *videoFillView;
@property (retain, nonatomic) SXRepeatableImageFillView *repeatableImageFillView;
@property (nonatomic) BOOL didRegisterForDynamicBounds;
@property (retain, nonatomic) SXLayer *shadowLayer;
@property (retain, nonatomic) SXShapeLayer *borderLayer;
@property (retain, nonatomic) SXShapeLayer *topBorderLayer;
@property (retain, nonatomic) SXShapeLayer *rightBorderLayer;
@property (retain, nonatomic) SXShapeLayer *bottomBorderLayer;
@property (retain, nonatomic) SXShapeLayer *leftBorderLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)applyBorder:(id)a0;
- (void)dealloc;
- (void)viewport:(id)a0 dynamicBoundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)viewport:(id)a0 appearStateChangedFromState:(unsigned long long)a1;
- (void)componentVisiblityStateDidChange:(long long)a0;
- (void)prepareForComponentView:(id)a0;
- (void)applyComponentStyle;
- (id)initWithComponentStyle:(id)a0 viewport:(id)a1 imageFillViewFactory:(id)a2 videoFillViewFactory:(id)a3 gradientViewFactory:(id)a4 repeatableImageFillViewFactory:(id)a5;
- (void)applyCornerRadius:(double)a0 cornerMask:(unsigned long long)a1 curve:(id)a2 onView:(id)a3;
- (void)prepareShadow:(id)a0;
- (void)prepareFill:(id)a0;
- (void)prepareBorder:(id)a0;
- (void)applyMask:(id)a0;
- (void)applyBackgroundColor:(id)a0;
- (void)applyOpacity:(double)a0;
- (void)applyFill:(id)a0;
- (void)applyShadow:(id)a0;
- (id)viewForFill:(id)a0;
- (void)applyStrokeStyle:(id)a0 borderLayer:(id)a1 path:(id)a2 lineWidth:(double)a3;
- (id)videoPlayerViewForFill:(id)a0;
- (id)imageViewForFill:(id)a0;
- (id)gradientViewForFill:(id)a0;
- (id)repeatableImageFillViewForFill:(id)a0;

@end
