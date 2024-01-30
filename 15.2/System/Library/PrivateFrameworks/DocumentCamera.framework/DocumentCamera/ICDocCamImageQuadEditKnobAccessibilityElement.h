@class CALayer, ICDocCamImageQuadEditOverlay;

@interface ICDocCamImageQuadEditKnobAccessibilityElement : UIAccessibilityElement

@property (weak, nonatomic) CALayer *knobLayer;
@property (weak, nonatomic) ICDocCamImageQuadEditOverlay *overlayView;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (BOOL)accessibilityViewIsModal;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)initWithKnobLayer:(id)a0 overlayView:(id)a1;

@end
