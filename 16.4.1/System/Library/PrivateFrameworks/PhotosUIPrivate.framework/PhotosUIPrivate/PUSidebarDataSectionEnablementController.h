@class PXSharedLibrarySidebarEnablementObserver, NSMapTable, NSString, PHPhotoLibrary, NSObject;
@protocol PXDataSectionManagerEnabling;

@interface PUSidebarDataSectionEnablementController : NSObject <PXPreferencesObserver, PXSidebarDataSectionEnablement>

@property (readonly, nonatomic) NSMapTable *sectionManagerByItemTypeForAccountStoreChange;
@property (readonly, nonatomic) NSMapTable *sectionManagersByItemTypeForDefaultsChange;
@property (readonly, weak, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) BOOL isPhotosPicker;
@property (readonly, nonatomic) BOOL isLimitedLibraryMode;
@property (readonly, nonatomic) BOOL excludesHiddenAlbum;
@property (nonatomic) BOOL registeredAsPrefObserver;
@property (readonly, nonatomic) PXSharedLibrarySidebarEnablementObserver *sharedLibrarySidebarEnablementObserver;
@property (weak, nonatomic) NSObject<PXDataSectionManagerEnabling> *sharedLibraryDataSectionManager;
@property (nonatomic) BOOL registeredSharedLibraryEnablementObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preferencesDidChange;
- (void)_accountStoreDidChange:(id)a0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)configureEnablementOfSectionManager:(id)a0 enablementItem:(long long)a1;
- (void)_configureEnablementOfSectionManager:(id)a0 enablementItem:(long long)a1 setupObservation:(BOOL)a2;
- (void)_observeAccountsStoreForManager:(id)a0 enablementItem:(long long)a1;
- (void)_observeDefaultsForManager:(id)a0 enablementItem:(long long)a1;
- (void)_updateSharedLibraryDataSectionManagerEnabledState;
- (id)initWithPhotoLibrary:(id)a0 isPhotosPicker:(BOOL)a1 isLimitedLibraryMode:(BOOL)a2 excludesHiddenAlbum:(BOOL)a3;

@end
