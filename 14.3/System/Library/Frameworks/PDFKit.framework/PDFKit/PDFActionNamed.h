@class PDFActionNamedPrivateVars;

@interface PDFActionNamed : PDFAction <NSCopying> {
    PDFActionNamedPrivateVars *_private2;
}

@property (nonatomic) long long name;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)commonInit;
- (id)description;
- (id)toolTip;
- (id)initWithName:(long long)a0;
- (const struct __CFDictionary { } *)createDictionaryRef;
- (void)addNameToDictionaryRef:(struct __CFDictionary { } *)a0;
- (id)initWithActionDictionary:(struct CGPDFDictionary { } *)a0 forDocument:(id)a1 forPage:(id)a2;

@end
