@class PXPeopleUISettings, PXKitSettings, PXMemoriesRelatedSettings, PXAlbumsDebugUISettings, PXPeopleDetailSettings, PXImportSettings, PXMemoriesFeedSettings, PXDiagnosticsSettings, PXOneUpSettings, PXPhotosDetailsSettings, PXPhotosDataSourceSettings, PXPhotosDetailsHeaderTileSettings, PXImageModulationSettings, PXAssetVariationsSettings, PXGridKitSettings, PXPhotoPickerSettings, PXCompleteMyMomentSettings, PXModelSettings, PXAssetsSceneSettings, PXTilingSettings, PXCuratedLibrarySettings, PXRelatedSettings, PXPhotosGridSettings, PXDragAndDropSettings, PXGridSettings, PXFooterSettings, PXForYouSettings, PXGPPTSettings, PXZoomablePhotosSettings, PXInlineVideoStabilizationSettings, PXSharingSettings, PXCursorInteractionSettings, PXKeyboardSettings, PXViewControllerTransitionSettings, PXSearchSettings, PXCPLStatusSettings, PXApplicationSettings;

@interface PXRootSettings : PXSettings

@property (retain, nonatomic) PXDiagnosticsSettings *diagnostics;
@property (retain, nonatomic) PXImageModulationSettings *imageModulationSettings;
@property (retain, nonatomic) PXZoomablePhotosSettings *zoomablePhotosSettings;
@property (retain, nonatomic) PXCuratedLibrarySettings *curatedLibrarySettings;
@property (retain, nonatomic) PXPhotoPickerSettings *photoPickerSettings;
@property (retain, nonatomic) PXKeyboardSettings *keyboardSettings;
@property (retain, nonatomic) PXOneUpSettings *oneUpSettings;
@property (retain, nonatomic) PXPhotosDetailsSettings *photosDetails;
@property (retain, nonatomic) PXPhotosDetailsHeaderTileSettings *photosDetailsHeaderTile;
@property (retain, nonatomic) PXRelatedSettings *related;
@property (retain, nonatomic) PXMemoriesFeedSettings *memoryFeed;
@property (retain, nonatomic) PXMemoriesRelatedSettings *memoriesRelated;
@property (retain, nonatomic) PXAssetsSceneSettings *assetsScene;
@property (retain, nonatomic) PXPhotosDataSourceSettings *photosDataSource;
@property (retain, nonatomic) PXTilingSettings *tiling;
@property (retain, nonatomic) PXModelSettings *model;
@property (retain, nonatomic) PXKitSettings *kit;
@property (retain, nonatomic) PXGridKitSettings *gridKitSettings;
@property (retain, nonatomic) PXGPPTSettings *gridKitPPTSettings;
@property (retain, nonatomic) PXViewControllerTransitionSettings *viewControllerTransition;
@property (retain, nonatomic) PXPeopleDetailSettings *peopleDetail;
@property (retain, nonatomic) PXPeopleUISettings *peopleUISettings;
@property (retain, nonatomic) PXDragAndDropSettings *dragAndDrop;
@property (retain, nonatomic) PXCursorInteractionSettings *cursorInteractionSettings;
@property (retain, nonatomic) PXSharingSettings *sharingSettings;
@property (retain, nonatomic) PXAssetVariationsSettings *variationsSettings;
@property (retain, nonatomic) PXCompleteMyMomentSettings *completeMyMoment;
@property (retain, nonatomic) PXForYouSettings *forYou;
@property (retain, nonatomic) PXGridSettings *grid;
@property (retain, nonatomic) PXImportSettings *importSettings;
@property (retain, nonatomic) PXSearchSettings *searchSettings;
@property (retain, nonatomic) PXAlbumsDebugUISettings *albumsDebugUISettings;
@property (retain, nonatomic) PXApplicationSettings *applicationSettings;
@property (retain, nonatomic) PXFooterSettings *footerSettings;
@property (retain, nonatomic) PXPhotosGridSettings *photosGridSettings;
@property (retain, nonatomic) PXCPLStatusSettings *cplStatusSettings;
@property (retain, nonatomic) PXInlineVideoStabilizationSettings *inlineVideoStabilizationSettings;
@property (nonatomic) BOOL showTapToRadar;
@property (nonatomic) BOOL hideWIPAlerts;
@property (nonatomic) BOOL showWIPAlertRadar;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void).cxx_destruct;
- (void)setDefaultValues;
- (void)createChildren;

@end
