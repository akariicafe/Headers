@class UISelectionGrabber;

@interface UISelectionGrabberDot : UIImageView

@property (weak, nonatomic) UISelectionGrabber *grabber;

- (int)textEffectsVisibilityLevel;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (int)textEffectsVisibilityLevelInKeyboardWindow;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)redrawRasterizedImageForScale:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_extendedHitTestingRectWithEvent:(id)a0 includingCalloutBarAdjustments:(BOOL)a1;
- (id)_rasterizedDotImageForScale:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 container:(id)a1;

@end
