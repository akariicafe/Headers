@class UIPDFPageView, CALayer, UIPDFDocument;

@interface UIPDFPageContentDelegate : NSObject {
    UIPDFPageView *_view;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
    struct CGColor { } *_white;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _threadCount;
    BOOL _isCancelled;
}

@property (retain) UIPDFDocument *document;
@property unsigned long long pageIndex;
@property UIPDFPageView *view;
@property CALayer *owner;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } box;
@property unsigned long long pageRotation;
@property struct CGColor { } *highlightColor;
@property (readonly) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property BOOL isCancelled;

- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)setIsCancelled:(BOOL)a0;
- (id)view;
- (void)setView:(id)a0;
- (BOOL)isCancelled;
- (void)dealloc;
- (id)init;
- (void)computeTransform;
- (void)addRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toPath:(struct CGPath { } *)a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a2 view:(id)a3 owner:(id)a4;
- (void)drawSelectionLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)drawSelectionLayerBlockMode:(id)a0 inContext:(struct CGContext { } *)a1;
- (BOOL)pageHasSelection;

@end
