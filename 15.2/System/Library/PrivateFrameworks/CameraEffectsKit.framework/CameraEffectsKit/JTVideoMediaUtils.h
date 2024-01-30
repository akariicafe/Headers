@class PVColorSpace;

@interface JTVideoMediaUtils : NSObject

@property (nonatomic) BOOL cachedAssetInformationValid;
@property (nonatomic) struct CGSize { double width; double height; } cachedNaturalSize;
@property (nonatomic) float cachedFrameRate;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } cachedTransform;
@property (nonatomic) unsigned int cachedCodec4cc;
@property (retain, nonatomic) PVColorSpace *cachedColorSpace;
@property (nonatomic) int cachedDurationAt30fps;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } cachedPreciseAssetDuration;
@property (nonatomic) unsigned long long cachedVideoTrackCount;
@property (nonatomic) unsigned long long cachedAudioTrackCount;
@property (nonatomic) BOOL cacheWillDieDuringLoad;

- (id)colorSpace;
- (void).cxx_destruct;
- (float)frameRate;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (BOOL)isUnsupportedAudio;
- (void)cacheTrackInformationWithAVAsset:(id)a0;
- (void)requestAVAssetAsyncWithAsset:(id)a0 needsDerivativeMedia:(BOOL)a1 frameRate:(float)a2 completion:(id /* block */)a3;
- (int)durationAt30fpsWithAssetDuration:(double)a0;
- (BOOL)isOriginalHEVC4k;
- (BOOL)hasAudibleCharacteristicWithIsMissing:(BOOL)a0;
- (struct CGSize { double x0; double x1; })naturalSizeWithIsMissing:(BOOL)a0 asset:(id)a1;
- (BOOL)hasVideoTracks;
- (BOOL)hasAudioTracks;
- (void)invalidateCachedAssetInformation;

@end
