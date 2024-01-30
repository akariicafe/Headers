@class PUAudioClassificationSettings, PUWelcomeSettings, PUCompositeVideoSettings, PUFeedSettings, PUPhotosGridSettings, PUOneUpSettings, PUSceneSettings, UIImage, PXSharingSettings, NSString, PUIrisSettings, PUSlideshowSettings, PUSuggestionsSettings, PUTilingViewSettings, PXImportSettings, PUAirPlaySettings, PUPhotoEditProtoSettings, PUCurationSettings, PUTabbedLibrarySettings, PUAlbumListSettings, PUMedusaSettings, PUWorkaroundSettings, PUPerformanceDiagnosticsSettings;

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
+ (void)setupStatusBarInternalSettingsGestureOnInternalDevices;
+ (id)settingsControllerModule;
+ (void)_presentTapToRadar;
+ (id)photosUITesterRootViewController;
+ (void)_deleteAllDiagnosticFiles;
+ (void)_setDebugRows:(id)a0;
+ (id)_photosUICoreSettings;
+ (void)configureToastForReminderToQuitAfterLaunch:(id)a0 target:(id)a1;
+ (void)presentSettingsController;
+ (id)_saveScreenshot:(id)a0;
+ (id)_photoKitSettings;
+ (void)dismissSettingsController:(id)a0;
+ (id)_photosUIAppsSettings;
+ (void)setupStatusBarDoubleTapOnInternalDevices;
+ (id)currentAsset;
+ (void)_setCurrentAsset:(id)a0;
+ (id)_debugRowsForViewControllerStack:(id)a0;

- (id)parentSettings;
- (void)createChildren;
- (id)archiveValueForKey:(id)a0;
- (void)setDefaultValues;
- (BOOL)irisUIEnabled;
- (void)applyArchiveValue:(id)a0 forKey:(id)a1;
- (void)favoritesSettingsDidChangeFavorites:(id)a0;
- (void)setEnforceDisableIrisUI:(BOOL)a0;
- (id)favoritesSettings;
- (void)_setObservationEnabled:(BOOL)a0;
- (id)reparentedRootSettings;
- (void)restoreDefaultValues;
- (void)favoritesSettings:(id)a0 loadAccessorySettingsWithCompletionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
