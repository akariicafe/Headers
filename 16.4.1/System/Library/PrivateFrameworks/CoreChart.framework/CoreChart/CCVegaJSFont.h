@interface CCVegaJSFont : NSObject {
    struct __CTFont { } *_font;
}

+ (id)cssFontWeightFromNumericWeight:(double)a0;
+ (double)defaultLineHeightForNativeFont:(id)a0;
+ (id)fontMetricsForFont:(struct __CTFont { } *)a0 fontNameOverride:(id)a1 lineHeightOverride:(double)a2;
+ (id)fontMetricsForTextStyle:(id)a0 options:(id)a1;
+ (id)nativeTextStyleFromTextStyle:(id)a0;
+ (double)numericWeightFromFontWeight:(id)a0;
+ (id)parseCSSFontFamilyList:(id)a0;
+ (id)stringWithTextStyleOptions:(id)a0;

- (void)dealloc;
- (struct __CTFont { } *)CTFont;
- (id)fontMetrics;
- (double)defaultLineHeight;
- (void)drawText:(id)a0 x:(double)a1 y:(double)a2 align:(id)a3 color:(struct CGColor { } *)a4 drawingMode:(int)a5 inContext:(struct CGContext { } *)a6;
- (struct { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; double x2; double x3; double x4; })extendedMeasureText:(id)a0;
- (id)initWithCSSFontString:(id)a0 options:(id)a1;
- (id)initWithFontFamily:(id)a0 fontSize:(double)a1 fontWeight:(id)a2 fontStyle:(id)a3 fontVariant:(id)a4 options:(id)a5;
- (struct { struct CGSize { double x0; double x1; } x0; })measureText:(id)a0;

@end
