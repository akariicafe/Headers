@class CALayer, UIPDFPageView;

@interface UIPDFTextRangeWidget : NSObject <UIPDFSelectionWidget> {
    CALayer *_startSelectionGrabber;
    CALayer *_startBar;
    CALayer *_endSelectionGrabber;
    CALayer *_endBar;
    CALayer *_startHandle;
    CALayer *_endHandle;
    CALayer *_fixedSelectionGrabber;
    double _handleHeight;
    double _handleWidth;
    double _offsetX;
    double _offsetY;
    unsigned long long _startIndex;
    unsigned long long _endIndex;
    struct CGColor { } *_grabberColor;
    long long _startRectangle;
    long long _endRectangle;
    BOOL _startLeft;
    BOOL _endRight;
    double _startX;
    double _endX;
}

@property (nonatomic) UIPDFPageView *pageView;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } initialSelectionPointOnPage;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } currentSelectionPointOnPage;

- (void)setSelection:(id)a0;
- (void)remove;
- (id)description;
- (id)init;
- (void)hide;
- (void)layout;
- (void)dealloc;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)track:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)hitTest:(struct CGPoint { double x0; double x1; })a0 fixedPoint:(struct CGPoint { double x0; double x1; } *)a1 preceeds:(BOOL *)a2;
- (struct CGPoint { double x0; double x1; })selectedPointFor:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })viewOffset;
- (void)endTracking;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionRectangle;
- (void)setSelectedGrabber:(unsigned long long)a0;
- (void)layoutStartSelectionGrabber:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a1 width:(double)a2 extraHeight:(double)a3 unitSize:(struct CGSize { double x0; double x1; })a4;
- (void)layoutEndSelectionGrabber:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a1 width:(double)a2 extraHeight:(double)a3 unitSize:(struct CGSize { double x0; double x1; })a4;
- (void)layoutWidget;

@end
