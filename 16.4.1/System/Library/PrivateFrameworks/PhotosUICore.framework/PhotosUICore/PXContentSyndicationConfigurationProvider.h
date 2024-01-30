@class NSString, PXContentSyndicationDataSourceManager, PHPhotoLibrary, NSNumber, SLHighlightCenter;

@interface PXContentSyndicationConfigurationProvider : PXObservable <PXCollectionsDataSourceManagerObserver, PXSettingsKeyObserver, SLHighlightCenterDelegate> {
    SLHighlightCenter *_socialLayerHighlightCenter;
}

@property (class, retain, nonatomic) NSNumber *testingOverride_contentSyndicationEnabled;
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

- (void)_createDataSourceManagerIfNeeded;
- (void)_markDataSourceManagerAsReadyToLoad;
- (void)highlightCenterSettingsEnablementHasChanged:(id)a0;
- (id)_init;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)setShowUnsavedSyndicatedContentInMemories:(BOOL)a0;
- (void)_updateShowUnsavedSyndicatedContentInMemories;
- (id)_dataSourceManagerForDataSourceType:(long long)a0;
- (void)_invalidateDataSourceManager;
- (void)_startObservingSystemLibraryChanges;
- (void)highlightCenter:(id)a0 didRemoveHighlights:(id)a1;
- (void)_updateShowContentSyndicationItemInSidebar;
- (void)dealloc;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)_updateEverything;
- (void)_updateDataSourceType;
- (void)_updateShowUnsavedSyndicatedContentInPhotosGrids;
- (id)init;
- (void)setShowUnsavedSyndicatedContentInFeaturedPhotos:(BOOL)a0;
- (void)_updateContentSyndicationAvailability;
- (void)_stopObservingSystemLibraryChanges;
- (void).cxx_destruct;
- (void)_updateShowUnsavedSyndicatedContentInFeaturedPhotos;

@end
