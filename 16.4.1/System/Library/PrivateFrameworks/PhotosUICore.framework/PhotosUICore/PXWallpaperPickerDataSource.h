@class NSHashTable, NSString, NSArray, NSMutableDictionary, PHPhotoLibrary, NSDictionary, NSObject, PHFetchResult;
@protocol OS_dispatch_queue, OS_os_log;

@interface PXWallpaperPickerDataSource : NSObject <PHPhotoLibraryChangeObserver>

@property (class, readonly, nonatomic) NSArray *allUserSelectableModes;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSHashTable *changeObservers;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (retain) PHFetchResult *previewAssets;
@property (retain) NSDictionary *classificationByPreviewAssetUUID;
@property (nonatomic) BOOL didSetupPreviewAssets;
@property (retain, nonatomic) NSMutableDictionary *suggestionBasedDataSourceEntries;
@property (retain, nonatomic) PHFetchResult *portraitAssets;
@property (nonatomic) long long userSelectedMode;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)availableSelectableModesInPhotoLibrary:(id)a0;
+ (BOOL)containsWallpaperSuggestionSubtypes:(id)a0 inPhotoLibrary:(id)a1;
+ (id)localizedTitleForWallpaperPickerMode:(long long)a0;
+ (unsigned long long)parallaxClassificationForPickerMode:(long long)a0;
+ (id)systemImageNameForWallpaperPickerMode:(long long)a0;
+ (id)wallpaperSubtypesFromPickerMode:(long long)a0;

- (id)initWithPhotoLibrary:(id)a0;
- (void)addChangeObserver:(id)a0;
- (void)removeChangeObserver:(id)a0;
- (void)photoLibraryDidChange:(id)a0;
- (void).cxx_destruct;
- (id)fetchFeaturedModeSuggestions;
- (id)fetchKeyAssetForSuggestions:(id)a0;
- (id)fetchSuggestionsWithWallpaperSubtypes:(id)a0;
- (void)notifyChanges;
- (void)notifySameSuggestionTapped;
- (void)setupPreviewAssets;

@end
