@class NSHashTable, NSString, NSArray, PFPosterMediaSuggestion, NSMutableDictionary, NSDictionary, PHPhotoLibrary, PHSuggestion, NSObject, PHFetchResult;
@protocol OS_dispatch_queue, OS_os_log;

@interface PXWallpaperSmartAlbumDataSource : NSObject <PHPhotoLibraryChangeObserver> {
    NSMutableDictionary *_keyAssetBySuggestionUUID;
    NSMutableDictionary *_personSuggestionsByPersonLocalIdentifier;
}

@property (class, readonly, nonatomic) unsigned long long allSmartAlbumTypes;

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSHashTable *changeObservers;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (readonly, nonatomic) PFPosterMediaSuggestion *centerMedia;
@property (retain, nonatomic) PHSuggestion *workQueue_centerSuggestion;
@property (retain) NSArray *previewAssets;
@property (retain) NSDictionary *classificationByPreviewAssetUUID;
@property (retain) NSDictionary *shuffleSuggestionByKeyAssetUUID;
@property unsigned long long availableTypes;
@property (retain, nonatomic) PHFetchResult *peopleSuggestions;
@property (retain, nonatomic) PHFetchResult *petSuggestions;
@property (retain, nonatomic) PHFetchResult *landscapeSuggestions;
@property (retain, nonatomic) PHFetchResult *cityscapeSuggestions;
@property (readonly, nonatomic) NSDictionary *keyAssetBySuggestionUUID;
@property (readonly, nonatomic) NSDictionary *personSuggestionsByPersonLocalIdentifier;
@property (nonatomic) unsigned long long selectedTypes;
@property (retain, nonatomic) NSArray *peopleLocalIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_commonWallpaperFetchOptionsForPhotoLibrary:(id)a0;
+ (id)_fetchSuggestionsWithWallpaperSubtype:(unsigned short)a0 fetchOptions:(id)a1;
+ (unsigned short)_suggestionSubTypeForSmartAlbumType:(unsigned long long)a0;
+ (id)_userSelectableSmartAlbumTypes;
+ (BOOL)isAnySmartAlbumAvailableInPhotoLibrary:(id)a0;
+ (id)localizedTitleForSingleSmartAlbumType:(unsigned long long)a0;
+ (id)systemImageNameForSingleSmartAlbumType:(unsigned long long)a0;

- (void)addChangeObserver:(id)a0;
- (void)removeChangeObserver:(id)a0;
- (void)photoLibraryDidChange:(id)a0;
- (void).cxx_destruct;
- (id)fetchAssetIfNeededForAssetUUID:(id)a0;
- (id)baseWallpaperFetchOptions;
- (void)cacheKeyAssetForSuggestions:(id)a0;
- (void)cacheSuggestionsAndKeyAssetsForPersons:(id)a0;
- (id)customPeopleSuggestions;
- (id)fetchShuffleSuggestionContainingAsset:(id)a0;
- (void)fetchSuggestionsAndAssets;
- (id)fetchSuggestionsWithWallpaperSubtype:(unsigned short)a0 options:(id)a1;
- (id)initWithPhotoLibrary:(id)a0 changeObserver:(id)a1 centerMedia:(id)a2;
- (id)initWithPhotoLibrary:(id)a0 changeObserver:(id)a1 registerForPhotoLibraryChanges:(BOOL)a2 centerMedia:(id)a3;
- (void)notifyAvailableTypeDidChange;
- (void)notifyPreviewAssetsDidChange;
- (void)setupPreviewAssets;
- (BOOL)shouldIncludeCenterMediaWithPreviewAssets:(id)a0;

@end
