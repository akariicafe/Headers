@class CALayer;

@interface PKSelectionModificationKnob : CALayer {
    CALayer *_knobLayer;
    CALayer *_knobTailLayer;
    BOOL _isBrushSelecting;
    BOOL _isRTL;
    long long _knobLocation;
    struct CGColor { } *_knobColor;
}

- (void)layoutSublayers;
- (id)accessibilityIdentifier;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (void)dealloc;

@end
