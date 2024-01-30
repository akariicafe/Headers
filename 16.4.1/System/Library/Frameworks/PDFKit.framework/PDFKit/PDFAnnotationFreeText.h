@class PDFAnnotationFreeTextPrivateVars;

@interface PDFAnnotationFreeText : PDFAnnotation <NSCopying, NSCoding> {
    PDFAnnotationFreeTextPrivateVars *_private2;
}

- (void)encodeWithCoder:(id)a0;
- (id)font;
- (void)setFont:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)alignment;
- (void)commonInit;
- (void)setAlignment:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)fontColor;
- (void)setFontColor:(id)a0;
- (struct __CFDictionary { } *)commonCreateDictionaryRef;
- (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { } *)a0 forPage:(id)a1;

@end
