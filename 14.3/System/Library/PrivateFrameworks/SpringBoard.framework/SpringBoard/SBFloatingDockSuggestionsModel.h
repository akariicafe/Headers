@class SBIconModel, SBFloatingDockDefaults, SBApplicationController, SBRecentDisplayItemsDataStore, SBIconController, SBAppSuggestionManager, NSOrderedSet, SBIconListModel, SBRecentDisplayItemsDefaults, NSString, NSMutableOrderedSet, PTSingleTestRecipe, SBFAnalyticsClient, NSMutableSet, SBBestAppSuggestion, SBApplication, SBRecentDisplayItemsController;
@protocol SBFloatingDockSuggestionsModelDelegate;

@interface SBFloatingDockSuggestionsModel : NSObject <SBRecentDisplayItemsPersistenceDelegate, SBRecentDisplayItemsControllerDelegate, SBIconListModelObserver>

@property (readonly, nonatomic) unsigned long long maxSuggestions;
@property (readonly, nonatomic) SBAppSuggestionManager *appSuggestionManager;
@property (readonly, nonatomic) SBRecentDisplayItemsController *recentsController;
@property (readonly, nonatomic) SBRecentDisplayItemsDataStore *recentsDataStore;
@property (readonly, nonatomic) SBRecentDisplayItemsDefaults *recentsDefaults;
@property (retain, nonatomic) SBIconListModel *userDockListModel;
@property (readonly, nonatomic) SBIconController *iconController;
@property (readonly, nonatomic) SBApplicationController *applicationController;
@property (retain, nonatomic) SBIconModel *iconModel;
@property (readonly, nonatomic) SBFloatingDockDefaults *floatingDockDefaults;
@property (nonatomic) BOOL recentsEnabled;
@property (retain, nonatomic) SBFAnalyticsClient *analyticsClient;
@property (readonly, nonatomic) NSMutableSet *pendingSuggestionUpdateReasons;
@property (readonly, nonatomic) NSMutableOrderedSet *currentRecentDisplayItems;
@property (readonly, nonatomic) NSMutableOrderedSet *currentRecentDisplayItemsSortedByRecency;
@property (copy, nonatomic) NSOrderedSet *currentDisplayItems;
@property (readonly, nonatomic) PTSingleTestRecipe *stressTestRecipe;
@property (readonly, nonatomic) SBBestAppSuggestion *currentAppSuggestion;
@property (retain, nonatomic) SBApplication *requestedSuggestedApplication;
@property (weak, nonatomic) id<SBFloatingDockSuggestionsModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_addStateCaptureHandlers;
- (void)iconList:(id)a0 didAddIcon:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)_iconModelDidLayout:(id)a0;
- (void)dealloc;
- (void)dockViewDidResignVisible;
- (void)dockViewDidBecomeVisible;
- (void)iconList:(id)a0 didReplaceIcon:(id)a1 withIcon:(id)a2;
- (void)_initializeAndObserveDefaults;
- (BOOL)recentDisplayItemsControllerShouldRepresentAppClipsAsWebClips:(id)a0;
- (BOOL)recentDisplayItemsController:(id)a0 shouldAddItem:(id)a1;
- (void)recentDisplayItemsController:(id)a0 didAddItem:(id)a1;
- (void)recentDisplayItemsController:(id)a0 didAddItem:(id)a1 andDropItem:(id)a2;
- (void)recentDisplayItemsController:(id)a0 didMoveItemToFront:(id)a1;
- (void)recentDisplayItemsController:(id)a0 didRemoveItem:(id)a1;
- (void)_runStressTestWithCompletion:(id /* block */)a0;
- (void)_iconModelDidChange:(id)a0;
- (void)beginPendingUpdatesForReason:(id)a0;
- (void)endPendingUpdatesForReason:(id)a0;
- (id)persistedDisplayItemsForDataStore:(id)a0;
- (void)dataStore:(id)a0 persistDisplayItems:(id)a1;
- (BOOL)dataStore:(id)a0 shouldRestorePersistedDisplayItem:(id)a1;
- (id)initWithMaximumNumberOfSuggestions:(unsigned long long)a0 iconController:(id)a1 recentsController:(id)a2 recentsDataStore:(id)a3 recentsDefaults:(id)a4 floatingDockDefaults:(id)a5 appSuggestionManager:(id)a6 analyticsClient:(id)a7 applicationController:(id)a8;
- (void)_setRecentsEnabled:(BOOL)a0;
- (id)_dockListModelFromIconController;
- (void)_reloadRecentsAndSuggestions;
- (void)_appSuggestionsChanged:(id)a0;
- (BOOL)_isPendingAppSuggestionsUpdate;
- (void)_performAppSuggestionChangedWithNewSuggestion:(id)a0;
- (void)_updateCurrentDisplayItemsAfterContinuityChange:(BOOL)a0 notifyDelegate:(BOOL)a1;
- (id)_moveOrAddRecentThenCull:(id)a0;
- (id)_displayItemForAppSuggestion:(id)a0;
- (unsigned long long)_indexForAppSuggestion:(id)a0;
- (id)_oldestRecent;
- (BOOL)_displayItemContainedInUserDock:(id)a0;
- (void)_handleNewRecentItem:(id)a0;
- (id)_filterRecentDisplayItems:(id)a0 filteredOutItems:(id *)a1;
- (BOOL)_shouldProcessAppSuggestion:(id)a0;

@end
