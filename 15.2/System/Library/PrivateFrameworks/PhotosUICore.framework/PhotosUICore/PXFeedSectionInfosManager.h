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
- (void).cxx_destruct;
- (void)shouldReload:(id)a0;
- (void)assetsDidChange:(id)a0;
- (void)cloudFeedEntriesDidChange:(id)a0;
- (void)cloudCommentsDidChange:(id)a0;
- (void)dealloc;
- (void)reconfigure:(id /* block */)a0;
- (long long)indexOfSectionInfoForCloudFeedEntry:(id)a0;
- (long long)indexOfSectionInfo:(id)a0;
- (id)sectionInfoAtIndex:(long long)a0;
- (BOOL)reconfigureToIncludeCloudFeedEntry:(id)a0;
- (id)sectionInfoWithIdentifier:(id)a0;
- (long long)numberOfInvitationsReceived;
- (long long)numberOfSectionInfos;
- (void)loadSectionInfosAtIndexes:(id)a0;
- (id)indexesOfUnloadedSectionInfosAtIndexes:(id)a0;
- (BOOL)hasEnoughCloudFeedAssetEntriesToDisplay;
- (id)indexesOfInvitationsReceivedSectionInfos;
- (id)sectionInfosAtIndexes:(id)a0;
- (id)initWithPhotoLibrary:(id)a0 configurationBlock:(id /* block */)a1;
- (void)_rebuildSectionInfos;
- (void)_getEarliestDate:(out id *)a0 mostRecentEntries:(out id *)a1 forBatchWithLatestDate:(id)a2;
- (BOOL)_shouldPerformFullReloadForFeedEntriesChangeNotifications:(id)a0 commentsChangeNotifications:(id)a1;
- (void)_updateSectionInfosForFeedEntriesChangeNotifications:(id)a0 commentsChangeNotifications:(id)a1 assetsChangeNotifications:(id)a2;
- (id /* block */)_sectionInfoSortingComparator;
- (id)initWithPhotoLibraryForTesting:(id)a0 filter:(long long)a1;

@end
