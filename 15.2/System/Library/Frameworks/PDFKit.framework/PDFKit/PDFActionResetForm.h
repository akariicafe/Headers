@class NSArray, PDFActionResetFormPrivateVars;

@interface PDFActionResetForm : PDFAction <NSCopying> {
    PDFActionResetFormPrivateVars *_private2;
}

@property (copy, nonatomic) NSArray *fields;
@property (nonatomic) BOOL fieldsIncludedAreCleared;

- (id)toolTip;
- (void)commonInit;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (const struct __CFDictionary { } *)createDictionaryRef;
- (void)addFlagsToDictionaryRef:(struct __CFDictionary { } *)a0;
- (id)initWithActionDictionary:(struct CGPDFDictionary { } *)a0 forDocument:(id)a1 forPage:(id)a2;
- (void)addFieldsToDictionaryRef:(struct __CFDictionary { } *)a0;

@end
