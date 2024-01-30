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
+ (id)movieWithURL:(id)a0 options:(id)a1;
+ (id)movieWithData:(id)a0 options:(id)a1;
+ (BOOL)expectsPropertyRevisedNotifications;

- (id)_initWithFigAsset:(struct OpaqueFigAsset { } *)a0;
- (Class)_classForTrackInspectors;
- (id)_assetInspectorLoader;
- (id)initWithURL:(id)a0 options:(id)a1;
- (id)tracksWithMediaType:(id)a0;
- (id)_absoluteURL;
- (void)_stopListeningToLoaderNotifications;
- (Class)_classForMovieTracks;
- (id)trackWithTrackID:(int)a0;
- (BOOL)hasProtectedContent;
- (BOOL)isCompatibleWithFileType:(id)a0;
- (id)_assetInspector;
- (id)initWithData:(id)a0 options:(id)a1;
- (struct OpaqueFigMutableMovie { } *)_figMutableMovie;
- (id)trackReferences;
- (struct OpaqueFigFormatReader { } *)_formatReader;
- (id)_initializationOptions;
- (id)tracksWithMediaCharacteristic:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (struct OpaqueFigMutableMovie { } *)_mutableMovieForFileType:(id)a0;
- (void).cxx_destruct;
- (void)_startListeningToLoaderNotifications;
- (id)init;
- (BOOL)writeMovieHeaderToURL:(id)a0 fileType:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)movieHeaderWithFileType:(id)a0 error:(id *)a1;
- (id)initWithData:(id)a0 contentType:(id)a1 options:(id)a2;
- (id)_initWithFigError:(int)a0 userInfo:(id)a1;
- (unsigned long long)referenceRestrictions;
- (void)dealloc;
- (id)_initWithFormatReader:(struct OpaqueFigFormatReader { } *)a0 URL:(id)a1 data:(id)a2 options:(id)a3;
- (struct OpaqueFigMutableMovie { } *)_figMutableMovieFromFormatReader:(struct OpaqueFigFormatReader { } *)a0;

@end
