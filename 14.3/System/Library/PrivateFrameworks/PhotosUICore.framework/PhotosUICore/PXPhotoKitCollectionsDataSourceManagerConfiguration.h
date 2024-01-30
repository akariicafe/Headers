@class PHCollectionList, PHFetchResult, NSPredicate, PHFetchOptions;

@interface PXPhotoKitCollectionsDataSourceManagerConfiguration : NSObject

@property BOOL shouldIgnoreLibraryChanges;
@property (readonly) PHCollectionList *collectionList;
@property (readonly) PHFetchResult *collectionsFetchResult;
@property (nonatomic) BOOL separateSectionsForSmartAndUserCollections;
@property (nonatomic) BOOL includePeopleAlbum;
@property (nonatomic) BOOL skipKeyAssetFetches;
@property (nonatomic) BOOL skipKeyAssetFetchesForSmartAlbums;
@property (nonatomic) BOOL skipAssetFetches;
@property (nonatomic) BOOL updateKeyAssetFetchesInBackground;
@property (retain, nonatomic) NSPredicate *assetsFilterPredicate;
@property (nonatomic) unsigned long long assetTypesToInclude;
@property (nonatomic) unsigned long long collectionTypesToInclude;
@property (readonly) PHFetchOptions *customFetchOptions;

+ (id)_generatePredicateForAssetTypesToInclude:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_newConfigurationWithCollectionList:(id)a0 collectionsFetchResult:(id)a1;
- (void)setIsRootFolder:(BOOL)a0;
- (id)newConfigurationWithCollectionList:(id)a0;
- (BOOL)isRootFolder;
- (id)initWithCollectionsFetchResult:(id)a0;
- (id)initWithCollectionList:(id)a0 collectionsFetchResult:(id)a1;
- (id)initWithCollectionList:(id)a0;
- (id)newConfigurationWithCollectionsFetchResult:(id)a0;

@end
