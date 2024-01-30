@interface NSTextCorrectionMarkerRendering : NSObject

+ (id)_patternColorForSpellType_iOS:(long long)a0 size:(struct CGSize { double x0; double x1; })a1 gap:(struct CGSize { double x0; double x1; })a2 imageSize:(out struct CGSize { double x0; double x1; } *)a3;
+ (id)colorForSpellType_iOS:(long long)a0;
+ (id)colorForType:(long long)a0 font:(id)a1 imageSize:(out struct CGSize { double x0; double x1; } *)a2;
+ (void)drawCorrectionMarkerOfType:(long long)a0 font:(id)a1 origin:(struct CGPoint { double x0; double x1; })a2 width:(double)a3 graphicsContext:(id)a4;
+ (long long)textCorrectionMarkerTypeWithAttributes:(id)a0;

@end
