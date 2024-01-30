@class _PASSimpleCoalescingTimer, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, ATXInformationHeuristicsDelegate;

@interface ATXInformationHeuristics : NSObject <ATXInformationHeuristicRefreshTriggerDelegate> {
    NSMutableSet *_heuristicRefreshTriggers;
    NSMutableSet *_heuristicsPendingRefresh;
    NSObject<OS_dispatch_queue> *_queue;
    _PASSimpleCoalescingTimer *_coalescedRefreshOperation;
}

@property (weak, nonatomic) id<ATXInformationHeuristicsDelegate> delegate;

- (id)_criteriaForRefreshJobOnDate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_setRefreshCTSJobForCriteria:(id)a0 forHeuristics:(id)a1;
- (id)sourceIdentifierForHeuristicWithName:(id)a0;
- (void)refreshResultsForAllHeuristicsPendingRefreshWithCompletionHandler:(id /* block */)a0;
- (id)getResultsFromHeuristicInterpreter:(id)a0;
- (void)refreshResultsForAllHeuristicsWithCompletionHandler:(id /* block */)a0;
- (void)informationHeuristicRefreshTrigger:(id)a0 didTriggerRefreshForHeuristics:(id)a1;
- (BOOL)_refreshResultsForHeuristics:(id)a0;
- (void)_refreshResultsForAllHeuristics:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
