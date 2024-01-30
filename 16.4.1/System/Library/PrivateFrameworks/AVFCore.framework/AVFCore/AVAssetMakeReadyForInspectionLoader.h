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

- (id)initWithURL:(id)a0;
- (BOOL)isReadable;
- (id)lyrics;
- (long long)_status;
- (BOOL)isPlayable;
- (void)cancelLoading;
- (BOOL)isExportable;
- (struct OpaqueFigPlaybackItem { } *)_playbackItem;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (long long)fragmentCount;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (long long)firstFragmentSequenceNumber;
- (struct OpaqueFigSimpleMutex { } *)_loadingMutex;
- (id)URL;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (BOOL)_inspectionRequiresAFormatReader;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)a0;
- (struct OpaqueFigFormatReader { } *)_copyFormatReaderFromFigObjectWithFigErrorCode:(int *)a0;
- (void)dealloc;
- (BOOL)_isStreaming;
- (struct OpaqueFigFormatReader { } *)_formatReader;
- (id)figChapterGroupInfo;
- (BOOL)hasProtectedContent;
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;
- (id)assetInspector;
- (BOOL)isComposable;
- (id)_dictionaryOfSpecialLoadingMethodsForKeys;
- (id)_getAndPruneCompletionsWhileMutexLocked;
- (id)_loadValuesWhileMutexLockedForKeys:(id)a0;
- (BOOL)_providesAccurateTiming;
- (void)_serverHasDied;
- (void)_setStatus:(long long)a0 figErrorCode:(int)a1;
- (id)_statusOfValueForKeyThatIsAlwaysLoaded;
- (long long)_statusOfValueWhileMutexLockedForKey:(id)a0 error:(id *)a1;
- (BOOL)_statusOfValuesIsTerminalWhileMutexLockedForKeys:(id)a0;
- (BOOL)_updateStatusWhileMutexLocked:(long long)a0 figErrorCode:(int)a1;

@end
