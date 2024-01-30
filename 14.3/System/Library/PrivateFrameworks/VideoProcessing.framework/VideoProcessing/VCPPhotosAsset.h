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

- (id)localIdentifier;
- (id)fingerprint;
- (long long)mediaType;
- (id)exif;
- (id)movie;
- (id)modificationDate;
- (unsigned long long)mediaSubtypes;
- (void).cxx_destruct;
- (id)mainFileURL;
- (id)scenes;
- (double)duration;
- (id)initWithPHAsset:(id)a0;
- (unsigned long long)pixelHeight;
- (struct __CVBuffer { } *)imageWithPreferredDimension:(unsigned long long)a0;
- (float)photoOffsetSeconds;
- (float)originalPhotoOffsetSeconds;
- (float)slowmoRate;
- (id)streamedMovie;
- (id)originalMovie;
- (struct CGSize { double x0; double x1; })originalMovieSize;
- (unsigned long long)pixelWidth;

@end
