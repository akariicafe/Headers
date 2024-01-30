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

+ (id)_figAssetTrackMediaSelectionPropertiesArray;
+ (void)_mapAssetKeys:(id)a0 toFigAssetPropertySet:(id)a1 figAssetTrackPropertySet:(id)a2 callerName:(id)a3;
+ (id)_figAssetPropertiesForKeys;
+ (id)_figAssetTrackPropertiesForKeys;
+ (id)_figAssetMediaSelectionPropertiesArray;

- (Class)_classForTrackInspectors;
- (id)lyrics;
- (long long)fragmentCount;
- (BOOL)hasProtectedContent;
- (struct OpaqueFigAsset { } *)_figAsset;
- (id)variants;
- (BOOL)isPlayable;
- (struct OpaqueFigFormatReader { } *)_formatReader;
- (unsigned long long)downloadToken;
- (BOOL)isExportable;
- (BOOL)isReadable;
- (void)_addFigAssetNotifications;
- (id)initWithURL:(id)a0 figAssetCreationFlags:(unsigned long long)a1 figAssetCreationOptions:(id)a2 avAssetInitializationOptions:(id)a3 forAsset:(id)a4;
- (long long)_loadStatusForProperty:(id)a0 figAsset:(struct OpaqueFigAsset { } *)a1 error:(id *)a2;
- (id)contentKeySpecifiersEligibleForPreloading;
- (struct OpaqueFigSimpleMutex { } *)_loadingMutex;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 keysForCollectionKeys:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithFigAsset:(struct OpaqueFigAsset { } *)a0 forAsset:(id)a1;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (BOOL)isAssociatedWithFragmentMinder;
- (void)_removeFigAssetNotifications;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (id)assetInspector;
- (long long)_statusOfValueForKey:(id)a0 error:(id *)a1 firstNonLoadedDependencyKey:(id *)a2;
- (BOOL)isComposable;
- (void)cancelLoading;
- (id)asset;
- (id)_loadingBatches;
- (void)_invokeCompletionHandlerForLoadingBatches:(id)a0;
- (id)resolvedURL;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (double)_fragmentMindingInterval;
- (id)_completionHandlerQueue;
- (long long)firstFragmentSequenceNumber;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (id)URL;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)a0;
- (void)dealloc;
- (void)_setIsAssociatedWithFragmentMinder:(BOOL)a0;
- (void)_setFragmentMindingInterval:(double)a0;
- (BOOL)_isStreaming;
- (id)figChapters;
- (id)figChapterGroupInfo;
- (id)originalNetworkContentURL;

@end
