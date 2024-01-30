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

+ (id)_figAssetMediaSelectionPropertiesArray;
+ (id)_figAssetTrackPropertiesForKeys;
+ (void)_mapAssetKeys:(id)a0 toFigAssetPropertySet:(id)a1 figAssetTrackPropertySet:(id)a2 callerName:(id)a3;
+ (id)_figAssetPropertiesForKeys;
+ (id)_figAssetTrackMediaSelectionPropertiesArray;

- (BOOL)isReadable;
- (id)lyrics;
- (struct OpaqueFigAsset { } *)_figAsset;
- (unsigned long long)downloadToken;
- (BOOL)isPlayable;
- (id)resolvedURL;
- (id)variants;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)a0;
- (void)cancelLoading;
- (BOOL)isExportable;
- (double)_fragmentMindingInterval;
- (void)_addFigAssetNotifications;
- (Class)_classForTrackInspectors;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 keysForCollectionKeys:(id)a1 completionHandler:(id /* block */)a2;
- (long long)fragmentCount;
- (id)initWithFigAsset:(struct OpaqueFigAsset { } *)a0 forAsset:(id)a1;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (long long)firstFragmentSequenceNumber;
- (struct OpaqueFigSimpleMutex { } *)_loadingMutex;
- (id)URL;
- (id)contentKeySpecifiersEligibleForPreloading;
- (id)_completionHandlerQueue;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (id)originalNetworkContentURL;
- (id)figChapters;
- (void)_invokeCompletionHandlerForLoadingBatches:(id)a0;
- (id)_loadingBatches;
- (void)_removeFigAssetNotifications;
- (BOOL)isAssociatedWithFragmentMinder;
- (void)dealloc;
- (BOOL)_isStreaming;
- (struct OpaqueFigFormatReader { } *)_formatReader;
- (long long)_loadStatusForProperty:(id)a0 figAsset:(struct OpaqueFigAsset { } *)a1 error:(id *)a2;
- (id)figChapterGroupInfo;
- (BOOL)hasProtectedContent;
- (void)_setIsAssociatedWithFragmentMinder:(BOOL)a0;
- (long long)_statusOfValueForKey:(id)a0 error:(id *)a1 firstNonLoadedDependencyKey:(id *)a2;
- (id)asset;
- (void)_setFragmentMindingInterval:(double)a0;
- (id)assetInspector;
- (BOOL)isComposable;
- (id)initWithURL:(id)a0 figAssetCreationFlags:(unsigned long long)a1 figAssetCreationOptions:(id)a2 avAssetInitializationOptions:(id)a3 forAsset:(id)a4;
- (BOOL)isCompatibleWithSavedPhotosAlbum;

@end
