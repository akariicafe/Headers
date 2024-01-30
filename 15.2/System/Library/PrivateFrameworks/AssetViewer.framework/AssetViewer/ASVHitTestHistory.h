@class NSMutableArray;

@interface ASVHitTestHistory : NSObject

@property (readonly, nonatomic) unsigned long long resultCapacity;
@property (readonly, nonatomic) NSMutableArray *results;
@property (readonly, nonatomic) unsigned long long decisionCapacity;
@property (readonly, nonatomic) NSMutableArray *decisions;

- (void)clearHistory;
- (void).cxx_destruct;
- (void)addResult:(id)a0;
- (id)initWithResultCapacity:(unsigned long long)a0 decisionCapacity:(unsigned long long)a1;
- (void)addDecision:(id)a0;
- (id)recentDecisionsForCount:(unsigned long long)a0;
- (id)recentResultsForCount:(unsigned long long)a0;
- (void)reinitializeDecisionHistoryWithDecision:(id)a0;

@end
