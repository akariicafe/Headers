@class NSArray, PDFActionResetFormPrivateVars;

@interface PDFActionResetForm : PDFAction <NSCopying> {
    PDFActionResetFormPrivateVars *_private2;
}

@property (copy, nonatomic) NSArray *fields;
@property (nonatomic) BOOL fieldsIncludedAreCleared;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)commonInit;
- (id)description;
- (id)toolTip;
- (const struct __CFDictionary { } *)createDictionaryRef;
- (void)addFlagsToDictionaryRef:(struct __CFDictionary { } *)a0;
- (id)initWithActionDictionary:(struct CGPDFDictionary { } *)a0 forDocument:(id)a1 forPage:(id)a2;
- (void)addFieldsToDictionaryRef:(struct __CFDictionary { } *)a0;

@end
