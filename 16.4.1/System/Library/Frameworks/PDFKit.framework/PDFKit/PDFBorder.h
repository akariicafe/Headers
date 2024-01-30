@class NSArray, NSDictionary, PDFBorderPrivateVars;

@interface PDFBorder : NSObject <NSCopying, NSCoding> {
    PDFBorderPrivateVars *_private;
}

@property (nonatomic) long long style;
@property (nonatomic) double lineWidth;
@property (copy, nonatomic) NSArray *dashPattern;
@property (readonly, copy, nonatomic) NSDictionary *borderKeyValues;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setAnnotation:(id)a0;
- (void)dealloc;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (BOOL)_isRectangular;
- (void)_setDashFromArray:(struct CGPDFArray { } *)a0;
- (void)_setStyleFromDictionary:(struct CGPDFDictionary { } *)a0;
- (void)_updateDashPatternRaw;
- (const struct __CFDictionary { } *)createDictionaryRef;
- (unsigned int)dashCountRaw;
- (const double *)dashPatternRaw;
- (double)horizontalCornerRadius;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { } *)a0 forPage:(id)a1;
- (BOOL)setBorderCharacteristicsFromArray:(struct CGPDFArray { } *)a0;
- (void)setHorizontalCornerRadius:(double)a0;
- (void)setVerticalCornerRadius:(double)a0;
- (void)updateCornerBorderStyle;
- (double)verticalCornerRadius;

@end
