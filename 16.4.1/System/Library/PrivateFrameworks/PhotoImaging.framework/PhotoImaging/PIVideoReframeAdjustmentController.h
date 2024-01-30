@class NSArray;

@interface PIVideoReframeAdjustmentController : PIAdjustmentController

@property (copy, nonatomic) NSArray *keyframes;
@property (nonatomic) struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; } stabCropRect;

+ (id)stabCropRectKey;
+ (id)keyframesKey;

- (BOOL)isEqual:(id)a0 forKeys:(id)a1;
- (id)copyKeyframesTrimmingToTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)pasteKeysForMediaType:(long long)a0;

@end
