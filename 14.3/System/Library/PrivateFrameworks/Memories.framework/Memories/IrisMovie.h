@interface IrisMovie : VideoMovie

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } cachedPreciseAssetStart;
@property (readonly, nonatomic) BOOL front;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })startTime;
- (int)duration;
- (void)cacheVideoTrackInformationOfAsset:(id)a0;
- (id)initWithIdentifierURL:(id)a0 asset:(id)a1 front:(BOOL)a2;

@end
