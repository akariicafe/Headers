@class NSError, NSString, NSMutableDictionary, DSTableView, DSSourceRepository, DSSharingPermissions, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, DSNavigationDelegate;

@interface DSSharingPermissionsController : DSTableWelcomeController <DSSharingPermissionsDetailDelegate, DSController> {
    _Atomic int _fetchState;
}

@property (retain, nonatomic) DSSourceRepository *repo;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) DSSharingPermissions *permissions;
@property (retain, nonatomic) NSMutableSet *selectedPeople;
@property (retain, nonatomic) NSMutableSet *selectedTypes;
@property unsigned long long fetchCompletedTime;
@property (retain, nonatomic) NSError *cachedFetchError;
@property (retain, nonatomic) NSMutableDictionary *personIconCache;
@property (weak, nonatomic) id<DSNavigationDelegate> delegate;
@property (retain, nonatomic) DSTableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)_updateTitle;
- (void)didEnterBackground;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)updateSearchResultsForSearchController:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)registerForNotifications;
- (id)init;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)searchBar:(id)a0 selectedScopeButtonIndexDidChange:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)unregisterForNotifications;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (void)_updateButton;
- (BOOL)isFindMyASource;
- (void)_addLinkButton;
- (void)_fetchCompletedWithError:(id)a0;
- (void)_pushNextPane;
- (void)addUnsharedPerson:(id)a0;
- (void)addUnsharedSource:(id)a0 resources:(id)a1;
- (void)fetchSharingPermissions;
- (void)filterContentForSearchText:(id)a0 category:(long long)a1;
- (id)personForIndexPath:(id)a0;
- (void)postAnalytics;
- (void)presentFetchErrorMessage:(id)a0;
- (void)reloadTableViewData;
- (void)requestNewFetchImmediately:(BOOL)a0;
- (void)setFetchNeeded;
- (void)setUrgentFetchNeeded;
- (void)sharingStoppedForPerson:(id)a0 sourceNames:(id)a1;
- (void)sharingStoppedForType:(id)a0 people:(id)a1;
- (id)sharingTypeForIndexPath:(id)a0;
- (void)stopAllSharing;
- (void)stopSelectedSharing;
- (void)stopSharingFailedWithError:(id)a0;
- (void)stopSharingFlowCompleted;
- (id)tableIconForPerson:(id)a0;

@end
