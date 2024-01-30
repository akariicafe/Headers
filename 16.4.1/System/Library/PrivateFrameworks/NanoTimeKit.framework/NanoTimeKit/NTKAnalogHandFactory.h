@interface NTKAnalogHandFactory : NSObject

+ (id)_renderQueue;
+ (id)_getHandImageWithConfiguration:(id)a0;
+ (id)_createHandImageWithSize:(struct CGSize { double x0; double x1; })a0 paths:(id)a1 colors:(id)a2;
+ (id)_createMaskedShadowImageFromShadow:(id)a0 size:(struct CGSize { double x0; double x1; })a1 maskPath:(struct CGPath { } *)a2 radius:(double)a3 opacity:(double)a4;
+ (id)_createShadowImageSize:(struct CGSize { double x0; double x1; })a0 path:(struct CGPath { } *)a1 radius:(double)a2 opacity:(double)a3;
+ (id)_getDropShadowImageWithConfiguration:(id)a0;
+ (id)_getMaskedDropShadowImageWithConfiguration:(id)a0 shadowImage:(id)a1;
+ (id)_getRadialShadowImageWithConfiguration:(id)a0;
+ (id)_getShadowImageWithConfiguration:(id)a0 radius:(double)a1 opacity:(double)a2 key:(id)a3;
+ (id)getAssets:(unsigned long long)a0 forConfiguration:(id)a1;
+ (struct CGPath { } *)newPathForHourMinuteWithConfiguration:(id)a0 inset:(double)a1 includePeg:(BOOL)a2;
+ (struct CGPath { } *)newPathForPeg:(id)a0 inset:(double)a1;
+ (struct CGPath { } *)newPathForSecondWithConfiguration:(id)a0 inset:(double)a1;
+ (struct CGPath { } *)newPathWithConfiguration:(id)a0;

@end
