@class UIColor;

@interface NTKExplorerHandsView : NTKAnalogHandsView

@property (retain, nonatomic) UIColor *secondHandDotColor;
@property (nonatomic) struct CGPoint { double x; double y; } secondHandCenter;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)applyTransitionFraction:(double)a0 fromColor:(unsigned long long)a1 toColor:(unsigned long long)a2;
- (id)initForDevice:(id)a0;
- (void)setInlayColor:(id)a0;

@end
