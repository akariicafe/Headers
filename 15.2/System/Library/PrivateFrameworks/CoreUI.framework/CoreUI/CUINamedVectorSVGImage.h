@interface CUINamedVectorSVGImage : CUINamedVectorImage

@property (readonly, nonatomic) struct CGSVGDocument { } *svgDocument;

- (struct CGImage { } *)rasterizeImageUsingScaleFactor:(double)a0 forTargetSize:(struct CGSize { double x0; double x1; })a1;

@end
