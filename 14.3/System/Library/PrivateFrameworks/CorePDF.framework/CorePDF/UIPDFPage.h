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

- (id)annotations;
- (void)refresh;
- (unsigned long long)rotation;
- (void)dealloc;
- (id)findString:(id)a0 fromSelection:(id)a1 options:(unsigned long long)a2;
- (struct CGSize { double x0; double x1; })size;
- (id)string;
- (void)addAnnotation:(id)a0;
- (void)removeAnnotation:(id)a0;
- (void)setDocument:(id)a0;
- (void)clearAnnotations;
- (unsigned long long)cfCompareFlagsFromNSOptions:(unsigned long long)a0;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaBox;
- (void)removeAllAnnotations;
- (id)initWithCGPDFPage:(struct CGPDFPage { } *)a0;
- (id)annotationIn:(id)a0 withIndex:(unsigned long long)a1;
- (id)initWithDocument:(id)a0 pageNumber:(unsigned long long)a1;
- (id)getImageIfAvailable;
- (void)deliverImageWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 receiver:(id)a2 selector:(SEL)a3 info:(id)a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cropBoxAccountForRotation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaBoxAccountForRotation;
- (id)copyPage;

@end
