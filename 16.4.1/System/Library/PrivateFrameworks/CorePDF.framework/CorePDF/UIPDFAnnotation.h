@class NSString, UIPDFAnnotationView, CALayer, UIPDFPopupAnnotation, UIPDFAnnotationController, UIPDFPage, NSMutableArray, UIPDFSelection;

@interface UIPDFAnnotation : NSObject {
    struct CGPDFDictionary { } *_dictionary;
    struct CGColor { } *_color;
    void *_appearanceStream;
    struct CGPDFString { } *_pdfContents;
    NSString *_annotationID;
    BOOL _hidden;
    NSMutableArray *_quadPoints;
    UIPDFSelection *_selection;
}

@property (retain, nonatomic) CALayer *drawingLayer;
@property (retain, nonatomic) UIPDFAnnotationView *annotationView;
@property (nonatomic) UIPDFPage *page;
@property (nonatomic) UIPDFAnnotationController *annotationController;
@property (readonly, nonatomic) BOOL recognizeGestures;
@property (nonatomic) BOOL editable;
@property (nonatomic) UIPDFSelection *selection;
@property (retain, nonatomic) id data;
@property (retain, nonatomic) NSString *contents;
@property (nonatomic) long long index;
@property (nonatomic) UIPDFPopupAnnotation *popup;
@property (retain, nonatomic) NSString *associatedAnnotationID;
@property (nonatomic) unsigned long long tag;

+ (id)newAnnotationWithPage:(id)a0 fromArchive:(id)a1;

- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)drawInContext:(struct CGContext { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGColor { } *)color;
- (id)archive;
- (void)dealloc;
- (id)selection;
- (void)setColor:(struct CGColor { } *)a0;
- (void)setSelection:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (BOOL)hidden;
- (id)init;
- (Class)viewClass;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })Rect;
- (int)annotationType;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectIn:(struct CGPDFArray { } *)a0;
- (id)descriptionHOLD;
- (id)annotationID;
- (id)getImageNamed:(id)a0 ofType:(id)a1;
- (BOOL)hasPopUp;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { } *)a0;
- (void)makeQuadpointsFrom:(id)a0;
- (struct CGPath { } *)newPathFromQuadPoints;
- (id)newSelection;
- (const char *)pdfContents;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })popUpAnnotationRect;
- (BOOL)recognizeGestures;
- (void)setAnnotationID:(id)a0;
- (void)setPageView:(id)a0;

@end
