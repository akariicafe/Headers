@class NSString, NSDictionary, NSURL, NSDate, VCPFingerprint;

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
@property (readonly, nonatomic) NSDictionary *scenes;

+ (void)unimplementedExceptionForMethodName:(id)a0;

- (id)typeDescription;
- (id)movie;
- (struct __CVBuffer { } *)imageWithPreferredDimension:(unsigned long long)a0;
- (id)streamedMovie;
- (id)originalMovie;
- (struct CGSize { double x0; double x1; })originalMovieSize;

@end
