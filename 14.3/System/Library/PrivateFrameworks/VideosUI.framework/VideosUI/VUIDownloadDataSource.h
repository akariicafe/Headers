@class VUIMediaLibrary, NSArray, NSMutableDictionary, SSDownloadManager, VUIMediaEntitiesFetchController, NSString;
@protocol VUIDownloadDataSourceDelegate;

@interface VUIDownloadDataSource : VUIMediaEntitiesDataSource <VUIMediaEntitiesFetchControllerDelegate, VUIDownloadManagerDelegate, SSDownloadManagerObserver>

@property (readonly, nonatomic) VUIMediaLibrary *mediaLibrary;
@property (retain, nonatomic) VUIMediaEntitiesFetchController *downloadedEntitiesFetchController;
@property (retain, nonatomic) VUIMediaEntitiesFetchController *activeDownloadingEntitiesFetchController;
@property (retain, nonatomic) SSDownloadManager *sDownloadManager;
@property (nonatomic) BOOL hasFetchedAllDownloadEntities;
@property (nonatomic) BOOL hasFetchedAllDownloadedEntities;
@property (nonatomic) BOOL performingRentalExpirationFetch;
@property (retain, nonatomic) NSArray *localMediaItems;
@property (retain, nonatomic) NSArray *activelyDownloadingAdamIds;
@property (retain, nonatomic) NSArray *activelyDownloadingMediaItems;
@property (retain, nonatomic) NSMutableDictionary *episodesDownloadingForShow;
@property (retain, nonatomic) NSMutableDictionary *groupingByShowIdentifier;
@property (weak, nonatomic) id<VUIDownloadDataSourceDelegate> downloadDelegate;
@property (retain, nonatomic) NSArray *downloadEntities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)downloadManagerDownloadsDidChange:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)downloadManager:(id)a0 downloadStatesDidChange:(id)a1;
- (id)initWithMediaLibrary:(id)a0 fetchRequest:(id)a1;
- (void)controller:(id)a0 fetchRequests:(id)a1 didCompleteWithResult:(id)a2;
- (void)controller:(id)a0 fetchRequests:(id)a1 didFailWithError:(id)a2;
- (void)startFetch;
- (void)_addNotificationObservers;
- (void)_loadActiveDownloads;
- (void)_removeNotifcationObservers;
- (void)_loadDownloadedEntities;
- (id)_createGroupingByShowIdentifierWithLatestMediaEntityGroups:(id)a0;
- (id)_coalesceActiveDownloadEntitiesAndDownloadedEntities;
- (id)_sortDownloadEntitiesByTitle:(id)a0;
- (BOOL)_downloadsDidChange:(id)a0;
- (void)_notifyDelegatesDownloadsFetchCompletedWithChanges:(BOOL)a0;
- (void)_handleDownloadingStateDidChange;
- (void)_getActivelyDownloadingAdamIDsWithCompletion:(id /* block */)a0;
- (void)_rentalsDidExpire;
- (BOOL)_doesEpisodeSet:(id)a0 containMediaEntity:(id)a1;
- (id)_createDownloadEntitiesFromLatestDownloads:(id)a0;
- (void)_upsertEpisodesDownloadingForShowWithMediaEntity:(id)a0;
- (id)_getDownloadEntityInDownloadEntities:(id)a0 containingMediaEntity:(id)a1;
- (id)_upsertDownloadEntities:(id)a0 withEpisodesDownloadingForShow:(id)a1;
- (void)loadDownloadData;
- (void)_updateDownloadEntity:(id *)a0 withLatestMediaEntity:(id)a1;

@end
