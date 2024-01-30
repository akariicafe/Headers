@interface SHPalette : NSObject

+ (double)contentsScale;
+ (id)defaultPalette;
+ (struct CGColor { } *)sh_colorNamed:(id)a0;

- (struct CGColor { } *)shadowColor;
- (struct CGColor { } *)clearColor;
- (struct CGColor { } *)blackColor;
- (struct CGColor { } *)appTintColor;
- (struct CGColor { } *)tagButtonBackgroundColor;
- (struct CGColor { } *)tagButtonTopBorderColor;
- (struct CGColor { } *)tagButtonBackgroundTransparentColor;
- (struct CGColor { } *)tagButtonShazamShapeColor;
- (struct CGColor { } *)taggingCircleColor;
- (struct CGColor { } *)R:(double)a0 G:(double)a1 B:(double)a2 A:(double)a3;
- (struct CGColor { } *)shazamColorNearBlack;
- (struct CGColor { } *)alternateTintColor;

@end
