@class UIColor;

@interface UIWebDragDotView : UIView {
    UIColor *m_selectionBarColor;
    long long m_orientation;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } m_stickFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } m_dotFrame;
}

- (BOOL)isVertical;
- (void)dealloc;
- (id)initWithEdge:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 container:(id)a1 orientation:(long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })stickFrameForEdge:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withOverlap:(double)a1;
- (void)setEdge:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isPointedUp;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isPointedDown;
- (BOOL)isPointedLeft;
- (BOOL)isPointedRight;

@end
