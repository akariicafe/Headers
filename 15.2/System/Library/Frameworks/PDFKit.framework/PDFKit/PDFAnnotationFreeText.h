@class PDFAnnotationFreeTextPrivateVars;

@interface PDFAnnotationFreeText : PDFAnnotation <NSCopying, NSCoding> {
    PDFAnnotationFreeTextPrivateVars *_private2;
}

- (void)setFont:(id)a0;
- (void)commonInit;
- (void)encodeWithCoder:(id)a0;
- (void)setAlignment:(long long)a0;
- (void).cxx_destruct;
- (long long)alignment;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)font;
- (id)fontColor;
- (void)setFontColor:(id)a0;
- (struct __CFDictionary { } *)commonCreateDictionaryRef;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { } *)a0 forPage:(id)a1;
- (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1;

@end
