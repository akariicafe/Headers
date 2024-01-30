@protocol NTKZeudleColorPalette;

@interface NTKZeudleComplicationBackgroundView : UIView

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentFrame;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) id<NTKZeudleColorPalette> palette;

- (void).cxx_destruct;
- (void)applyTransitionFraction:(double)a0 fromPalette:(id)a1 toPalette:(id)a2;
- (void)applyStyleChange;

@end
