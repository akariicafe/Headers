@class PXPhotoLibraryLocalDefaults, NSString, NSPredicate, PXNavigationListItemDataSectionManager, NSOperationQueue, PHAssetCollection, PHPhotoLibrary, PXOutlineDataSectionManager, NSMutableDictionary, NSArray, NSMapTable, PXDataSectionManager;
@protocol PXSidebarDataSourceControllerDelegate;

@interface PXSidebarDataController : NSObject <PXOutlineDataSectionManagerDelegate, PXNavigationListDataSectionManagerObserver> {
    PXOutlineDataSectionManager *_rootDataSectionManager;
    NSMutableDictionary *_dataSectionManagers;
    NSMutableDictionary *_dataSectionObjects;
    NSArray *_arrangedObjectIdentifiers;
}

@property (readonly, nonatomic) PXPhotoLibraryLocalDefaults *localDefaults;
@property (retain, nonatomic) NSMapTable *requestDetailsBySidebarImageRequestID;
@property (readonly, nonatomic) PXDataSectionManager *mediaTypesSectionManager;
@property (readonly, nonatomic) PXNavigationListItemDataSectionManager *mediaTypesItemManager;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) NSPredicate *assetsFilterPredicate;
@property (readonly, nonatomic) PHAssetCollection *pickerAllPhotosVirtualCollection;
@property (readonly, nonatomic) NSOperationQueue *workQueue;
@property (weak, nonatomic) id<PXSidebarDataSourceControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)albumsDataSectionManagerWithMediaTypesItemManager:(id)a0 workQueue:(id)a1 sectionEnablementProvider:(id)a2 additionalAssetsFilterPredicate:(id)a3;
+ (id)dataSectionManagerForCollection:(id)a0 workQueue:(id)a1 additionalAssetsFilterPredicate:(id)a2;
+ (id)devicesDataSectionManagerForLibrary:(id)a0;
+ (id)photosDataSectionManagerForLibrary:(id)a0 workQueue:(id)a1 sectionEnablementProvider:(id)a2 additionalAssetsFilterPredicate:(id)a3;
+ (id)projectsDataSectionManagerForLibrary:(id)a0 workQueue:(id)a1 additionalAssetsFilterPredicate:(id)a2;
+ (id)prototypesDataSectionManagerForLibrary:(id)a0 workQueue:(id)a1 sectionEnablementProvider:(id)a2 additionalAssetsFilterPredicate:(id)a3;

- (void)setChangeProcessingPaused:(BOOL)a0 forReason:(id)a1;
- (id)itemForIdentifier:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)cancelImageRequest:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isItemExpanded:(id)a0;
- (id)_childDataSectionManagerForListItem:(id)a0;
- (void)_removeDataSectionManagerForKey:(id)a0;
- (void)_setDataSectionManager:(id)a0 forKey:(id)a1;
- (void)_updateDataSectionForRemovedItems:(id)a0;
- (void)_updateMediaTypesItemManager;
- (void)appearanceDidChange;
- (id)beginRequestForMediaProvider:(id)a0 mediaRequestIDs:(id)a1;
- (void)cancelRequestDetails:(id)a0;
- (id)child:(long long)a0 ofItem:(id)a1;
- (id)childDataSectionForItem:(id)a0;
- (id)childrenOfListItem:(id)a0;
- (id)dataSectionManagerForItem:(id)a0;
- (void)didNavigateToListItem:(id)a0;
- (id)infoForItem:(id)a0 childIndex:(long long)a1;
- (id)initWithPhotoLibrary:(id)a0 sectionEnablementProvider:(id)a1;
- (id)initWithPhotoLibrary:(id)a0 sectionEnablementProvider:(id)a1 options:(unsigned long long)a2 additionalAssetsFilterPredicate:(id)a3 pickerAllPhotosVirtualCollection:(id)a4;
- (void)markListItemAsRead:(id)a0;
- (BOOL)moveGroupItem:(id)a0 afterGroupItem:(id)a1;
- (long long)numberOfChildrenOfItem:(id)a0;
- (id)outlineDataSectionManager:(id)a0 arrangedSectionContent:(id)a1;
- (long long)requestImageForItem:(id)a0 parentItem:(id)a1 completion:(id /* block */)a2;
- (id)sectionManagersForLibrary:(id)a0 workQueue:(id)a1 sectionEnablementProvider:(id)a2 additionalAssetsFilterPredicate:(id)a3;
- (void)setExpanded:(BOOL)a0 forItem:(id)a1;

@end
