@class CALayer, ICDocCamImageQuadEditOverlay;

@interface ICDocCamImageQuadEditKnobAccessibilityElement : UIAccessibilityElement

@property (weak, nonatomic) CALayer *knobLayer;
@property (weak, nonatomic) ICDocCamImageQuadEditOverlay *overlayView;

- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityLabel;
- (BOOL)accessibilityViewIsModal;
- (id)accessibilityHint;
- (id)initWithKnobLayer:(id)a0 overlayView:(id)a1;

@end
