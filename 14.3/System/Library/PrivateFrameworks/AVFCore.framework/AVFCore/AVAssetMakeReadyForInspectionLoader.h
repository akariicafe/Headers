@class NSURL, AVAssetInspector, NSMutableArray;

@interface AVAssetMakeReadyForInspectionLoader : AVAssetInspectorLoader {
    AVAssetInspector *_assetInspector;
    struct OpaqueFigFormatReader { } *_formatReader;
    struct OpaqueFigSimpleMutex { } *_loadingMutex;
    NSMutableArray *_keysAwaitingCompletion;
    long long _status;
    int _basicInspectionFailureCode;
    NSURL *_URL;
}

- (long long)_status;
- (id)lyrics;
- (id)URL;
- (struct OpaqueFigFormatReader { } *)_formatReader;
- (BOOL)_isStreaming;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (void)dealloc;
- (void)cancelLoading;
- (BOOL)isReadable;
- (long long)fragmentCount;
- (id)figChapterGroupInfo;
- (long long)firstFragmentSequenceNumber;
- (id)initWithURL:(id)a0;
- (BOOL)isComposable;
- (void)_setStatus:(long long)a0 figErrorCode:(int)a1;
- (BOOL)_inspectionRequiresAFormatReader;
- (struct OpaqueFigFormatReader { } *)_copyFormatReaderFromFigObjectWithFigErrorCode:(int *)a0;
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;
- (long long)_statusOfValueWhileMutexLockedForKey:(id)a0 error:(id *)a1;
- (BOOL)_statusOfValuesIsTerminalWhileMutexLockedForKeys:(id)a0;
- (BOOL)_updateStatusWhileMutexLocked:(long long)a0 figErrorCode:(int)a1;
- (id)_getAndPruneCompletionsWhileMutexLocked;
- (id)_dictionaryOfSpecialLoadingMethodsForKeys;
- (BOOL)_providesAccurateTiming;
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)a0;
- (id)_loadValuesWhileMutexLockedForKeys:(id)a0;
- (id)_statusOfValueForKeyThatIsAlwaysLoaded;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (BOOL)isExportable;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (struct OpaqueFigSimpleMutex { } *)_loadingMutex;
- (BOOL)isPlayable;
- (struct OpaqueFigPlaybackItem { } *)_playbackItem;
- (void)_serverHasDied;
- (BOOL)hasProtectedContent;
- (id)assetInspector;

@end
