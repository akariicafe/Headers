@class NSArray, NSMutableSet;

@interface HMEPendingTopicsCombiner : NSObject

@property (retain) NSMutableSet *addTopicFilters;
@property (retain) NSMutableSet *removeTopicFilters;
@property (readonly) NSArray *topicFiltersToAdd;
@property (readonly) NSArray *topicFiltersToRemove;

- (void)combineOntoPreviousAdditions:(id)a0 removals:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)combineWithAdditions:(id)a0 removals:(id)a1;
- (void)reset;

@end
