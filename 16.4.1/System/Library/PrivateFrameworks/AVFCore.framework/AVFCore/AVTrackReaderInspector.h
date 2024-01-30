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

- (id)commonMetadata;
- (id)segments;
- (struct CGSize { double x0; double x1; })dimensions;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })latentBaseDecodeTimeStampOfFirstTrackFragment;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (BOOL)isPlayable;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (id)segmentForTrackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)metadataForFormat:(id)a0;
- (id)extendedLanguageTag;
- (struct CGSize { double x0; double x1; })naturalSize;
- (struct OpaqueFigTrackReader { } *)_figTrackReader;
- (BOOL)requiresFrameReordering;
- (id)languageCode;
- (int)playabilityValidationResult;
- (id)loudnessInfo;
- (float)nominalFrameRate;
- (BOOL)isSelfContained;
- (int)naturalTimeScale;
- (BOOL)isEnabled;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (BOOL)isDecodable;
- (id)availableMetadataFormats;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minSampleDuration;
- (float)peakDataRate;
- (id)mediaType;
- (long long)provisionalAlternateGroupID;
- (long long)alternateGroupID;
- (void)dealloc;
- (long long)layer;
- (BOOL)isEqual:(id)a0;
- (id)_initWithAsset:(id)a0 trackID:(int)a1 trackIndex:(long long)a2;
- (id)_trackReferences;
- (id)formatDescriptions;
- (unsigned long long)hash;
- (BOOL)isExcludedFromAutoselectionInTrackGroup;
- (long long)totalSampleDataLength;
- (float)preferredVolume;
- (int)decodabilityValidationResult;
- (id)asset;
- (float)estimatedDataRate;
- (int)trackID;
- (struct OpaqueFigSampleCursorService { } *)_getFigSampleCursorServiceReportingTimeAccuracy:(BOOL *)a0;
- (long long)defaultAlternateGroupID;
- (unsigned int)_figMediaType;
- (BOOL)hasAudioSampleDependencies;
- (id)mediaCharacteristics;

@end
