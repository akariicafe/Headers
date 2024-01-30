@interface NTKAnalogUtilities : NSObject

+ (struct CGSize { double x0; double x1; })sceneSizeForDevice:(id)a0;
+ (struct CGSize { double x0; double x1; })dialSizeForDevice:(id)a0;
+ (id)labelsForDevice:(id)a0 faceStyle:(long long)a1 count:(unsigned int)a2 start:(unsigned int)a3 multiple:(unsigned int)a4 repeat:(unsigned int)a5 fontSize:(double)a6 radius:(double)a7 paddedWithZeroes:(BOOL)a8;
+ (id)labelsForDevice:(id)a0 withCount:(unsigned int)a1 start:(unsigned int)a2 multiple:(unsigned int)a3 repeat:(unsigned int)a4 font:(long long)a5 modifier:(id)a6 center:(struct CGPoint { double x0; double x1; })a7 radius:(double)a8 paddedWithZeros:(BOOL)a9 filter:(BOOL)a10;
+ (void)colorizeLabels:(id)a0 color:(id)a1;
+ (id)circularMaskShader;
+ (BOOL)shouldPreloadTextures;
+ (void)preloadTexturesForDevice:(id)a0;
+ (void)fadeNodes:(id)a0 alpha:(double)a1 except:(id)a2;
+ (void)scaleNodes:(id)a0 scale:(double)a1 andResetNodesAtIndices:(id)a2;
+ (void)updateNodes:(id)a0 forDevice:(id)a1 offset:(unsigned long long)a2 center:(struct CGPoint { double x0; double x1; })a3 radius:(double)a4 angleMultiplier:(double)a5 scale:(double)a6 rotate:(BOOL)a7 round:(BOOL)a8;

@end
