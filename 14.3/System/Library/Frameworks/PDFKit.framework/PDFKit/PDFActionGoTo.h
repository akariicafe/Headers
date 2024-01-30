@class PDFActionGoToPrivateVars, PDFDestination;

@interface PDFActionGoTo : PDFAction <NSCopying> {
    PDFActionGoToPrivateVars *_private2;
}

@property (retain, nonatomic) PDFDestination *destination;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)commonInit;
- (id)initWithDestination:(id)a0;
- (id)description;
- (id)toolTip;
- (const struct __CFDictionary { } *)createDictionaryRef;
- (void)addDestinationToDictionaryRef:(struct __CFDictionary { } *)a0;
- (id)initWithActionDictionary:(struct CGPDFDictionary { } *)a0 forDocument:(id)a1 forPage:(id)a2;
- (id)toolTipNoLabel;

@end
