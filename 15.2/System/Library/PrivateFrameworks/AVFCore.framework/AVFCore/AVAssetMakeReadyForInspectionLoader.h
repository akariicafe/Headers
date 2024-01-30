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

- (id)lyrics;
- (long long)fragmentCount;
- (struct OpaqueFigPlaybackItem { } *)_playbackItem;
- (BOOL)hasProtectedContent;
- (BOOL)isPlayable;
- (struct OpaqueFigFormatReader { } *)_formatReader;
- (BOOL)isExportable;
- (BOOL)isReadable;
- (struct OpaqueFigFormatReader { } *)_copyFormatReaderFromFigObjectWithFigErrorCode:(int *)a0;
- (id)initWithURL:(id)a0;
- (struct OpaqueFigSimpleMutex { } *)_loadingMutex;
- (long long)_statusOfValueWhileMutexLockedForKey:(id)a0 error:(id *)a1;
- (void)_setStatus:(long long)a0 figErrorCode:(int)a1;
- (BOOL)_statusOfValuesIsTerminalWhileMutexLockedForKeys:(id)a0;
- (BOOL)_updateStatusWhileMutexLocked:(long long)a0 figErrorCode:(int)a1;
- (id)_getAndPruneCompletionsWhileMutexLocked;
- (id)_dictionaryOfSpecialLoadingMethodsForKeys;
- (BOOL)_providesAccurateTiming;
- (id)_loadValuesWhileMutexLockedForKeys:(id)a0;
- (id)_statusOfValueForKeyThatIsAlwaysLoaded;
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)a0;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (void)_serverHasDied;
- (id)assetInspector;
- (BOOL)isComposable;
- (void)cancelLoading;
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;
- (long long)_status;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (BOOL)_inspectionRequiresAFormatReader;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)firstFragmentSequenceNumber;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (id)URL;
- (void)dealloc;
- (BOOL)_isStreaming;
- (id)figChapterGroupInfo;

@end
