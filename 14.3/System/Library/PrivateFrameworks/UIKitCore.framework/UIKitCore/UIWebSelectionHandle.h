@class UITouch, UIWebSelectionView;

@interface UIWebSelectionHandle : UIView {
    int _textPosition;
    UIWebSelectionView *_selectionView;
}

@property (retain, nonatomic) UITouch *touch;
@property (nonatomic) int position;
@property (nonatomic) int textPosition;
@property (readonly, nonatomic) BOOL hasTextPosition;
@property (readonly, nonatomic) struct CGSize { double width; double height; } touchToCenterOffset;
@property (nonatomic) struct CGSize { double width; double height; } centerToSelectionPointOffset;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (id)initWithPosition:(int)a0 selectionView:(id)a1;
- (void)snapToCornerOfRange:(id)a0 atStart:(BOOL)a1;
- (struct CGPoint { double x0; double x1; })applyTouchToCenterOffset:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })applyCenterToSelectionPointOffset:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)dropActiveTouch;
- (struct CGPoint { double x0; double x1; })applyOffsetInDirectionOfHandle:(double)a0 toPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
