@class NSArray, NSDictionary, PDFBorderPrivateVars;

@interface PDFBorder : NSObject <NSCopying, NSCoding> {
    PDFBorderPrivateVars *_private;
}

@property (nonatomic) long long style;
@property (nonatomic) double lineWidth;
@property (copy, nonatomic) NSArray *dashPattern;
@property (readonly, copy, nonatomic) NSDictionary *borderKeyValues;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setAnnotation:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_isRectangular;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { } *)a0 forPage:(id)a1;
- (double)horizontalCornerRadius;
- (double)verticalCornerRadius;
- (const struct __CFDictionary { } *)createDictionaryRef;
- (void)setHorizontalCornerRadius:(double)a0;
- (void)setVerticalCornerRadius:(double)a0;
- (const double *)dashPatternRaw;
- (unsigned int)dashCountRaw;
- (void)_updateDashPatternRaw;
- (void)_setStyleFromDictionary:(struct CGPDFDictionary { } *)a0;
- (BOOL)setBorderCharacteristicsFromArray:(struct CGPDFArray { } *)a0;
- (void)_setDashFromArray:(struct CGPDFArray { } *)a0;
- (void)updateCornerBorderStyle;

@end
