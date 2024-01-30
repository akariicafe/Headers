@class NSArray;

@interface AVPlaybackItemInspectorLoader : AVAssetMakeReadyForInspectionLoader {
    struct OpaqueFigPlaybackItem { } *_playbackItem;
    NSArray *_trackIDs;
    BOOL _shouldCacheDuration;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _cachedDuration;
}

@property (readonly, nonatomic, getter=_playbackItem) struct OpaqueFigPlaybackItem { } *playbackItem;

- (Class)_classForTrackInspectors;
- (void)_removeFigObjectNotifications;
- (id)initWithURL:(id)a0 playbackItem:(struct OpaqueFigPlaybackItem { } *)a1 trackIDs:(id)a2 dynamicBehavior:(BOOL)a3;
- (struct OpaqueFigFormatReader { } *)_copyFormatReaderFromFigObjectWithFigErrorCode:(int *)a0;
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)a0;
- (id)assetInspector;
- (void)cancelLoading;
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;
- (BOOL)isEqual:(id)a0;
- (void)_addFigObjectNotifications;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (BOOL)_inspectionRequiresAFormatReader;
- (id)_playbackItemPropertiesForKeys:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
