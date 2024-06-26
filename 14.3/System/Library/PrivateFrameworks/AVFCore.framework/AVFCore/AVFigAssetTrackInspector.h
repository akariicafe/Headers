@class AVDispatchOnce, AVWeakReference, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AVFigAssetTrackInspector : AVAssetTrackInspector {
    struct OpaqueFigAsset { } *_figAsset;
    struct OpaqueFigAssetTrack { } *_figAssetTrack;
    AVDispatchOnce *_copyFigFormatReaderOnce;
    struct OpaqueFigFormatReader { } *_figFormatReader;
    AVDispatchOnce *_copyFigTrackReaderOnce;
    struct OpaqueFigTrackReader { } *_figTrackReader;
    struct OpaqueFigSimpleMutex { } *_loadingMutex;
    NSObject<OS_dispatch_queue> *_completionHandlerQueue;
    NSMutableArray *_loadingBatches;
    unsigned int _mediaType;
    AVWeakReference *_weakReferenceToAsset;
}

- (float)preferredVolume;
- (int)trackID;
- (id)availableMetadataFormats;
- (int)playabilityValidationResult;
- (void)_invokeCompletionHandlerForLoadingBatches:(id)a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })mediaDecodeTimeRange;
- (id)mediaType;
- (BOOL)requiresFrameReordering;
- (long long)defaultAlternateGroupID;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (struct CGSize { double x0; double x1; })naturalSize;
- (id)_initWithAsset:(id)a0 trackID:(int)a1 trackIndex:(long long)a2;
- (id)_loadingBatches;
- (void)_removeFigNotifications;
- (id)_trackReferences;
- (long long)layer;
- (id)asset;
- (BOOL)hasAudibleBooksContent;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (long long)provisionalAlternateGroupID;
- (BOOL)isDecodable;
- (float)peakDataRate;
- (void)dealloc;
- (id)extendedLanguageTag;
- (int)naturalTimeScale;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)a0;
- (void)_addFigNotifications;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })latentBaseDecodeTimeStampOfFirstTrackFragment;
- (float)nominalFrameRate;
- (unsigned long long)hash;
- (BOOL)segmentsExcludeAudioPrimingAndRemainderDurations;
- (id)languageCode;
- (int)decodabilityValidationResult;
- (id)segmentForTrackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct CGSize { double x0; double x1; })dimensions;
- (id)segments;
- (BOOL)isExcludedFromAutoselectionInTrackGroup;
- (id)_segmentsForProperty:(struct __CFString { } *)a0;
- (long long)_loadStatusForFigAssetTrackProperty:(id)a0 error:(id *)a1;
- (float)estimatedDataRate;
- (long long)alternateGroupID;
- (BOOL)isEqual:(id)a0;
- (id)segmentsAsPresented;
- (id)loudnessInfo;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (long long)totalSampleDataLength;
- (id)metadataForFormat:(id)a0;
- (BOOL)isAudibleBooksContentAuthorized;
- (struct OpaqueFigSimpleMutex { } *)_loadingMutex;
- (id)commonMetadata;
- (struct OpaqueFigFormatReader { } *)_figFormatReader;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })mediaPresentationTimeRange;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (BOOL)isPlayable;
- (struct OpaqueFigTrackReader { } *)_figTrackReader;
- (struct OpaqueFigAssetTrack { } *)_figAssetTrack;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })gaplessSourceTimeRange;
- (BOOL)isSelfContained;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minSampleDuration;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (BOOL)isEnabled;
- (BOOL)hasProtectedContent;
- (unsigned int)_figMediaType;
- (id)formatDescriptions;

@end
