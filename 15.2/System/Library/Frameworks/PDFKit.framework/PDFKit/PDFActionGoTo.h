@class PDFActionGoToPrivateVars, PDFDestination;

@interface PDFActionGoTo : PDFAction <NSCopying> {
    PDFActionGoToPrivateVars *_private2;
}

@property (retain, nonatomic) PDFDestination *destination;

- (id)toolTip;
- (void)commonInit;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDestination:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (const struct __CFDictionary { } *)createDictionaryRef;
- (void)addDestinationToDictionaryRef:(struct __CFDictionary { } *)a0;
- (id)initWithActionDictionary:(struct CGPDFDictionary { } *)a0 forDocument:(id)a1 forPage:(id)a2;
- (id)toolTipNoLabel;

@end
