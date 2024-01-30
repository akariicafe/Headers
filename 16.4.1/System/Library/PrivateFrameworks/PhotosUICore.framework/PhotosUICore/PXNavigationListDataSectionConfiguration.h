@class PHCollectionList, PHFetchResult, NSPredicate;

@interface PXNavigationListDataSectionConfiguration : NSObject

@property (readonly, nonatomic) PHCollectionList *collectionList;
@property (readonly, nonatomic) PHFetchResult *collectionsFetchResult;
@property (nonatomic) BOOL emptyCollectionsHidden;
@property (nonatomic) BOOL showSyncedFromMacAlbums;
@property (nonatomic) BOOL includeKeyAssetFetches;
@property (nonatomic) BOOL includeUserSmartAlbums;
@property (nonatomic) BOOL hideHiddenAlbum;
@property (nonatomic) BOOL hideSharedLibraryAlbum;
@property (nonatomic) BOOL skipKeyAssetFetchesForSmartAlbums;
@property (nonatomic) BOOL skipAssetFetches;
@property (nonatomic) BOOL skipAssetCountFetches;
@property (nonatomic) BOOL skipSyndicatedAssetFetches;
@property (copy, nonatomic) NSPredicate *assetsFilterPredicate;
@property (nonatomic) BOOL simulateNonIncrementalChanges;
@property (nonatomic) long long pausedChangeDetailsBufferLength;

+ (id)configurationWithCollectionList:(id)a0;
+ (id)configurationWithCollectionsFetchResult:(id)a0;

- (id)initWithCollectionsFetchResult:(id)a0;
- (id)initWithCollectionList:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
