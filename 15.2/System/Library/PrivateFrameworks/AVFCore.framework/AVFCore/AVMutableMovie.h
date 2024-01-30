@class NSArray, AVMediaDataStorage, AVMutableMovieInternal;

@interface AVMutableMovie : AVMovie {
    AVMutableMovieInternal *_mutableMovieInternal;
}

@property (nonatomic, getter=isModified) BOOL modified;
@property (copy, nonatomic) AVMediaDataStorage *defaultMediaDataStorage;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } interleavingPeriod;
@property (copy, nonatomic) NSArray *metadata;
@property (nonatomic) float preferredRate;
@property (nonatomic) float preferredVolume;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } preferredTransform;
@property (nonatomic) int timescale;
@property (readonly, nonatomic) NSArray *tracks;

+ (id)movieWithData:(id)a0 options:(id)a1 error:(id *)a2;
+ (id)movieWithSettingsFromMovie:(id)a0 options:(id)a1 error:(id *)a2;
+ (BOOL)expectsPropertyRevisedNotifications;
+ (id)movieWithURL:(id)a0 options:(id)a1 error:(id *)a2;

- (id)_initWithFigAsset:(struct OpaqueFigAsset { } *)a0;
- (id)fileType;
- (Class)_classForTrackInspectors;
- (id)initWithURL:(id)a0 options:(id)a1;
- (id)tracksWithMediaType:(id)a0;
- (id)trackWithTrackID:(int)a0;
- (id)initWithData:(id)a0 options:(id)a1;
- (struct OpaqueFigMutableMovie { } *)_figMutableMovie;
- (id)trackReferences;
- (struct OpaqueFigFormatReader { } *)_formatReader;
- (void)_addFigAssetNotifications;
- (id)_mutableTracks;
- (id)_initializationOptions;
- (void)removeTrack:(id)a0;
- (id)tracksWithMediaCharacteristic:(id)a0;
- (void)_signalTracksUpdated;
- (void)insertEmptyTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)_signalMetadataUpdated;
- (id)addMutableTrackWithMediaType:(id)a0 copySettingsFromTrack:(id)a1 options:(id)a2;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (id)metadataForFormat:(id)a0;
- (void)_removeFigAssetNotifications;
- (BOOL)insertTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 ofAsset:(id)a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 copySampleData:(BOOL)a3 error:(id *)a4;
- (id)description;
- (id)initWithFileType:(id)a0 copySettingsFromMovie:(id)a1 options:(id)a2;
- (id)availableMetadataFormats;
- (id)initWithURL:(id)a0 options:(id)a1 error:(id *)a2;
- (void)scaleTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 toDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void).cxx_destruct;
- (id)_addMutableTrackWithMediaType:(id)a0 copySettingsFromTrack:(id)a1 options:(id)a2;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (id)URL;
- (id)_initWithFigError:(int)a0 userInfo:(id)a1;
- (id)mutableTrackCompatibleWithTrack:(id)a0;
- (id)initWithSettingsFromMovie:(id)a0 options:(id)a1;
- (void)removeTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)addMutableTracksCopyingSettingsFromTracks:(id)a0 options:(id)a1;
- (void)dealloc;
- (id)_initWithFormatReader:(struct OpaqueFigFormatReader { } *)a0 URL:(id)a1 data:(id)a2 options:(id)a3;
- (id)data;
- (id)initWithSettingsFromMovie:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithData:(id)a0 options:(id)a1 error:(id *)a2;

@end
