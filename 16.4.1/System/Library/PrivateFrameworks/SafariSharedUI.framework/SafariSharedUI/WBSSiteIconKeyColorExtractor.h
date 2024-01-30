@interface WBSSiteIconKeyColorExtractor : NSObject

+ (id)keyColorForIcon:(id)a0 allowAllColors:(BOOL)a1 confidence:(double *)a2 nonTransparentConfidence:(double *)a3 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a4;
+ (char *)_createRGBAPixelBufferFromImage:(struct CGImage { } *)a0;
+ (id)keyColorForIcon:(id)a0;

@end
