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

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })Rect;
- (id)archive;
- (id)init;
- (id)selection;
- (BOOL)hidden;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGColor { } *)color;
- (Class)viewClass;
- (void)setColor:(struct CGColor { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)setSelection:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectIn:(struct CGPDFArray { } *)a0;
- (int)annotationType;
- (void)setPageView:(id)a0;
- (void)setAnnotationID:(id)a0;
- (id)newSelection;
- (id)annotationID;
- (void)makeQuadpointsFrom:(id)a0;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { } *)a0;
- (id)getImageNamed:(id)a0 ofType:(id)a1;
- (BOOL)hasPopUp;
- (const char *)pdfContents;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })popUpAnnotationRect;
- (id)descriptionHOLD;
- (struct CGPath { } *)newPathFromQuadPoints;
- (BOOL)recognizeGestures;

@end
