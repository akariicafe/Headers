@class NTKBlackcombDialColorPalette, NSArray, CALayer, CLKDevice;

@interface NTKBlackcombBackgroundView : UIView {
    CLKDevice *_device;
    NTKBlackcombDialColorPalette *_palette;
    CALayer *_smallTickCoveringLayer;
    NSArray *_smallTicks;
    NSArray *_mediumTicks;
    NSArray *_largeTicks;
    BOOL _showingStatus;
}

@property (nonatomic) BOOL usesLongSideTicks;

- (void).cxx_destruct;
- (id)initForDevice:(id)a0;
- (void)applyPalette:(id)a0;
- (void)applyTransitionFraction:(double)a0 fromPalette:(id)a1 toPalette:(id)a2;
- (void)_setupTicks;
- (void)_layoutTopLargeTick;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_tickLayoutBounds;
- (double)_outerDialRadiusAtMediumTick:(long long)a0 verticalLength:(double)a1 horizontalLength:(double)a2;
- (double)_innerDialRadiusAtLargeTick:(long long)a0 verticalLength:(double)a1 horizontalLength:(double)a2;
- (void)_applyBackgroundColor:(id)a0;
- (void)applyTransitionFractionToUsesLongSideTicks:(double)a0;
- (void)configureTicksForStatus:(BOOL)a0;
- (void)applyZoomFraction:(double)a0;

@end
