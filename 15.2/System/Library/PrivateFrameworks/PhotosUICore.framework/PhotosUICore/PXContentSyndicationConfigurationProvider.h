@class NSString, PXContentSyndicationDataSourceManager, PHPhotoLibrary, SLHighlightCenter;

@interface PXContentSyndicationConfigurationProvider : PXObservable <PXCollectionsDataSourceManagerObserver, PXSettingsKeyObserver, SLHighlightCenterDelegate> {
    SLHighlightCenter *_socialLayerHighlightCenter;
}

@property (class, readonly) PXContentSyndicationConfigurationProvider *sharedInstance;

@property (nonatomic) BOOL contentSyndicationIsAvailable;
@property (nonatomic) long long dataSourceType;
@property (nonatomic) BOOL showUnsavedSyndicatedContentInPhotosGrids;
@property (nonatomic) BOOL showContentSyndicationItemInSidebar;
@property (nonatomic) BOOL readyToLoadActualDataSourceManager;
@property (retain, nonatomic) PXContentSyndicationDataSourceManager *syndicationItemsDataSourceManager;
@property (retain, nonatomic) PHPhotoLibrary *syndicationPhotoLibrary;
@property (nonatomic) int systemLibraryChangeToken;
@property (readonly, nonatomic) BOOL showUnsavedSyndicatedContentInMemories;
@property (readonly, nonatomic) BOOL showUnsavedSyndicatedContentInFeaturedPhotos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)_updateShowUnsavedSyndicatedContentInFeaturedPhotos;
- (void)_updateEverything;
- (void)_updateShowUnsavedSyndicatedContentInPhotosGrids;
- (void)_createDataSourceManagerIfNeeded;
- (void)_updateShowUnsavedSyndicatedContentInMemories;
- (void)_markDataSourceManagerAsReadyToLoad;
- (void)_updateShowContentSyndicationItemInSidebar;
- (void)_invalidateDataSourceManager;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_stopObservingSystemLibraryChanges;
- (id)init;
- (id)_init;
- (void)highlightCenterSettingsEnablementHasChanged:(id)a0;
- (id)_dataSourceManagerForDataSourceType:(long long)a0;
- (void)setShowUnsavedSyndicatedContentInMemories:(BOOL)a0;
- (void)_startObservingSystemLibraryChanges;
- (void)highlightCenter:(id)a0 didRemoveHighlights:(id)a1;
- (void)_updateDataSourceType;
- (void)dealloc;
- (void)setShowUnsavedSyndicatedContentInFeaturedPhotos:(BOOL)a0;
- (void)_updateContentSyndicationAvailability;

@end
