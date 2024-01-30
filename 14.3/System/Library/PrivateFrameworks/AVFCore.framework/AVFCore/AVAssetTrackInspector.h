@class NSString, NSArray, NSDictionary, NSLocale, AVWeakReference, AVDispatchOnce;

@interface AVAssetTrackInspector : AVFigObjectInspector <AVAsynchronousKeyValueLoading> {
    AVWeakReference *_weakReference;
    AVDispatchOnce *_synthesizeMediaCharacteristicsOnce;
    NSArray *_cachedMediaCharacteristics;
}

@property (readonly, nonatomic) int trackID;
@property (readonly, nonatomic, getter=_figMediaType) unsigned int figMediaType;
@property (readonly, nonatomic, getter=_figTrackReader) struct OpaqueFigTrackReader { } *figTrackReader;
@property (readonly, nonatomic, getter=_figAssetTrack) struct OpaqueFigAssetTrack { } *figAssetTrack;
@property (readonly, nonatomic) NSString *mediaType;
@property (readonly, nonatomic) NSArray *formatDescriptions;
@property (readonly, nonatomic, getter=isPlayable) BOOL playable;
@property (readonly, nonatomic, getter=isDecodable) BOOL decodable;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic, getter=isSelfContained) BOOL selfContained;
@property (readonly, nonatomic) long long totalSampleDataLength;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } mediaPresentationTimeRange;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } mediaDecodeTimeRange;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } latentBaseDecodeTimeStampOfFirstTrackFragment;
@property (readonly, nonatomic) BOOL requiresFrameReordering;
@property (readonly, nonatomic) int naturalTimeScale;
@property (readonly, nonatomic) float estimatedDataRate;
@property (readonly, nonatomic) float peakDataRate;
@property (readonly, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) NSArray *mediaCharacteristics;
@property (readonly, nonatomic) NSString *extendedLanguageTag;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } naturalSize;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } preferredTransform;
@property (readonly, nonatomic) long long layer;
@property (readonly, nonatomic) float preferredVolume;
@property (readonly, nonatomic) BOOL hasAudioSampleDependencies;
@property (readonly, nonatomic) NSDictionary *loudnessInfo;
@property (readonly, nonatomic) float nominalFrameRate;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } minSampleDuration;
@property (readonly, copy, nonatomic) NSArray *segments;
@property (readonly, nonatomic) NSArray *commonMetadata;
@property (readonly, nonatomic) NSArray *availableMetadataFormats;
@property (readonly, nonatomic) long long alternateGroupID;
@property (readonly, nonatomic) long long defaultAlternateGroupID;
@property (readonly, nonatomic) long long provisionalAlternateGroupID;
@property (readonly, nonatomic, getter=isExcludedFromAutoselectionInTrackGroup) BOOL excludedFromAutoselectionInTrackGroup;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } dimensions;
@property (readonly, nonatomic, getter=_trackReferences) NSDictionary *trackReferences;
@property (readonly, nonatomic) BOOL hasProtectedContent;
@property (readonly, nonatomic) BOOL hasAudibleBooksContent;
@property (readonly, nonatomic) BOOL isAudibleBooksContentAuthorized;
@property (readonly, nonatomic) int playabilityValidationResult;
@property (readonly, nonatomic) BOOL segmentsExcludeAudioPrimingAndRemainderDurations;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } gaplessSourceTimeRange;
@property (readonly, copy, nonatomic) NSArray *segmentsAsPresented;

+ (id)assetTrackInspectorWithAsset:(id)a0 trackID:(int)a1 trackIndex:(long long)a2;

- (id)init;
- (id)_initWithAsset:(id)a0 trackID:(int)a1 trackIndex:(long long)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (void)dealloc;
- (id)segmentForTrackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (id)_weakReference;
- (id)metadataForFormat:(id)a0;
- (id)_initWithAsset:(id)a0 trackID:(int)a1;
- (id)_initWithAsset:(id)a0 trackIndex:(long long)a1;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })samplePresentationTimeForTrackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
