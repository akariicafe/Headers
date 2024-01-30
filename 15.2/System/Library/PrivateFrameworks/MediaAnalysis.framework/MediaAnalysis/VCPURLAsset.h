@class NSMutableDictionary, NSDictionary, NSURL, AVURLAsset;

@interface VCPURLAsset : VCPAsset {
    NSURL *_imageURL;
    AVURLAsset *_movie;
    long long _mediaType;
    unsigned long long _mediaSubtypes;
    unsigned long long _pixelWidth;
    unsigned long long _pixelHeight;
    BOOL _onceExif;
    NSDictionary *_cachedExif;
    BOOL _onceScenes;
    NSMutableDictionary *_cachedScenes;
}

+ (id)movieAssetWithURL:(id)a0;
+ (id)livePhotoAssetWithImageURL:(id)a0 andMovieURL:(id)a1;
+ (id)imageAssetWithURL:(id)a0;
+ (id)sdofImageAssetWithURL:(id)a0;

- (id)modificationDate;
- (unsigned long long)pixelWidth;
- (id)movie;
- (unsigned long long)pixelHeight;
- (id)scenes;
- (long long)mediaType;
- (unsigned long long)mediaSubtypes;
- (id)exif;
- (void).cxx_destruct;
- (double)duration;
- (id)mainFileURL;
- (struct __CVBuffer { } *)imageWithPreferredDimension:(unsigned long long)a0;
- (float)photoOffsetSeconds;
- (float)originalPhotoOffsetSeconds;
- (float)slowmoRate;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })slomoRange;
- (id)originalMovie;
- (id)initWithImageURL:(id)a0 isSDOF:(BOOL)a1;
- (id)initWithImageURL:(id)a0 andMovieURL:(id)a1;
- (id)initWithMovieURL:(id)a0;

@end
