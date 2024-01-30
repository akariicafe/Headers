@class UITextSelection, UIWebDocumentView;
@protocol UIWebSelectionBlock;

@interface UIWebSelection : NSObject

@property (retain, nonatomic) id<UIWebSelectionBlock> base;
@property (retain, nonatomic) id<UIWebSelectionBlock> extent;
@property (readonly, nonatomic) UIWebDocumentView *documentView;
@property (readonly, nonatomic) UITextSelection *textSelection;
@property (readonly, nonatomic) BOOL valid;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingRect;
@property (nonatomic) struct CGSize { double width; double height; } desiredSize;
@property (readonly, nonatomic, getter=isTextOnly) BOOL textOnly;

- (id)webView;
- (void)useBlock;
- (id)asDomRange;
- (id)duplicate;
- (id)webArchive;
- (void)dealloc;
- (id)blockAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setSelectionWithPoint:(struct CGPoint { double x0; double x1; })a0 ignoringLargeBlocks:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingRectAndInsideFixedPosition:(int *)a0;
- (id)webFrame;
- (void)shrinkSelectionFromPoint:(struct CGPoint { double x0; double x1; })a0 towardsPoint:(struct CGPoint { double x0; double x1; })a1 withNewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)growSelectionTowardsPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)elementAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)domDocument;
- (double)distanceBetweenFirstRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 second:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 edge:(int)a2;
- (BOOL)tryToShrinkToBaseAndExtent;
- (BOOL)isEqualToSelection:(id)a0;
- (void)growFromEdge:(int)a0;
- (void)shrinkFromEdge:(int)a0;
- (id)blockOfSameWidthAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithDocumentView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingTextSelectionRectAndInsideFixedPosition:(int *)a0;
- (id)textSelectionRects;
- (id)textRepresentation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingTextSelectionRect;
- (void)adjustSelectionFromPoint:(struct CGPoint { double x0; double x1; })a0 towardsPoint:(struct CGPoint { double x0; double x1; })a1 withNewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)moveEdge:(int)a0 outwards:(BOOL)a1;
- (void)applySelectionToWebDocumentView;
- (BOOL)blockContainsPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingRect;
- (void)setSelectionWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)selectionChanged;

@end
