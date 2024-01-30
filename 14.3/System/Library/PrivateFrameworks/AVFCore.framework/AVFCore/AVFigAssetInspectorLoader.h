@class AVDispatchOnce, AVWeakReference, NSURL, AVAssetInspector, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AVFigAssetInspectorLoader : AVAssetInspectorLoader {
    struct OpaqueFigAsset { } *_figAsset;
    int _figAssetCreationStatus;
    AVWeakReference *_weakReferenceToAsset;
    AVAssetInspector *_assetInspector;
    AVDispatchOnce *_assetInspectorOnce;
    NSObject<OS_dispatch_queue> *_completionHandlerQueue;
    struct OpaqueFigSimpleMutex { } *_loadingMutex;
    NSMutableArray *_loadingBatches;
    BOOL _loadingCanceled;
    BOOL _registeredForFigAssetNotifications;
    long long _fragmentMinderAssociationCount;
    NSURL *_URL;
}

+ (id)_figAssetPropertiesForKeys;
+ (void)_mapAssetKeys:(id)a0 toFigAssetPropertySet:(id)a1 figAssetTrackPropertySet:(id)a2 callerName:(id)a3;
+ (id)_figAssetMediaSelectionPropertiesArray;
+ (id)_figAssetTrackMediaSelectionPropertiesArray;
+ (id)_figAssetTrackPropertiesForKeys;

- (id)lyrics;
- (id)URL;
- (void)_invokeCompletionHandlerForLoadingBatches:(id)a0;
- (id)resolvedURL;
- (struct OpaqueFigAsset { } *)_figAsset;
- (struct OpaqueFigFormatReader { } *)_formatReader;
- (id)_loadingBatches;
- (double)_fragmentMindingInterval;
- (BOOL)_isStreaming;
- (id)asset;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 keysForCollectionKeys:(id)a1 completionHandler:(id /* block */)a2;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (long long)_statusOfValueForKey:(id)a0 error:(id *)a1 firstNonLoadedDependencyKey:(id *)a2;
- (void)dealloc;
- (void)_addFigAssetNotifications;
- (void)_removeFigAssetNotifications;
- (void)cancelLoading;
- (BOOL)isReadable;
- (long long)fragmentCount;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)a0;
- (id)figChapters;
- (unsigned long long)downloadToken;
- (id)figChapterGroupInfo;
- (long long)firstFragmentSequenceNumber;
- (long long)_loadStatusForProperty:(id)a0 figAsset:(struct OpaqueFigAsset { } *)a1 error:(id *)a2;
- (id)initWithFigAsset:(struct OpaqueFigAsset { } *)a0 forAsset:(id)a1;
- (id)initWithURL:(id)a0 figAssetCreationFlags:(unsigned long long)a1 figAssetCreationOptions:(id)a2 avAssetInitializationOptions:(id)a3 forAsset:(id)a4;
- (BOOL)isComposable;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (BOOL)isExportable;
- (Class)_classForTrackInspectors;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isAssociatedWithFragmentMinder;
- (struct OpaqueFigSimpleMutex { } *)_loadingMutex;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (void)_setIsAssociatedWithFragmentMinder:(BOOL)a0;
- (BOOL)isPlayable;
- (id)originalNetworkContentURL;
- (void)_setFragmentMindingInterval:(double)a0;
- (id)_completionHandlerQueue;
- (BOOL)hasProtectedContent;
- (id)assetInspector;

@end
