@class PDFPage, PDFDestinationPrivate;

@interface PDFDestination : NSObject <NSCopying> {
    PDFDestinationPrivate *_private;
}

@property (readonly, weak, nonatomic) PDFPage *page;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } point;
@property (nonatomic) double zoom;

- (long long)compare:(id)a0;
- (void)commonInit;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)document;
- (int)type;
- (void)dealloc;
- (id)initWithDictionary:(struct CGPDFDictionary { } *)a0 forDocument:(id)a1;
- (const struct __CFArray { } *)createArrayRef;
- (id)initWithPage:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)pageIfExists;

@end
