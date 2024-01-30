@class CNMemojiBackgroundColor;

@interface CNMemojiBackgroundParameters : NSObject

@property (copy, nonatomic) CNMemojiBackgroundColor *contentColor;

+ (id)defaultBackgroundColorDescription;

- (id)description;
- (void).cxx_destruct;
- (id)initWithColorDescription:(id)a0;
- (id)colorLayerColorForIndex:(long long)a0;
- (id)backgroundLayerColorForIndex:(long long)a0;
- (id)topGradientLayerColorForIndex:(long long)a0;
- (long long)numberOfLayers;
- (long long)numberOfColorsForLayer:(long long)a0;
- (id)colorAtIndex:(long long)a0 forLayer:(long long)a1;
- (double)locationForColorAtIndex:(long long)a0 forLayer:(long long)a1;
- (struct CGPoint { double x0; double x1; })startPointForLayerAtIndex:(long long)a0;
- (struct CGPoint { double x0; double x1; })endPointForLayerAtIndex:(long long)a0;

@end
