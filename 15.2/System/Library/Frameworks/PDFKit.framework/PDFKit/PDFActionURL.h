@class NSURL, PDFActionURLPrivateVars;

@interface PDFActionURL : PDFAction <NSCopying> {
    PDFActionURLPrivateVars *_private2;
}

@property (readonly, nonatomic, getter=isSuspiciousURL) BOOL suspiciousURL;
@property (copy, nonatomic) NSURL *URL;

- (id)toolTip;
- (void)commonInit;
- (id)initWithURL:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (const struct __CFDictionary { } *)createDictionaryRef;
- (id)initWithActionDictionary:(struct CGPDFDictionary { } *)a0 forDocument:(id)a1 forPage:(id)a2;

@end
