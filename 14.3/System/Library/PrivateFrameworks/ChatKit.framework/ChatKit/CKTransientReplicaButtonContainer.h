@class CALayer, UIView;

@interface CKTransientReplicaButtonContainer : UIView

@property (readonly, nonatomic) UIView *sendButtonCircle;
@property (readonly, nonatomic) UIView *cancelButtonCircle;
@property (readonly, nonatomic) CALayer *sendButtonGlyphLayer;
@property (readonly, nonatomic) CALayer *cancelButtonGlyphLayer;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 hasDarkVibrancy:(BOOL)a1 isInDarkMode:(BOOL)a2 color:(id)a3 sendColor:(char)a4;
- (id)_glyphLayerForButtonAnimationWithGlyphName:(id)a0;

@end
