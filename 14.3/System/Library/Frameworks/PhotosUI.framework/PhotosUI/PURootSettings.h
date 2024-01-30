@class PUAudioClassificationSettings, PUWelcomeSettings, PUCompositeVideoSettings, PUFeedSettings, PUPhotosGridSettings, PUOneUpSettings, PUSceneSettings, UIImage, NSString, PXSharingSettings, PUSlideshowSettings, PUSuggestionsSettings, PUTilingViewSettings, PUIrisSettings, PXImportSettings, PUAirPlaySettings, PUPhotoEditProtoSettings, PUCurationSettings, PUTabbedLibrarySettings, PUMedusaSettings, PUAlbumListSettings, PUWorkaroundSettings, PUMomentsSettings, PUPerformanceDiagnosticsSettings;

@interface PURootSettings : PXSettings <PXFavoritesSettingsDelegate> {
    BOOL _enforceDisableIrisUI;
}

@property (retain, nonatomic) NSString *_internal_libraryStateBriefDescription;
@property (retain, nonatomic) UIImage *_internal_libraryStateImage;
@property (nonatomic) BOOL allowIrisUI;
@property (retain, nonatomic) PUCompositeVideoSettings *compositeVideoSettings;
@property (retain, nonatomic) PUTabbedLibrarySettings *tabbedLibrarySettings;
@property (retain, nonatomic) PUPhotosGridSettings *photosGridSettings;
@property (retain, nonatomic) PUPhotoEditProtoSettings *photoEditingSettings;
@property (retain, nonatomic) PUFeedSettings *feedSettings;
@property (retain, nonatomic) PUMomentsSettings *momentsSettings;
@property (retain, nonatomic) PUMedusaSettings *medusaSettings;
@property (retain, nonatomic) PUOneUpSettings *oneUpSettings;
@property (retain, nonatomic) PUTilingViewSettings *tilingViewSettings;
@property (retain, nonatomic) Class interfaceThemeClass;
@property (retain, nonatomic) PUAirPlaySettings *airPlaySettings;
@property (retain, nonatomic) PUSlideshowSettings *slideshowSettings;
@property (retain, nonatomic) PUAlbumListSettings *albumListSettings;
@property (retain, nonatomic) PUWelcomeSettings *welcomeSettings;
@property (retain, nonatomic) PUWorkaroundSettings *workaroundSettings;
@property (retain, nonatomic) PUSceneSettings *sceneSettings;
@property (retain, nonatomic) PUAudioClassificationSettings *audioClassificationSettings;
@property (retain, nonatomic) PXSharingSettings *sharingSettings;
@property (retain, nonatomic) PUCurationSettings *curation;
@property (retain, nonatomic) PUSuggestionsSettings *suggestions;
@property (retain, nonatomic) PUIrisSettings *irisSettings;
@property (retain, nonatomic) PUPerformanceDiagnosticsSettings *performanceDiagnosticsSettings;
@property (retain, nonatomic) PXImportSettings *importSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)_setDebugRows:(id)a0;
+ (id)_saveScreenshot:(id)a0;
+ (void)_presentTapToRadar;
+ (id)_debugRowsForViewControllerStack:(id)a0;
+ (void)_setCurrentAsset:(id)a0;
+ (id)_photosUIAppsSettings;
+ (void)dismissSettingsController:(id)a0;
+ (id)_photoKitSettings;
+ (void)setupStatusBarInternalSettingsGestureOnInternalDevices;
+ (id)photosUITesterRootViewController;
+ (void)_deleteAllDiagnosticFiles;
+ (id)currentAsset;
+ (void)setupStatusBarDoubleTapOnInternalDevices;
+ (void)presentSettingsController;
+ (id)settingsControllerModule;
+ (id)_photosUICoreSettings;

- (id)parentSettings;
- (void)favoritesSettingsDidChangeFavorites:(id)a0;
- (void).cxx_destruct;
- (id)reparentedRootSettings;
- (id)favoritesSettings;
- (void)restoreDefaultValues;
- (id)archiveValueForKey:(id)a0;
- (void)favoritesSettings:(id)a0 loadAccessorySettingsWithCompletionHandler:(id /* block */)a1;
- (void)setDefaultValues;
- (BOOL)irisUIEnabled;
- (void)_setObservationEnabled:(BOOL)a0;
- (void)applyArchiveValue:(id)a0 forKey:(id)a1;
- (void)setEnforceDisableIrisUI:(BOOL)a0;
- (void)createChildren;

@end
