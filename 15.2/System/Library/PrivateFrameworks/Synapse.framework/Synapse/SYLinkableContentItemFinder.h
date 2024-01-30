@class FBSDisplayLayoutMonitor, NSArray, NSObject;
@protocol OS_dispatch_queue, SYLinkableContentItemFinderDelegate;

@interface SYLinkableContentItemFinder : NSObject

@property (readonly, nonatomic) FBSDisplayLayoutMonitor *_displayLayoutMonitor;
@property (copy, nonatomic) NSArray *_foregroundAppBundleIDs;
@property (nonatomic) long long _foregroundAppLoadRetriesRemaining;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_itemFinderQueue;
@property (weak) id<SYLinkableContentItemFinderDelegate> delegate;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)fetchLinkableContentItemsExcludingActivities:(id)a0 completion:(id /* block */)a1;
- (void)_updateForegroundAppsFromDisplayLayout:(id)a0;
- (void)_fetchActiveLinkableUserActivitiesExcluding:(id)a0 completion:(id /* block */)a1;
- (id)_currentForegroundAppBundleIDs;
- (BOOL)_shouldIncludeAsLinkableUserActivity:(id)a0 bundleID:(id)a1 foregroundBundleIDs:(id)a2 excludedActivities:(id)a3;
- (void)_activityFetchingFinishedWithActivities:(id)a0 appBundleIDs:(id)a1 foregroundBundleIDs:(id)a2 completion:(id /* block */)a3;
- (void)handleRemoteCurrentActivityDidChange;

@end
