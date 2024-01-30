@class NSString, NSDictionary, WFPDFDocument, WFPDFContentStream;

@interface WFPDFPage : NSObject

@property (readonly, nonatomic) struct CGPDFPage { } *pageRef;
@property (readonly, weak, nonatomic) WFPDFDocument *document;
@property (readonly, nonatomic) int rotation;
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) WFPDFContentStream *contentStream;
@property (readonly, nonatomic) NSString *text;

- (void).cxx_destruct;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForBox:(int)a0;
- (id)initWithPageRef:(struct CGPDFPage { } *)a0 document:(id)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })drawingTransformForBox:(int)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 rotation:(int)a2 preservingAspectRatio:(BOOL)a3;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1;

@end
