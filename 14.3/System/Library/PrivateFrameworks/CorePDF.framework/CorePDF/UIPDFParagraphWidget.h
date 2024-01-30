@class CAShapeLayer, CALayer, UIPDFPageView;

@interface UIPDFParagraphWidget : NSObject <UIPDFSelectionWidget> {
    CAShapeLayer *_trackingBorder;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _initialRect;
    BOOL _tracking;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _currentTrackingRect;
    CALayer *_leftGrabber;
    CALayer *_rightGrabber;
    CALayer *_topGrabber;
    CALayer *_bottomGrabber;
    CALayer *_selectedGrabber;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _boundsInPDFSpace;
    struct CGColor { } *_grabberColor;
}

@property (nonatomic) UIPDFPageView *pageView;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } initialSelectionPointOnPage;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } currentSelectionPointOnPage;

- (void)remove;
- (id)init;
- (void)dealloc;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)layout;
- (void)track:(struct CGPoint { double x0; double x1; })a0;
- (void)hide;
- (void)setSelection:(id)a0;
- (void)setSelectedGrabberPosition:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionBoundsInEffectsSpace;
- (BOOL)hitTest:(struct CGPoint { double x0; double x1; })a0 fixedPoint:(struct CGPoint { double x0; double x1; } *)a1 preceeds:(BOOL *)a2;
- (struct CGPoint { double x0; double x1; })selectedPointFor:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })viewOffset;
- (void)endTracking;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionRectangle;
- (void)setSelectedGrabber:(unsigned long long)a0;

@end
