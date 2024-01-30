@class UIColor, CALayer;

@interface _MKCalloutLayer : _MKResizingLayer {
    struct CGImage { } *_contentImage;
    CALayer *_leftLayer;
    CALayer *_rightLayer;
}

@property (nonatomic) long long arrowPosition;
@property (nonatomic) double arrowOffset;
@property (retain, nonatomic) UIColor *fillColor;
@property (retain, nonatomic) UIColor *strokeColor;
@property (nonatomic) struct { double margin; double cornerRadius; double arrowBase; double arrowHeight; BOOL useRadialSmoothing; union { struct { double arrowBaseRadius; double arrowRadius; } radialSmoothing; struct { double arrowSmoothing; double arrowPointFactor; } nonRadialSmoothing; } ; BOOL alignDetailViewBaseline; BOOL scaleVerticalPaddingForDynamicType; struct UIEdgeInsets { double top; double left; double bottom; double right; } padding; } metrics;

- (void)layoutSublayers;
- (struct CGSize { double x0; double x1; })_contentSize;
- (void).cxx_destruct;
- (id)init;
- (void)setContentsScale:(double)a0;
- (void)dealloc;
- (struct CGImage { } *)_newContentImage;

@end
