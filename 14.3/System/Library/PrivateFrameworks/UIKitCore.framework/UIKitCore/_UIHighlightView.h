@class UIColor, NSArray, NSMutableArray;

@interface _UIHighlightView : UIView {
    UIColor *_color;
    double _cornerRadius;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _invertedHighlightClipRect;
    NSArray *_cornerRadii;
    NSMutableArray *_innerBounds;
    NSMutableArray *_innerQuads;
    BOOL _invertHighlight;
}

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 forEvent:(struct __GSEvent { } *)a1;
- (void).cxx_destruct;
- (void)setCornerRadius:(double)a0;
- (void)setCornerRadii:(id)a0;
- (void)setColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrames:(id)a0 boundaryRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setInvertHighlight:(BOOL)a0 clipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)cleanUp;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setQuads:(id)a0 boundaryRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
