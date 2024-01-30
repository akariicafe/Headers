@class AVAsset, NSURL;

@interface VideoMovie : Movie <NSCoding, NSCopying>

@property (retain, nonatomic) AVAsset *watermarkedAVAsset;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } naturalSize;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transform;
@property (readonly, nonatomic) float frameRate;
@property (nonatomic) struct CGSize { double width; double height; } cachedNaturalSize;
@property (nonatomic) struct CGSize { double width; double height; } cachedEncodedPixelSize;
@property (nonatomic) float cachedFrameRate;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } cachedTransform;
@property (nonatomic) unsigned int cachedCodec4cc;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cachedCleanAperture;
@property (nonatomic) int cachedDuration;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } cachedPreciseAssetDuration;
@property (nonatomic) unsigned long long cachedVideoTrackCount;
@property (nonatomic) unsigned long long cachedAudioTrackCount;
@property (nonatomic) unsigned long long cachedAudioTrackChannels;
@property (nonatomic) BOOL cachedAssetInformationValid;
@property (nonatomic) BOOL cacheMovieIsPlayable;
@property (nonatomic) BOOL cacheWillDieDuringLoad;
@property (retain, nonatomic) AVAsset *weakAVAsset;
@property (copy, nonatomic) NSURL *audioProxyURL;
@property (nonatomic) BOOL audioProxyExists;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cleanAperture;

- (double)durationInSeconds;
- (id)initWithPath:(id)a0;
- (id)avAsset;
- (void)updateMetadata;
- (BOOL)isMono;
- (id)description;
- (void).cxx_destruct;
- (unsigned int)videoCodec;
- (int)duration;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasVideoTracks;
- (BOOL)hasAudioTracks;
- (struct CGSize { double x0; double x1; })naturalSizeWithTransform;
- (void)mediaserverdCrashed;
- (void)cacheAssetInformation;
- (void)loadAVAssetWithCompletionHandler:(id /* block */)a0;
- (void)updateLocation;
- (id)loadAVAsset;
- (void)loadAVPlayerItemWithCompletionHander:(id /* block */)a0 progressHandler:(id /* block */)a1 networkAccessAllowed:(BOOL)a2;
- (struct CGSize { double x0; double x1; })encodedPixelSize;
- (void)updateAssetAvailability;
- (id)initWithIdentifierURL:(id)a0;
- (BOOL)isUnsupportedFormat;
- (id)initWithIdentifierURL:(id)a0 asset:(id)a1 userInfo:(id)a2;
- (void)cacheVideoTrackInformationOfAsset:(id)a0;
- (void)cacheAudioTrackFormatInformationOfAsset:(id)a0;
- (void)resetCachedAssetInformation;
- (void)updateCreationDate;
- (id)initWithIdentifierURL:(id)a0 asset:(id)a1;
- (id)thumbnailImageWithSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)renderedAdjustmentsExist;
- (void)cacheAssetInformationWithCompletionHandler:(id /* block */)a0;
- (struct CGSize { double x0; double x1; })encodedPixelSizeWithTransform;

@end
