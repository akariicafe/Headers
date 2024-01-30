@interface PITrimAdjustmentController : PIAdjustmentController

@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } startTime;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } endTime;

+ (id)endKey;
+ (id)endScaleKey;
+ (id)startKey;
+ (id)startScaleKey;

- (id)pasteKeysForMediaType:(long long)a0;

@end
