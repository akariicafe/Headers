@class NSArray, NSTimer, CARObserverHashTable, NSDate, NSString, DBHomeManager;
@protocol DBEnvironment;

@interface DBSmartWidgetEngine : NSObject <DBDashboardStateObserver, DBSmartWidgetResourceProvider, DBSmartWidgetSourceDelegate>

@property (readonly, weak, nonatomic) id<DBEnvironment> environment;
@property (retain, nonatomic) DBHomeManager *homeManager;
@property (retain, nonatomic) NSArray *sources;
@property (retain, nonatomic) CARObserverHashTable *observers;
@property (retain, nonatomic) NSDate *lastRefreshRequest;
@property (nonatomic) BOOL predictionsFresh;
@property (nonatomic) BOOL updatesPending;
@property (retain, nonatomic) NSDate *nextRefresh;
@property (retain, nonatomic) NSTimer *refreshTimer;
@property (retain, nonatomic) NSTimer *stoppingTimer;
@property (readonly, nonatomic) BOOL active;
@property (readonly, nonatomic) NSArray *currentPredictions;
@property (readonly, nonatomic) BOOL hasHighPriorityPrediction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_start;
- (void)_stop;
- (id)initWithEnvironment:(id)a0;
- (void)addObserver:(id)a0;
- (void)handleEvent:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)startIfNeeded;
- (void)stopIfNeeded;
- (void)refreshDisabled;
- (BOOL)_useRangeStart:(id)a0 now:(id)a1 refreshDate:(id)a2;
- (void)_postUpdatedCurrentPredictionsIfNeeded;
- (void)_resetCurrentPredictions;
- (id)_sourceForPrediction:(id)a0;
- (void)_updatePredictionsFresh;
- (void)_updateWithDashboardStateProvider:(id)a0;
- (BOOL)_useRangeEnd:(id)a0 refreshDate:(id)a1;
- (void)dashboardStateProvider:(id)a0 didChangeActiveBundleIdentifier:(id)a1;
- (void)dashboardStateProvider:(id)a0 didChangeConnectionReady:(BOOL)a1;
- (void)dashboardStateProvider:(id)a0 didChangeHomeScreenPageType:(unsigned long long)a1;
- (void)dashboardStateProvider:(id)a0 didChangeLockoutState:(unsigned long long)a1;
- (void)refreshGarageDoors;
- (void)refreshPredictions;
- (void)sourceDidRefresh:(id)a0 predictionsUpdated:(BOOL)a1;

@end
