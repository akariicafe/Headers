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

+ (id)sdofImageAssetWithURL:(id)a0;
+ (id)movieAssetWithURL:(id)a0;
+ (id)livePhotoAssetWithImageURL:(id)a0 andMovieURL:(id)a1;
+ (id)imageAssetWithURL:(id)a0;

- (long long)mediaType;
- (id)exif;
- (id)movie;
- (id)modificationDate;
- (unsigned long long)mediaSubtypes;
- (void).cxx_destruct;
- (id)mainFileURL;
- (id)initWithImageURL:(id)a0 isSDOF:(BOOL)a1;
- (id)initWithImageURL:(id)a0 andMovieURL:(id)a1;
- (id)initWithMovieURL:(id)a0;
- (id)scenes;
- (double)duration;
- (unsigned long long)pixelHeight;
- (struct __CVBuffer { } *)imageWithPreferredDimension:(unsigned long long)a0;
- (float)photoOffsetSeconds;
- (float)originalPhotoOffsetSeconds;
- (float)slowmoRate;
- (id)originalMovie;
- (unsigned long long)pixelWidth;

@end
