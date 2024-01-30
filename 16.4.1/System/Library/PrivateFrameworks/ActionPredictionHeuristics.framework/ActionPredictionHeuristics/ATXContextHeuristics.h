@class NSString, ATXContextHeuristicCache, ATXInformationHeuristicRefreshTimeTrigger, ATXLocationManager, NSMutableSet, NSObject, ATXHeuristicDevice, _PASSimpleCoalescingTimer;
@protocol ATXContextHeuristicsDelegate, OS_dispatch_queue;

@interface ATXContextHeuristics : NSObject <ATXInformationHeuristicRefreshTriggerDelegate, ATXContextHeuristicsEnvironment> {
    ATXLocationManager *_locationManager;
    NSMutableSet *_heuristicRefreshTriggers;
    NSMutableSet *_heuristicsPendingRefresh;
    NSObject<OS_dispatch_queue> *_queue;
    ATXContextHeuristicCache *_resultsCache;
    _PASSimpleCoalescingTimer *_coalescedRefreshOperation;
    ATXInformationHeuristicRefreshTimeTrigger *_earliestRefreshTimeTrigger;
}

@property (weak, nonatomic) id<ATXContextHeuristicsDelegate> delegate;
@property (readonly, nonatomic) ATXHeuristicDevice *heuristicDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateHeuristicName:(id)a0 withRefreshTriggers:(id)a1;
- (BOOL)_refreshResultsForHeuristics:(id)a0;
- (id)initWithLocationManager:(id)a0;
- (void)informationHeuristicRefreshTrigger:(id)a0 didTriggerRefreshForHeuristics:(id)a1;
- (void)_refreshResultsForAllHeuristicsWithCompletionHandler:(id /* block */)a0;
- (void)refreshResultsForAllHeuristicsPendingRefreshWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
