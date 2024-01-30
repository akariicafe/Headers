@class NSArray, NSDictionary, NSMutableDictionary, PHAsset;

@interface VCPPhotosAsset : VCPAsset {
    PHAsset *_asset;
    NSArray *_cachedResources;
    BOOL _onceExif;
    NSDictionary *_cachedExif;
    BOOL _onceScenes;
    NSMutableDictionary *_cachedScenes;
}

@property (readonly, nonatomic) NSArray *resources;

+ (id)assetWithPHAsset:(id)a0;

- (id)allScenes;
- (id)modificationDate;
- (id)scenes;
- (id)fingerprint;
- (double)duration;
- (long long)mediaType;
- (unsigned long long)mediaSubtypes;
- (id)faces;
- (void).cxx_destruct;
- (id)localIdentifier;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;
- (id)movie;
- (id)mainFileURL;
- (id)exif;
- (struct __CVBuffer { } *)imageWithPreferredDimension:(unsigned long long)a0;
- (struct __CVBuffer { } *)imageWithPreferredDimension:(unsigned long long)a0 orientation:(unsigned int *)a1;
- (id)initWithPHAsset:(id)a0;
- (BOOL)isMovieResourceLocalAvailable;
- (id)originalMovie;
- (struct CGSize { double x0; double x1; })originalMovieSize;
- (float)originalPhotoOffsetSeconds;
- (float)photoOffsetSeconds;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })slomoRange;
- (float)slowmoRate;
- (id)streamedMovie;

@end
