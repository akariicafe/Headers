@interface ATXHeuristicActionProducer : NSObject {
    id _expireNotificationHandle;
}

+ (id)sharedInstance;
+ (unsigned long long)actionExperienceForScoredHeuristicAction:(id)a0;
+ (double)generateScoreForHeuristic:(id)a0;

- (id)bundleIdForAction:(id)a0;
- (id)produceActions;
- (void)invalidateOnGlobalQueueWithDelay:(double)a0;
- (void)coalescedProduceActions;
- (void)scheduleNextHeuristicRefreshGivenActions:(id)a0;
- (id)digitalHealthBlacklist;
- (BOOL)userAlreadyEngagedWithAction:(id)a0;
- (void)dealloc;
- (void)setUpdateJobForCriteria:(id)a0;
- (id)firstUpdateDateForActions:(id)a0;
- (BOOL)isActionBlacklisted:(id)a0;
- (id)init;
- (void)invalidate;
- (id)actionPredictionBlacklist;
- (void).cxx_destruct;
- (id)_criteriaForJobOnDate:(id)a0;

@end
