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

- (id)modificationDate;
- (unsigned long long)pixelWidth;
- (id)movie;
- (unsigned long long)pixelHeight;
- (id)allScenes;
- (id)scenes;
- (long long)mediaType;
- (unsigned long long)mediaSubtypes;
- (id)exif;
- (id)localIdentifier;
- (void).cxx_destruct;
- (double)duration;
- (id)mainFileURL;
- (id)faces;
- (id)fingerprint;
- (id)initWithPHAsset:(id)a0;
- (struct __CVBuffer { } *)imageWithPreferredDimension:(unsigned long long)a0;
- (float)photoOffsetSeconds;
- (float)originalPhotoOffsetSeconds;
- (float)slowmoRate;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })slomoRange;
- (id)streamedMovie;
- (id)originalMovie;
- (struct CGSize { double x0; double x1; })originalMovieSize;

@end
