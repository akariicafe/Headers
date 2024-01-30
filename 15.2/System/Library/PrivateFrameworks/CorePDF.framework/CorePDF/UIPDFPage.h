@class NSMutableArray, NSString, UIImage, UIPDFDocument, UIPDFSelection;

@interface UIPDFPage : NSObject {
    NSString *_stringInReadingOrder;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_annotations;
}

@property (readonly) struct CGPDFPage { } *CGPage;
@property (readonly) unsigned long long pageNumber;
@property (readonly) unsigned long long pageIndex;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cropBox;
@property (readonly) UIPDFDocument *document;
@property (retain) UIImage *pageImage;
@property (retain) UIPDFSelection *selection;

- (unsigned long long)rotation;
- (id)string;
- (struct CGSize { double x0; double x1; })size;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaBox;
- (void)addAnnotation:(id)a0;
- (void)refresh;
- (id)annotations;
- (void)setDocument:(id)a0;
- (void)dealloc;
- (void)removeAnnotation:(id)a0;
- (id)findString:(id)a0 fromSelection:(id)a1 options:(unsigned long long)a2;
- (void)clearAnnotations;
- (unsigned long long)cfCompareFlagsFromNSOptions:(unsigned long long)a0;
- (void)removeAllAnnotations;
- (id)initWithCGPDFPage:(struct CGPDFPage { } *)a0;
- (id)annotationIn:(id)a0 withIndex:(unsigned long long)a1;
- (id)initWithDocument:(id)a0 pageNumber:(unsigned long long)a1;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1;
- (id)getImageIfAvailable;
- (void)deliverImageWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 receiver:(id)a2 selector:(SEL)a3 info:(id)a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cropBoxAccountForRotation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaBoxAccountForRotation;
- (id)copyPage;

@end
