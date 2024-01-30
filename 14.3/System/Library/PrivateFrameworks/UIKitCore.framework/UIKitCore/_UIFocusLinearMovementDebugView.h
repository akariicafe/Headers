@class NSArray, _UIFocusGroupMap;

@interface _UIFocusLinearMovementDebugView : UIView {
    NSArray *_items;
    _UIFocusGroupMap *_focusGroupMap;
    BOOL _colorCoding;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithItems:(id)a0 focusGroupMap:(id)a1;
- (id)_drawableItems;
- (id)_itemFramesFromItems:(id)a0;
- (id)_lineSegmentsFromFrames:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
