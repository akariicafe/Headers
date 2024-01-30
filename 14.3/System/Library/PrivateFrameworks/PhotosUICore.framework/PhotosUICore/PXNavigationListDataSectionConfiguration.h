@class PHCollectionList, PHFetchResult, NSPredicate;

@interface PXNavigationListDataSectionConfiguration : NSObject

@property (readonly, nonatomic) PHCollectionList *collectionList;
@property (readonly, nonatomic) PHFetchResult *collectionsFetchResult;
@property (nonatomic) BOOL emptyCollectionsHidden;
@property (nonatomic) BOOL showSyncedFromMacAlbums;
@property (nonatomic) BOOL includeKeyAssetFetches;
@property (nonatomic) BOOL includeUserSmartAlbums;
@property (nonatomic) BOOL hideHiddenAlbum;
@property (nonatomic) BOOL skipKeyAssetFetchesForSmartAlbums;
@property (nonatomic) BOOL skipAssetFetches;
@property (nonatomic) BOOL skipAssetCountFetches;
@property (copy, nonatomic) NSPredicate *assetsFilterPredicate;

+ (id)configurationWithCollectionsFetchResult:(id)a0;
+ (id)configurationWithCollectionList:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)initWithCollectionsFetchResult:(id)a0;
- (id)initWithCollectionList:(id)a0;

@end
