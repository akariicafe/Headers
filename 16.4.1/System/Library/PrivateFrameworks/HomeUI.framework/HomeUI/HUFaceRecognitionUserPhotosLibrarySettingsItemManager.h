@class HMUser, HFStaticItemProvider, HUFaceRecognitionUserPhotosLibrarySettingsModule, HFStaticItem, HMHome;

@interface HUFaceRecognitionUserPhotosLibrarySettingsItemManager : HFItemManager

@property (retain, nonatomic) HFStaticItem *addNamesInPhotosLibraryItem;
@property (readonly, nonatomic) HMHome *overrideHome;
@property (readonly, nonatomic) HMUser *user;
@property (retain, nonatomic) HFStaticItemProvider *staticItemProvider;
@property (readonly, nonatomic) HUFaceRecognitionUserPhotosLibrarySettingsModule *photosLibrarySettingsModule;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)_buildItemModulesForHome:(id)a0;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)_homeFuture;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (id)setImportPhotosLibraryEnabled:(BOOL)a0;
- (id)setSharePhotosLibraryEnabled:(BOOL)a0;

@end
