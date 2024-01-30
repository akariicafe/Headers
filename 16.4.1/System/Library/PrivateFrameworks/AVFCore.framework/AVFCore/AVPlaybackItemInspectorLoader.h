@class NSArray;

@interface AVPlaybackItemInspectorLoader : AVAssetMakeReadyForInspectionLoader {
    struct OpaqueFigPlaybackItem { } *_playbackItem;
    NSArray *_trackIDs;
    BOOL _shouldCacheDuration;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _cachedDuration;
}

@property (readonly, nonatomic, getter=_playbackItem) struct OpaqueFigPlaybackItem { } *playbackItem;

- (void)cancelLoading;
- (Class)_classForTrackInspectors;
- (id)initWithURL:(id)a0 playbackItem:(struct OpaqueFigPlaybackItem { } *)a1 trackIDs:(id)a2 dynamicBehavior:(BOOL)a3;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (BOOL)_inspectionRequiresAFormatReader;
- (void)_removeFigObjectNotifications;
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)a0;
- (void)_addFigObjectNotifications;
- (struct OpaqueFigFormatReader { } *)_copyFormatReaderFromFigObjectWithFigErrorCode:(int *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)_playbackItemPropertiesForKeys:(id)a0;
- (unsigned long long)hash;
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;
- (id)assetInspector;

@end
