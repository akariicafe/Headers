@class HFItemManager, NSDictionary, NAFuture;

@interface HFItem : NSObject

@property (weak, nonatomic) NAFuture *cancellableInFlightUpdateFuture;
@property (nonatomic) unsigned long long loadingState;
@property (weak, nonatomic) HFItemManager *_debug_owningItemManager;
@property (nonatomic) BOOL _debug_isChildItem;
@property (retain, nonatomic) NSDictionary *latestResults;

- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (id)updateWithOptions:(id)a0;
- (void)copyLatestResultsFromItem:(id)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)_finalOutcomeForSubclassOutcome:(id)a0 previousResults:(id)a1 updateOptions:(id)a2;
- (unsigned long long)_effectiveLoadingStateForSuggestedLoadingState:(unsigned long long)a0;
- (BOOL)resultsContainRequiredProperties:(id)a0;

@end
