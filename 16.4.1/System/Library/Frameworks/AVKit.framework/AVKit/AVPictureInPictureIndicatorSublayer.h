@class NSString, CALayer, NSAttributedString, CATextLayer;

@interface AVPictureInPictureIndicatorSublayer : CALayer {
    NSAttributedString *_attributedText;
    struct CGSize { double width; double height; } _imageSize;
    struct NSEdgeInsets { double top; double left; double bottom; double right; } _languageAwareOutsets;
    double _lineHeight;
    double _baselineOffset;
    CATextLayer *_textLayer;
    CALayer *_imageLayer;
}

@property (copy, nonatomic) NSString *customText;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (BOOL)canRenderAttributedTextWithoutTruncationInsideRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithDisplayScale:(double)a0 placeholderImage:(struct CGImage { } *)a1 opaque:(BOOL)a2;
- (void)layoutSublayersWithTextAndImageUsingInsetBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textBoundingRectWhenDrawnInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
