@class NSString;

@interface ATXHeuristicSpotlightRecent : NSObject <ATXContextHeuristicProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_recentSpotlightSearchTopicsWithLimit:(long long)a0;
- (id)_fetchRecentSpotlightResults:(long long)a0;
- (id)heuristicResultWithEnvironment:(id)a0;
- (id)_spotlightActionsForTopics:(id)a0;
- (id)permanentRefreshTriggers;

@end
