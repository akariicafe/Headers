@class NSArray, UIWebDragDotView, UIView, NSMutableArray;
@protocol UITextInput;

@interface UIWebTextRangeView : UIView {
    UIView<UITextInput> *m_container;
    NSMutableArray *_rectViews;
    UIWebDragDotView *_startDot;
    UIWebDragDotView *_endDot;
    BOOL _magnifying;
}

@property (readonly, nonatomic) UIView<UITextInput> *container;
@property (copy, nonatomic) NSArray *rects;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })endEdge;
- (void)updateRectViews;
- (void)doneMagnifying;
- (struct CGPoint { double x0; double x1; })endCorner;
- (void)dealloc;
- (void)removeFromSuperview;
- (struct CGPoint { double x0; double x1; })startCorner;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingRect;
- (void)geometryChanged;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })startEdge;
- (BOOL)startIsHorizontal;
- (BOOL)endIsHorizontal;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectAtIndex:(int)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (void)prepareForMagnification;
- (void)updateDragDots;
- (id)rectViewAtIndex:(int)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
