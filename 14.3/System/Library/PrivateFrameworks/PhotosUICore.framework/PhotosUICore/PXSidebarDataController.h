@class NSString, PXPhotoLibraryLocalDefaults, NSArray, PXNavigationListItemDataSectionManager, NSOperationQueue, PHPhotoLibrary, NSMutableDictionary, PXOutlineDataSectionManager, PXDataSectionManager;
@protocol PXSidebarDataSourceControllerDelegate;

@interface PXSidebarDataController : NSObject <PXOutlineDataSectionManagerDelegate, PXNavigationListDataSectionManagerObserver> {
    PXOutlineDataSectionManager *_rootDataSectionManager;
    NSMutableDictionary *_dataSectionManagers;
    NSMutableDictionary *_dataSectionObjects;
    NSArray *_arrangedObjectIdentifiers;
}

@property (readonly, nonatomic) PXPhotoLibraryLocalDefaults *localDefaults;
@property (readonly, nonatomic) PXDataSectionManager *mediaTypesSectionManager;
@property (readonly, nonatomic) PXNavigationListItemDataSectionManager *mediaTypesItemManager;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) NSOperationQueue *workQueue;
@property (weak, nonatomic) id<PXSidebarDataSourceControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)prototypesDataSectionManagerForLibrary:(id)a0 workQueue:(id)a1 sectionEnablementProvider:(id)a2;
+ (id)albumsDataSectionManagerWithMediaTypesItemManager:(id)a0 workQueue:(id)a1 sectionEnablementProvider:(id)a2;
+ (id)photosDataSectionManagerForLibrary:(id)a0 workQueue:(id)a1 sectionEnablementProvider:(id)a2;
+ (id)projectsDataSectionManagerForLibrary:(id)a0 workQueue:(id)a1;
+ (id)devicesDataSectionManagerForLibrary:(id)a0;
+ (id)dataSectionManagerForCollection:(id)a0 workQueue:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)child:(long long)a0 ofItem:(id)a1;
- (id)childrenOfListItem:(id)a0;
- (id)outlineDataSectionManager:(id)a0 arrangedSectionContent:(id)a1;
- (void)_setDataSectionManager:(id)a0 forKey:(id)a1;
- (void)_removeDataSectionManagerForKey:(id)a0;
- (void)_updateDataSectionForRemovedItems:(id)a0;
- (void)_updateMediaTypesItemManager;
- (void)setExpanded:(BOOL)a0 forItem:(id)a1;
- (id)_dataSectionManagerForListItem:(id)a0;
- (long long)numberOfChildrenOfItem:(id)a0;
- (BOOL)moveGroupItem:(id)a0 afterGroupItem:(id)a1;
- (id)childDataSectionForItem:(id)a0;
- (BOOL)isItemExpanded:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)infoForItem:(id)a0 childIndex:(long long)a1;
- (id)initWithPhotoLibrary:(id)a0 sectionEnablementProvider:(id)a1;
- (void)requestImageForItem:(id)a0 parentItem:(id)a1 completion:(id /* block */)a2;
- (id)sectionManagersForLibrary:(id)a0 workQueue:(id)a1 sectionEnablementProvider:(id)a2;
- (id)dataSectionManagerForItem:(id)a0;
- (id)itemForIdentifier:(id)a0;

@end
