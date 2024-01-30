@interface PILivePhotoKeyFrameAdjustmentController : PIAdjustmentController

@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } keyFrameTime;

+ (id)timeKey;
+ (id)scaleKey;

- (id)initWithAdjustment:(id)a0;
- (id)pasteKeysForMediaType:(long long)a0;

@end
