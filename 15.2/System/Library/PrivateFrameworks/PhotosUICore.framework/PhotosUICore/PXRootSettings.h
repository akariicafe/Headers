@class PXPeopleUISettings, PXKitSettings, PXMemoriesRelatedSettings, PXAlbumsDebugUISettings, PXMessagesUISettings, PXPeopleDetailSettings, PXImportSettings, PXMemoriesFeedSettings, PXDiagnosticsSettings, PXOneUpSettings, PXPhotosDetailsSettings, PXPhotosDataSourceSettings, PXPhotosDetailsHeaderTileSettings, PXImageModulationSettings, PXAssetVariationsSettings, PXGridKitSettings, PXContentSyndicationSettings, PXCompleteMyMomentSettings, PXModelSettings, PXPhotoPickerSettings, PXAssetsSceneSettings, PXTilingSettings, PXCuratedLibrarySettings, PXUpNextSettings, PXRelatedSettings, PXPhotosGridSettings, PXDragAndDropSettings, PXAudioSettings, PXGridSettings, PXFooterSettings, PXForYouSettings, PXGPPTSettings, PXZoomablePhotosSettings, PXInlineVideoStabilizationSettings, PXWorkaroundSettings, PXSharingSettings, PXCursorInteractionSettings, PXVideoPlaybackSettings, PXStorySettings, PXKeyboardSettings, PXViewControllerTransitionSettings, PXSearchSettings, PXCPLStatusSettings, PXApplicationSettings;

@interface PXRootSettings : PXSettings

@property (nonatomic) BOOL private_wantsInternalUI;
@property (retain, nonatomic) PXDiagnosticsSettings *diagnostics;
@property (retain, nonatomic) PXStorySettings *storySettings;
@property (retain, nonatomic) PXImageModulationSettings *imageModulationSettings;
@property (retain, nonatomic) PXZoomablePhotosSettings *zoomablePhotosSettings;
@property (retain, nonatomic) PXCuratedLibrarySettings *curatedLibrarySettings;
@property (retain, nonatomic) PXPhotoPickerSettings *photoPickerSettings;
@property (retain, nonatomic) PXKeyboardSettings *keyboardSettings;
@property (retain, nonatomic) PXVideoPlaybackSettings *videoPlaybackSettings;
@property (retain, nonatomic) PXOneUpSettings *oneUpSettings;
@property (retain, nonatomic) PXPhotosDetailsSettings *photosDetails;
@property (retain, nonatomic) PXPhotosDetailsHeaderTileSettings *photosDetailsHeaderTile;
@property (retain, nonatomic) PXRelatedSettings *related;
@property (retain, nonatomic) PXMemoriesFeedSettings *memoryFeed;
@property (retain, nonatomic) PXMemoriesRelatedSettings *memoriesRelated;
@property (retain, nonatomic) PXUpNextSettings *upNextSettings;
@property (retain, nonatomic) PXContentSyndicationSettings *contentSyndicationSettings;
@property (retain, nonatomic) PXMessagesUISettings *messagesUISettings;
@property (retain, nonatomic) PXAssetsSceneSettings *assetsScene;
@property (retain, nonatomic) PXPhotosDataSourceSettings *photosDataSource;
@property (retain, nonatomic) PXTilingSettings *tiling;
@property (retain, nonatomic) PXModelSettings *model;
@property (retain, nonatomic) PXKitSettings *kit;
@property (retain, nonatomic) PXWorkaroundSettings *workaroundSettings;
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
@property (nonatomic) BOOL showLibraryFilterTip;
@property (retain, nonatomic) PXAudioSettings *audioSettings;
@property (nonatomic) BOOL hideWIPAlerts;
@property (nonatomic) BOOL showWIPAlertRadar;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)createChildren;
- (void)setDefaultValues;
- (id)parentSettings;
- (void).cxx_destruct;
- (void)setCanShowInternalUI:(BOOL)a0;
- (BOOL)canShowInternalUI;

@end
