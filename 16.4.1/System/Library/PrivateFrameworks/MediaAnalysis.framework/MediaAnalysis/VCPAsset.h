@class PHFetchResult, NSString, NSDictionary, NSURL, NSDate, VCPFingerprint, NSArray;

@interface VCPAsset : NSObject

@property (readonly, nonatomic) BOOL isPano;
@property (readonly, nonatomic) BOOL isLivePhoto;
@property (readonly, nonatomic) BOOL isScreenshot;
@property (readonly, nonatomic) BOOL isHDR;
@property (readonly, nonatomic) BOOL isSDOF;
@property (readonly, nonatomic) NSDictionary *exif;
@property (readonly, nonatomic) BOOL hadFlash;
@property (readonly, nonatomic) float exposureTimeSeconds;
@property (readonly, nonatomic) float photoOffsetSeconds;
@property (readonly, nonatomic) float originalPhotoOffsetSeconds;
@property (readonly, nonatomic) BOOL isSlowmo;
@property (readonly, nonatomic) BOOL isTimelapse;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) float slowmoRate;
@property (readonly, nonatomic) float timelapseRate;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } slomoRange;
@property (readonly, nonatomic) long long mediaType;
@property (readonly, nonatomic) unsigned long long mediaSubtypes;
@property (readonly, nonatomic) unsigned long long pixelWidth;
@property (readonly, nonatomic) unsigned long long pixelHeight;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) VCPFingerprint *fingerprint;
@property (readonly, nonatomic) BOOL isImage;
@property (readonly, nonatomic) BOOL isMovie;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) NSURL *mainFileURL;
@property (readonly, nonatomic) NSArray *allScenes;
@property (readonly, nonatomic) NSDictionary *scenes;
@property (readonly, nonatomic) PHFetchResult *faces;

+ (void)unimplementedExceptionForMethodName:(id)a0;

- (id)typeDescription;
- (id)movie;
- (struct __CVBuffer { } *)imageWithPreferredDimension:(unsigned long long)a0;
- (struct __CVBuffer { } *)imageWithPreferredDimension:(unsigned long long)a0 orientation:(unsigned int *)a1;
- (BOOL)isMovieResourceLocalAvailable;
- (id)originalMovie;
- (struct CGSize { double x0; double x1; })originalMovieSize;
- (id)streamedMovie;

@end
