@class NSURL, PDFActionRemoteGoToPrivateVars;

@interface PDFActionRemoteGoTo : PDFAction <NSCopying> {
    PDFActionRemoteGoToPrivateVars *_private2;
}

@property (nonatomic) unsigned long long pageIndex;
@property (nonatomic) struct CGPoint { double x0; double x1; } point;
@property (copy, nonatomic) NSURL *URL;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)commonInit;
- (id)description;
- (id)toolTip;
- (const struct __CFDictionary { } *)createDictionaryRef;
- (void)addDestinationToDictionaryRef:(struct __CFDictionary { } *)a0;
- (id)initWithActionDictionary:(struct CGPDFDictionary { } *)a0 forDocument:(id)a1 forPage:(id)a2;
- (id)toolTipNoLabel;
- (id)initWithPageIndex:(unsigned long long)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 fileURL:(id)a2;

@end
