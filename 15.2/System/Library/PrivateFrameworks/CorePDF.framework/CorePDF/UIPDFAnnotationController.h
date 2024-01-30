@class UIColor, UIPDFPageView, UIPDFMarkupAnnotation, NSString, CALayer;
@protocol UIPDFAnnotationControllerDelegate, NSObject;

@interface UIPDFAnnotationController : NSObject <UIGestureRecognizerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct CGPoint { double x; double y; } _startPoint;
    BOOL _moving;
    struct { long long location; long long length; } _initialRange;
    struct CGSize { double width; double height; } _cachedMarginNoteSize;
}

@property (readonly, nonatomic) UIPDFPageView *pageView;
@property (retain, nonatomic) UIPDFMarkupAnnotation *currentAnnotation;
@property (nonatomic) BOOL allowEditing;
@property (nonatomic) UIColor *currentColor;
@property (nonatomic) BOOL makeUnderlineAnnotation;
@property (nonatomic) CALayer *drawingSurface;
@property (nonatomic) id<NSObject, UIPDFAnnotationControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL tracking;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newAnnotation:(struct CGPDFDictionary { } *)a0 type:(const char *)a1;
+ (BOOL)pageHasAnnotations:(id)a0;
+ (struct CGImage { } *)newMaskImage:(struct CGPDFPage { } *)a0 size:(struct CGSize { double x0; double x1; })a1;

- (void)unlock;
- (void)lock;
- (void)setView:(id)a0;
- (void)addAnnotation:(id)a0;
- (id)init;
- (void)setNeedsDisplay;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)dealloc;
- (id)marginNoteImage:(id)a0;
- (id)initWithPageView:(id)a0;
- (void)layoutAnnotationViews:(id)a0;
- (void)drawAnnotations:(struct CGContext { } *)a0;
- (BOOL)willDoSomethingWithTap:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)willTrackAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)startTracking:(struct CGPoint { double x0; double x1; })a0;
- (void)tracking:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)madeInstantAnnotation;
- (void)endTrackingAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)doubleTapRecognized:(id)a0;
- (BOOL)isLinkAnnotationAt:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)annotationBriefPressRecognized:(id)a0;
- (BOOL)annotationLongPressRecognized:(id)a0;
- (BOOL)annotationSingleTapRecognized:(id)a0;
- (void)addLinkAnnotationViews;
- (BOOL)willHandleTouchGestureAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)linkAnnotationShouldBegin:(id)a0;
- (void)_addLinkAnnotationViewFor:(id)a0;
- (void)setSurfacePosition:(id)a0;
- (void)annotationTapRecognized:(id)a0;
- (void)linkPressRecognized:(id)a0;
- (void)_addRecognizers:(id)a0;
- (void)addDrawingSurface:(id)a0 view:(id)a1;
- (void)_addAnnotationViewFor:(id)a0;
- (struct CGSize { double x0; double x1; })marginNoteImageSize;
- (void)resetBeingPressedForRecognizer:(id)a0 withDelegate:(id)a1 withAnnotation:(id)a2;
- (BOOL)isSelection:(struct CGPDFSelection { } *)a0 equalTo:(struct CGPDFSelection { } *)a1;
- (BOOL)intersects:(struct CGPDFSelection { } *)a0 with:(struct CGPDFSelection { } *)a1;
- (void)_initialRange:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)trackMoved:(struct CGPoint { double x0; double x1; })a0;
- (void)mergeSelectionOfAnnotation:(id)a0;
- (id)_linkAnnotationViewAt:(struct CGPoint { double x0; double x1; })a0;
- (id)linkAnnotationAt:(struct CGPoint { double x0; double x1; })a0;
- (id)annotationAt:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 toSurfaceLayer:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toSurfaceLayer:(id)a1;
- (void)hostViewDidScroll;
- (void)didEndTrackingAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)annotatePageSelection;
- (void)copyAttributesOf:(id)a0 to:(id)a1;
- (struct CGImage { } *)newHighlightMaskImageFor:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGImage { } *)underlineImageFor:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
