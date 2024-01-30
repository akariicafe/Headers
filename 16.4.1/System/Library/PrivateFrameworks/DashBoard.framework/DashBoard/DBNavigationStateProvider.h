@class NSString, NSArray, CARObserverHashTable, CARActiveNavigationIdentifiersObserver;
@protocol DBNavigationAppInfoProviding, DBIconProviding, DBAppHistoryAppDockProviding;

@interface DBNavigationStateProvider : NSObject <CARActiveNavigationIdentifiersObserving, BSInvalidatable, DBAppHistoryObserving>

@property (retain, nonatomic) CARActiveNavigationIdentifiersObserver *activeNavigationIdentifiersObserver;
@property (retain, nonatomic) CARObserverHashTable *observers;
@property (copy, nonatomic) NSString *mostRecentlyActivatedDashboardApp;
@property (copy, nonatomic) NSString *mostRecentlyActivatedClusterApp;
@property (weak, nonatomic) id<DBIconProviding> iconProvider;
@property (weak, nonatomic) id<DBNavigationAppInfoProviding> infoProvider;
@property (weak, nonatomic) id<DBAppHistoryAppDockProviding> appHistoryAppDockProvider;
@property (readonly, nonatomic) NSArray *navigatingIdentifiers;
@property (readonly, nonatomic) NSString *mostRecentClusterNavigatingApp;
@property (readonly, nonatomic) NSString *mostRecentDashboardNavigatingApp;
@property (readonly, nonatomic) NSString *mostRecentNavigatingApp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)activeNavigationIdentifiersObserver:(id)a0 updatedActiveNavigationIdentifiers:(id)a1;
- (id)_initWithActiveNavigationIdentifiersObserver:(id)a0;
- (void)_updateMostRecentClusterApp;
- (void)_updateMostRecentDockApp;
- (void)appHistory:(id)a0 mostRecentHomeScreenUpdatedTo:(id)a1;
- (void)appHistory:(id)a0 mostRecentNavigationAppUpdatedTo:(id)a1;
- (void)appHistory:(id)a0 mostRecentOtherAppUpdatedTo:(id)a1;

@end
