@class CALayer;

@interface TPRingView : UIView

@property (retain) CALayer *luminanceRingLayer;
@property (retain) CALayer *dodgeRingLayer;
@property (retain) CALayer *highlightDodgeLayer;
@property (retain) CALayer *highlightLuminanceLayer;
@property (retain) CALayer *selectionLayer;

+ (struct CGSize { double x0; double x1; })ringSize;
+ (double)ringStroke;
+ (id)colorForLuminance;
+ (id)createRingImageWithSize:(struct CGSize { double x0; double x1; })a0 strokeWidth:(double)a1 color:(id)a2;
+ (id)colorForDodge;
+ (double)ringCornerRadius;
+ (id)ringImageForLuminance;
+ (id)ringImageForDodge;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEnabled:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;

@end
