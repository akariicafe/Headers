@class NSString, PKGroupsController, PKExpiredPendingCacheRequest, NSMutableDictionary, NSDictionary, UITableView, NSObject, NSMutableArray, UIBarButtonItem, NSCache;
@protocol PKExpiredTableViewControllerCachingDelegate, OS_dispatch_queue;

@interface PKExpiredTableViewController : UITableViewController <UITableViewDataSourcePrefetching> {
    UITableView *_tableView;
    BOOL _scrollingUp;
    struct CGSize { double width; double height; } _imageSizeNeeded;
    BOOL _needsFullPass;
    BOOL _isAccessibilityCategory;
    NSCache *_imageCache;
    unsigned long long _imagesToKeep;
    NSObject<OS_dispatch_queue> *_queueCaching;
    NSObject<OS_dispatch_queue> *_queuePlaceholder;
    PKExpiredPendingCacheRequest *_currentCacheRequest;
    BOOL _shouldProcessHighPriorityRequests;
    NSMutableArray *_highPriorityRequests;
    BOOL _shouldProcessLowPriorityRequests;
    NSMutableArray *_lowPriorityRequests;
    unsigned long long _visibleRows;
    NSMutableDictionary *_placeholdersPerPassStyle;
    double _snapshotDurationAverage;
    NSMutableArray *_lastSnapshotDurations;
    double _lastYOffset;
    double _lastYOffsetTime;
    BOOL _scrollingFast;
    BOOL _dragging;
    long long _currentEditingStyle;
    UIBarButtonItem *_selectedPassesText;
    long long _selectedPassesCount;
}

@property (weak, nonatomic) id<PKExpiredTableViewControllerCachingDelegate> cachingDelegate;
@property (retain, nonatomic) PKGroupsController *existingGroupsController;
@property (retain, nonatomic) NSDictionary *placeholders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)loadPlaceholdersWithCompletion:(id /* block */)a0;
+ (id)_generatePlaceholderImageForStyle:(long long)a0;

- (long long)numberOfSectionsInTableView:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewDidLoad;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 prefetchRowsAtIndexPaths:(id)a1;
- (id)tableView:(id)a0 willDeselectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willBeginEditingRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didEndEditingRowAtIndexPath:(id)a1;
- (void)_deletePassPressed;
- (void)_recoverPassPressed;
- (void)tableViewDidUpdateSelection:(id)a0;
- (id)initWithStyle:(long long)a0 placeholders:(id)a1;
- (unsigned long long)visibleRowsCount;
- (void)imageForPass:(id)a0 synchronously:(BOOL)a1 placeholder:(id /* block */)a2 completion:(id /* block */)a3;
- (void)preemptivelyCacheImagesForPass:(id)a0;
- (id)tableView:(id)a0 cellWithIdentifier:(id)a1;
- (void)loadContentAndImageSetFromExistingPassForPass:(id)a0;
- (void)clearImageCacheForPass:(id)a0;
- (void)_placeholderImageForStyle:(long long)a0 completion:(id /* block */)a1;
- (void)processCacheRequest:(id)a0;
- (void)triageCacheRequest:(id)a0;
- (void)currentCacheRequestCompletedWithImage:(id)a0 duration:(double)a1;
- (void)updateAverageSnapshotDuration:(double)a0;
- (void)removeRequestsWithCacheKey:(id)a0;
- (unsigned long long)_imagesToKeepOutsideVisibleCells;
- (void)moveHighPriorityToLowPriorityWithCacheKey:(id)a0;
- (void)_setShouldProcessLowPriorityRequests:(BOOL)a0;
- (void)resumeRequestIfNoScrollingAfterTimeInterval:(double)a0;
- (void)_updateShouldProcessHighPriorityRequestsWithFastScrolling:(BOOL)a0;
- (void)_imageOfSize:(struct CGSize { double x0; double x1; })a0 forPass:(id)a1 fullPass:(BOOL)a2 synchronously:(BOOL)a3 preemptive:(BOOL)a4 placeholder:(id /* block */)a5 completion:(id /* block */)a6;
- (id)_createImageForPass:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 cacheKey:(id)a2 fullPass:(BOOL)a3;
- (id)_selectedExpiredPassesString;
- (void)_applyDeletionOrRecovery;
- (void)_updateSelectedPassesText;
- (id)mostRecentPass;

@end
