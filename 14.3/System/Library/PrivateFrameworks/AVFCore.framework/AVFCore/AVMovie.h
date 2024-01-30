@class NSArray, NSURL, NSData, AVMediaDataStorage, AVMovieInternal;

@interface AVMovie : AVAsset <NSCopying, NSMutableCopying> {
    AVMovieInternal *_movie;
}

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) AVMediaDataStorage *defaultMediaDataStorage;
@property (readonly, nonatomic) NSArray *tracks;
@property (readonly, nonatomic) BOOL canContainMovieFragments;
@property (readonly, nonatomic) BOOL containsMovieFragments;

+ (void)initialize;
+ (id)movieTypes;
+ (id)movieWithData:(id)a0 options:(id)a1;
+ (id)movieWithURL:(id)a0 options:(id)a1;
+ (BOOL)expectsPropertyRevisedNotifications;

- (id)init;
- (struct OpaqueFigFormatReader { } *)_formatReader;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (Class)_classForMovieTracks;
- (id)description;
- (struct OpaqueFigMutableMovie { } *)_figMutableMovie;
- (id)initWithData:(id)a0 options:(id)a1;
- (Class)_classForTrackInspectors;
- (id)trackWithTrackID:(int)a0;
- (void)_startListeningToLoaderNotifications;
- (id)_initWithFormatReader:(struct OpaqueFigFormatReader { } *)a0 URL:(id)a1 data:(id)a2 options:(id)a3;
- (void)_stopListeningToLoaderNotifications;
- (id)_initWithFigAsset:(struct OpaqueFigAsset { } *)a0;
- (id)_initWithFigError:(int)a0 userInfo:(id)a1;
- (struct OpaqueFigMutableMovie { } *)_figMutableMovieFromFormatReader:(struct OpaqueFigFormatReader { } *)a0;
- (struct OpaqueFigMutableMovie { } *)_mutableMovieForFileType:(id)a0;
- (id)movieHeaderWithFileType:(id)a0 error:(id *)a1;
- (BOOL)writeMovieHeaderToURL:(id)a0 fileType:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (BOOL)isCompatibleWithFileType:(id)a0;
- (id)initWithData:(id)a0 contentType:(id)a1 options:(id)a2;
- (id)_assetInspectorLoader;
- (id)_assetInspector;
- (id)tracksWithMediaType:(id)a0;
- (id)_absoluteURL;
- (unsigned long long)referenceRestrictions;
- (id)tracksWithMediaCharacteristic:(id)a0;
- (id)_initializationOptions;
- (id)trackReferences;
- (BOOL)hasProtectedContent;
- (id)initWithURL:(id)a0 options:(id)a1;

@end
