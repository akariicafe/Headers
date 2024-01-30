@class PLPhotoLibrary, NSMutableDictionary, NSDate, NSMutableArray;
@protocol PXFeedSectionInfosManagerDelegate;

@interface PXFeedSectionInfosManager : NSObject <PLCloudFeedEntriesObserver, PLCloudCommentsChangeObserver, PLAssetChangeObserver, PLPhotoLibraryShouldReloadObserver, PXConfigurableFeedSectionInfosManager> {
    PLPhotoLibrary *_photoLibrary;
    NSMutableArray *_sectionInfos;
    NSMutableDictionary *_sectionInfosByCloudFeedEntry;
    NSMutableArray *_pendingFeedEntriesChangeNotifications;
    NSMutableArray *_pendingCommentsChangeNotifications;
    NSMutableArray *_pendingAssetsChangeNotifications;
}

@property (class, readonly, nonatomic) NSDate *mostRecentCreationDate;

@property (weak, nonatomic) id<PXFeedSectionInfosManagerDelegate> delegate;
@property (nonatomic) long long entryFilter;
@property (retain, nonatomic) NSDate *earliestDate;
@property (nonatomic) unsigned long long fetchLimit;

- (void)_didFinishPostingNotifications:(id)a0;
- (void)dealloc;
- (void)reconfigure:(id /* block */)a0;
- (void).cxx_destruct;
- (void)assetsDidChange:(id)a0;
- (void)cloudCommentsDidChange:(id)a0;
- (void)cloudFeedEntriesDidChange:(id)a0;
- (void)shouldReload:(id)a0;
- (void)_getEarliestDate:(out id *)a0 mostRecentEntries:(out id *)a1 forBatchWithLatestDate:(id)a2;
- (void)_rebuildSectionInfos;
- (id /* block */)_sectionInfoSortingComparator;
- (BOOL)_shouldPerformFullReloadForFeedEntriesChangeNotifications:(id)a0 commentsChangeNotifications:(id)a1;
- (void)_updateSectionInfosForFeedEntriesChangeNotifications:(id)a0 commentsChangeNotifications:(id)a1 assetsChangeNotifications:(id)a2;
- (BOOL)hasEnoughCloudFeedAssetEntriesToDisplay;
- (long long)indexOfSectionInfo:(id)a0;
- (long long)indexOfSectionInfoForCloudFeedEntry:(id)a0;
- (id)indexesOfInvitationsReceivedSectionInfos;
- (id)indexesOfUnloadedSectionInfosAtIndexes:(id)a0;
- (id)initWithPhotoLibrary:(id)a0 configurationBlock:(id /* block */)a1;
- (id)initWithPhotoLibraryForTesting:(id)a0 filter:(long long)a1;
- (void)loadSectionInfosAtIndexes:(id)a0;
- (long long)numberOfInvitationsReceived;
- (long long)numberOfSectionInfos;
- (BOOL)reconfigureToIncludeCloudFeedEntry:(id)a0;
- (id)sectionInfoAtIndex:(long long)a0;
- (id)sectionInfoWithIdentifier:(id)a0;
- (id)sectionInfosAtIndexes:(id)a0;

@end
