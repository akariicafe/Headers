@class AVDispatchOnce, AVWeakReference;

@interface AVTrackReaderInspector : AVAssetTrackInspector {
    struct OpaqueFigFormatReader { } *_formatReader;
    struct OpaqueFigTrackReader { } *_trackReader;
    AVDispatchOnce *_copySampleCursorServiceOnce;
    struct OpaqueFigSampleCursorService { } *_figSampleCursorService;
    BOOL _sampleCursorTimeAccuracyIsExact;
    int _trackID;
    unsigned int _mediaType;
    AVWeakReference *_weakReferenceToAsset;
}

- (id)segments;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (int)trackID;
- (float)preferredVolume;
- (BOOL)isPlayable;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (struct CGSize { double x0; double x1; })naturalSize;
- (float)nominalFrameRate;
- (long long)provisionalAlternateGroupID;
- (id)mediaType;
- (id)formatDescriptions;
- (int)decodabilityValidationResult;
- (BOOL)isEnabled;
- (id)metadataForFormat:(id)a0;
- (BOOL)isSelfContained;
- (BOOL)hasAudioSampleDependencies;
- (id)_trackReferences;
- (id)loudnessInfo;
- (id)availableMetadataFormats;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })latentBaseDecodeTimeStampOfFirstTrackFragment;
- (id)asset;
- (BOOL)requiresFrameReordering;
- (id)segmentForTrackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)languageCode;
- (unsigned int)_figMediaType;
- (id)commonMetadata;
- (BOOL)isEqual:(id)a0;
- (id)mediaCharacteristics;
- (struct OpaqueFigTrackReader { } *)_figTrackReader;
- (int)playabilityValidationResult;
- (long long)layer;
- (float)estimatedDataRate;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minSampleDuration;
- (long long)defaultAlternateGroupID;
- (BOOL)isExcludedFromAutoselectionInTrackGroup;
- (unsigned long long)hash;
- (void)dealloc;
- (id)_initWithAsset:(id)a0 trackID:(int)a1 trackIndex:(long long)a2;
- (id)extendedLanguageTag;
- (float)peakDataRate;
- (struct CGSize { double x0; double x1; })dimensions;
- (long long)totalSampleDataLength;
- (int)naturalTimeScale;
- (long long)alternateGroupID;
- (BOOL)isDecodable;
- (struct OpaqueFigSampleCursorService { } *)_getFigSampleCursorServiceReportingTimeAccuracy:(BOOL *)a0;

@end
