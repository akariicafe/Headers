@class CALayer;

@interface PKSelectionModificationKnob : CALayer {
    CALayer *_knobLayer;
    CALayer *_knobTailLayer;
    BOOL _isBrushSelecting;
    BOOL _isRTL;
}

@property (nonatomic) long long knobLocation;
@property (nonatomic) struct CGColor { } *knobColor;

- (void)layoutSublayers;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)dealloc;
- (id)accessibilityIdentifier;
- (void)_updateKnobAppearance;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectForKnob;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectForTail;
- (double)_knobTailWidth;
- (BOOL)_isTailFacingDown;
- (id)initWithLocation:(long long)a0 color:(struct CGColor { } *)a1 isRTL:(BOOL)a2;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0 inputType:(long long)a1;
- (double)distanceFromKnobCenterToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)didBeginBrushSelection;
- (void)didEndBrushSelection;

@end
