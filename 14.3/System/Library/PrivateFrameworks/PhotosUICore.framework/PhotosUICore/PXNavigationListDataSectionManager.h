@class PXPhotoKitCollectionsDataSource, PHCollectionList, PXPhotoKitCollectionsDataSourceManager, NSString, NSMutableDictionary, NSMapTable;

@interface PXNavigationListDataSectionManager : PXDataSectionManager <PXCollectionsDataSourceManagerObserver, PXNavigationListDataSectionManagerObserver> {
    NSMutableDictionary *_childDataSectionManagers;
    NSMutableDictionary *_childDataSectionIndexes;
    NSMapTable *_parentListItems;
}

@property (readonly, nonatomic) PXPhotoKitCollectionsDataSourceManager *collectionsDataSourceManager;
@property (retain, nonatomic) PXPhotoKitCollectionsDataSource *collectionsDataSource;
@property (readonly, nonatomic) BOOL skipAssetCountFetches;
@property (readonly, nonatomic) PHCollectionList *collectionList;
@property (nonatomic) long long indentationLevel;
@property (nonatomic) BOOL allowsEmptyDataSection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeCollectionsDataSourceManagerForConfiguration:(id)a0;

- (void).cxx_destruct;
- (id)createDataSection;
- (id)auxiliaryObjectForKey:(id)a0 dataSectionObject:(id)a1 hintIndex:(long long)a2;
- (id)_changeDetailsForItemAtIndex:(long long)a0 childDataSection:(id)a1 expanding:(BOOL)a2;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)pauseBackgroundFetching;
- (id)initWithConfiguration:(id)a0;
- (void)startBackgroundFetchingIfNeeded;
- (void)collapseListItem:(id)a0 hintIndex:(long long)a1;
- (void)expandListItem:(id)a0 hintIndex:(long long)a1;
- (id)collectionsDataSourceIfExisting;
- (void)_requestParentForListItem:(id)a0 hintIndex:(long long)a1 resultHandler:(id /* block */)a2 recursionHandler:(id /* block */)a3;
- (BOOL)_isThumbnailAllowedForCollection:(id)a0;
- (id)initWithChildDataSectionManagers:(id)a0;
- (id)initWithCollectionList:(id)a0;

@end
