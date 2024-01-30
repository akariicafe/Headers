@class NSArray, NSURL, AVMutableMovieTrackInternal, AVMediaDataStorage;

@interface AVMutableMovieTrack : AVMovieTrack {
    AVMutableMovieTrackInternal *_mutableMovieTrackInternal;
}

@property (readonly, nonatomic) NSArray *formatDescriptions;
@property (copy, nonatomic) NSArray *metadata;
@property (copy, nonatomic) AVMediaDataStorage *mediaDataStorage;
@property (copy, nonatomic) NSURL *sampleReferenceBaseURL;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) long long alternateGroupID;
@property (nonatomic, getter=isModified) BOOL modified;
@property (readonly, nonatomic) BOOL hasProtectedContent;
@property (nonatomic) int timescale;

+ (BOOL)expectsPropertyRevisedNotifications;
+ (id)trackWithTrackID:(int)a0 forMovie:(id)a1;

- (struct CGSize { double x0; double x1; })dimensions;
- (void)setPreferredMediaChunkDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setLayer:(long long)a0;
- (void)setNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (void)setPreferredVolume:(float)a0;
- (void)_signalMetadataUpdated;
- (void)setPreferredTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)metadataForFormat:(id)a0;
- (void)removeTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (struct OpaqueFigAssetTrack { } *)_figAssetTrack;
- (id)extendedLanguageTag;
- (struct CGSize { double x0; double x1; })naturalSize;
- (id)languageCode;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (long long)preferredMediaChunkAlignment;
- (void)setExtendedLanguageTag:(id)a0;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (void)setLanguageCode:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })mediaDecodeTimeRange;
- (id)availableMetadataFormats;
- (void)setPreferredMediaChunkAlignment:(long long)a0;
- (void)dealloc;
- (void)setPreferredMediaChunkSize:(long long)a0;
- (long long)layer;
- (void)scaleTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 toDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (float)preferredVolume;
- (long long)preferredMediaChunkSize;
- (id)description;
- (int)trackID;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })preferredMediaChunkDuration;
- (struct OpaqueFigMutableMovie { } *)_figMutableMovie;
- (void)insertEmptyTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void).cxx_destruct;
- (id)locale;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })mediaPresentationTimeRange;
- (void)_addFigAssetTrackNotifications;
- (void)_removeFigAssetTrackNotifications;
- (void)_setSize:(struct CGSize { double x0; double x1; })a0 forProperty:(struct __CFString { } *)a1;
- (void)_setString:(id)a0 forProperty:(struct __CFString { } *)a1;
- (struct CGSize { double x0; double x1; })_sizeForProperty:(struct __CFString { } *)a0;
- (id)_stringForProperty:(struct __CFString { } *)a0;
- (void)addTrackAssociationToTrack:(id)a0 type:(id)a1;
- (BOOL)appendMediaData:(id)a0 dataOffset:(long long *)a1;
- (BOOL)appendSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 decodeTime:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1 presentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a2 error:(id *)a3;
- (struct CGSize { double x0; double x1; })cleanApertureDimensions;
- (struct CGSize { double x0; double x1; })encodedPixelsDimensions;
- (id)initWithTrackID:(int)a0 forMovie:(id)a1;
- (BOOL)insertMediaTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 intoTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (BOOL)insertTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 ofTrack:(id)a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 copySampleData:(BOOL)a3 error:(id *)a4;
- (BOOL)isCompatibleWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0;
- (struct CGSize { double x0; double x1; })productionApertureDimensions;
- (void)removeTrackAssociationToTrack:(id)a0 type:(id)a1;
- (void)replaceFormatDescription:(struct opaqueCMFormatDescription { } *)a0 withFormatDescription:(struct opaqueCMFormatDescription { } *)a1;
- (void)setCleanApertureDimensions:(struct CGSize { double x0; double x1; })a0;
- (void)setEncodedPixelsDimensions:(struct CGSize { double x0; double x1; })a0;
- (void)setProductionApertureDimensions:(struct CGSize { double x0; double x1; })a0;

@end
