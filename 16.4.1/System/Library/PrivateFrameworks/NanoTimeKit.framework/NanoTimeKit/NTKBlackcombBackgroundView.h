@class NSArray, NTKBlackcombColorPalette, CALayer, CLKDevice;

@interface NTKBlackcombBackgroundView : UIView {
    CLKDevice *_device;
    NTKBlackcombColorPalette *_palette;
    CALayer *_smallTickCoveringLayer;
    NSArray *_smallTicks;
    NSArray *_mediumTicks;
    NSArray *_largeTicks;
    BOOL _showingStatus;
}

@property (nonatomic) BOOL usesLongSideTicks;

- (void).cxx_destruct;
- (void)_applyBackgroundColor:(id)a0;
- (double)_innerDialRadiusAtLargeTick:(long long)a0 verticalLength:(double)a1 horizontalLength:(double)a2;
- (void)_layoutTopLargeTick;
- (double)_outerDialRadiusAtMediumTick:(long long)a0 verticalLength:(double)a1 horizontalLength:(double)a2;
- (void)_setupTicks;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_tickLayoutBounds;
- (void)applyPalette:(id)a0;
- (void)applyTransitionFraction:(double)a0 fromPalette:(id)a1 toPalette:(id)a2;
- (void)applyTransitionFractionToUsesLongSideTicks:(double)a0;
- (void)configureTicksForStatus:(BOOL)a0;
- (id)initForDevice:(id)a0;

@end
