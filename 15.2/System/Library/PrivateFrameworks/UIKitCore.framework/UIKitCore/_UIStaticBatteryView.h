@interface _UIStaticBatteryView : _UIBatteryView {
    long long _inflightBoltAnimationCount;
}

+ (id)_imageWithRenderedBezierPath:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 pathScaleFactor:(double)a3 stroke:(BOOL)a4;
+ (id)_batteryBodyImageWithSize:(struct CGSize { double x0; double x1; })a0 forScale:(double)a1 batteryRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 cornerRadius:(double)a3 lineWidth:(double)a4;
+ (id)_batteryBoltMaskImageWithSize:(struct CGSize { double x0; double x1; })a0 boltSize:(struct CGSize { double x0; double x1; })a1 forScale:(double)a2;
+ (id)_imageByPunchingImage:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 flippedHorizontally:(BOOL)a2 outOfImage:(id)a3 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 size:(struct CGSize { double x0; double x1; })a5 scale:(double)a6;
+ (id)_batteryBoltImageWithSize:(struct CGSize { double x0; double x1; })a0 boltSize:(struct CGSize { double x0; double x1; })a1 forScale:(double)a2;
+ (id)_batteryFillImageWithSize:(struct CGSize { double x0; double x1; })a0 forScale:(double)a1 cornerRadius:(double)a2;
+ (id)_batteryPinImageWithSize:(struct CGSize { double x0; double x1; })a0 forScale:(double)a1 complexPinPath:(BOOL)a2;
+ (id)_batteryFillImageWithSize:(struct CGSize { double x0; double x1; })a0 forScale:(double)a1 cornerRadius:(double)a2 withBoltCutOutOfSize:(struct CGSize { double x0; double x1; })a3 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 boltFlipped:(BOOL)a5;
+ (id)_renderedImageOfSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 withActions:(id /* block */)a2;
+ (id)_batteryBodyImageWithSize:(struct CGSize { double x0; double x1; })a0 forScale:(double)a1 batteryRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 cornerRadius:(double)a3 lineWidth:(double)a4 withBoltCutOutOfSize:(struct CGSize { double x0; double x1; })a5 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 boltFlipped:(BOOL)a7;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boltRectForTraitCollection:(id)a0 boltSize:(struct CGSize { double x0; double x1; })a1;
- (void)_createBoltLayersWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)_updateBatteryFillColor;
- (void)_updateBodyColors;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_updateBodyLayers;
- (void)_willBeginAnimatingBoltToVisible:(BOOL)a0;
- (void)_didFinishAnimatingBoltToVisible:(BOOL)a0;
- (double)_batteryPathScaleFactor;
- (void)_createFillLayer;
- (BOOL)_useImagesWithCutoutsForBolt;
- (double)_batteryBoltLargeScaleFactor;
- (double)_batteryBoltSmallScaleFactor;
- (void)_updateFillLayer;
- (struct CGSize { double x0; double x1; })_boltPathSize;
- (void)_createBodyLayers;

@end
