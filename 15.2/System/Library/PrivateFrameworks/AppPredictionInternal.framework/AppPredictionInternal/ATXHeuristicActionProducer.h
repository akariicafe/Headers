@class NSString;
@protocol ATXActionProducerDelegate;

@interface ATXHeuristicActionProducer : NSObject <ATXActionProducer> {
    id _expireNotificationHandle;
}

@property (weak, nonatomic) id<ATXActionProducerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)actionExperienceForScoredHeuristicAction:(id)a0;
+ (double)generateScoreForHeuristic:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)bundleIdForAction:(id)a0;
- (id)produceActions;
- (BOOL)isActionBlacklisted:(id)a0;
- (BOOL)userAlreadyEngagedWithAction:(id)a0;
- (void)invalidate;
- (id)actionPredictionBlacklist;
- (void)dealloc;
- (id)digitalHealthBlacklist;

@end
