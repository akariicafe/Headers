@class AVWeakReference;

@interface AVTrackReaderInspector : AVAssetTrackInspector {
    struct OpaqueFigFormatReader { } *_formatReader;
    struct OpaqueFigTrackReader { } *_trackReader;
    int _trackID;
    unsigned int _mediaType;
    AVWeakReference *_weakReferenceToAsset;
}

- (float)preferredVolume;
- (int)trackID;
- (id)availableMetadataFormats;
- (int)playabilityValidationResult;
- (id)mediaType;
- (BOOL)requiresFrameReordering;
- (long long)defaultAlternateGroupID;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (struct CGSize { double x0; double x1; })naturalSize;
- (id)_initWithAsset:(id)a0 trackID:(int)a1 trackIndex:(long long)a2;
- (id)_trackReferences;
- (long long)layer;
- (id)asset;
- (long long)provisionalAlternateGroupID;
- (BOOL)isDecodable;
- (float)peakDataRate;
- (void)dealloc;
- (id)mediaCharacteristics;
- (id)extendedLanguageTag;
- (int)naturalTimeScale;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })latentBaseDecodeTimeStampOfFirstTrackFragment;
- (float)nominalFrameRate;
- (unsigned long long)hash;
- (id)languageCode;
- (int)decodabilityValidationResult;
- (id)segmentForTrackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct CGSize { double x0; double x1; })dimensions;
- (id)segments;
- (BOOL)isExcludedFromAutoselectionInTrackGroup;
- (float)estimatedDataRate;
- (long long)alternateGroupID;
- (BOOL)isEqual:(id)a0;
- (id)loudnessInfo;
- (long long)totalSampleDataLength;
- (id)metadataForFormat:(id)a0;
- (id)commonMetadata;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (BOOL)isPlayable;
- (struct OpaqueFigTrackReader { } *)_figTrackReader;
- (BOOL)isSelfContained;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minSampleDuration;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (BOOL)hasAudioSampleDependencies;
- (BOOL)isEnabled;
- (unsigned int)_figMediaType;
- (id)formatDescriptions;

@end
