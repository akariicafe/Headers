@class PDFAnnotationFreeTextPrivateVars;

@interface PDFAnnotationFreeText : PDFAnnotation <NSCopying, NSCoding> {
    PDFAnnotationFreeTextPrivateVars *_private2;
}

- (long long)alignment;
- (void)setAlignment:(long long)a0;
- (id)font;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)commonInit;
- (void)setFont:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setFontColor:(id)a0;
- (id)fontColor;
- (void)encodeWithCoder:(id)a0;
- (struct __CFDictionary { } *)commonCreateDictionaryRef;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { } *)a0 forPage:(id)a1;
- (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1;

@end
