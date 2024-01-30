@class PLLazyObject, NSArray, NSString, NSObject, PLPhotoLibraryPathManager, PLThumbnailManager, PLThumbnailIndexes;
@protocol OS_dispatch_source, NSObject;

@interface PLThumbnailResourceDataStore : PLResourceDataStore <PLResourceDataStore> {
    PLLazyObject *_lazyThumbnailManager;
    PLLazyObject *_lazyThumbnailFormats;
    PLLazyObject *_lazyThumbnailFormatsByTableType;
    NSArray *_overridenThumbnailFormats;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
    NSObject<OS_dispatch_source> *_configWatcherSource;
    id<NSObject> _clientBackgroundTransitionObserverToken;
}

@property (readonly) PLThumbnailManager *thumbnailManager;
@property (readonly) PLThumbnailIndexes *thumbnailIndexes;
@property (readonly) NSArray *thumbnailFormats;
@property (readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedRecipes;
+ (BOOL)resourceIsSquare:(id)a0;
+ (id)_tableFormatsByTableTypeFromFormats:(id)a0;
+ (unsigned short)storeClassID;
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)a0;

- (void)_stopWatchingThumbnailConfigFile;
- (struct CGImage { } *)newTableThumbImageForKey:(id)a0;
- (id)resourceURLForKey:(id)a0;
- (BOOL)canStoreExternalResource:(id)a0;
- (BOOL)thumbnailForKey:(id)a0 matchesAssetID:(id)a1;
- (BOOL)storeExternalResource:(id)a0 forAsset:(id)a1 options:(id)a2 error:(id *)a3 resultingResource:(id *)a4;
- (id)virtualResourcesForAsset:(id)a0;
- (id)expectedFileURLForResource:(id)a0 asset:(id)a1;
- (id)initWithPathManager:(id)a0;
- (void)dealloc;
- (struct PLImageTableEntryFooter_s { struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x0; unsigned int x1; unsigned int x2; int x3; } *)_tableFooterForKey:(id)a0;
- (id)updateDerivativeResourcesForAsset:(id)a0 forLifecycleEvent:(unsigned int)a1;
- (id)keyFromKeyStruct:(const void *)a0;
- (void)_startWatchingThumbnailConfigFile;
- (id)thumbnailFormatsByTableType;
- (void)_installBackgroundWatcher;
- (id)descriptionForSubtype:(long long)a0;
- (id)resourceDataForKey:(id)a0 assetID:(id)a1;
- (BOOL)videoResource:(id)a0 matchesOrExceedsQualityLevel:(unsigned int)a1;
- (void)overrideThumbnailFormatsWithFormatIDs:(id)a0;
- (id)_makeThumbnailManager;
- (void).cxx_destruct;
- (id)requestLocalAvailabilityChange:(short)a0 forResource:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)invalidateThumbnailManager;
- (id)name;

@end
