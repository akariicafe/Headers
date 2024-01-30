@class PKDrawingAdjustmentKnob;

@interface PKSpaceInsertionView : UIView {
    struct CGPath { } *_lassoPath;
    struct CGPoint { double x; double y; } _handleLocation;
    double _scale;
    PKDrawingAdjustmentKnob *_knobHandle;
}

@property (nonatomic) unsigned long long insertionType;
@property (nonatomic) BOOL isDragging;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 insertionType:(unsigned long long)a1 path:(struct CGPath { } *)a2 handleLocation:(struct CGPoint { double x0; double x1; })a3 scale:(double)a4;

@end
