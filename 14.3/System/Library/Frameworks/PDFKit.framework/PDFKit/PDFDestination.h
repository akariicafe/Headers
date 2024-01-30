@class PDFPage, PDFDestinationPrivate;

@interface PDFDestination : NSObject <NSCopying> {
    PDFDestinationPrivate *_private;
}

@property (readonly, weak, nonatomic) PDFPage *page;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } point;
@property (nonatomic) double zoom;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)commonInit;
- (void)dealloc;
- (id)document;
- (long long)compare:(id)a0;
- (id)description;
- (int)type;
- (id)initWithDictionary:(struct CGPDFDictionary { } *)a0 forDocument:(id)a1;
- (const struct __CFArray { } *)createArrayRef;
- (id)initWithPage:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)pageIfExists;

@end
