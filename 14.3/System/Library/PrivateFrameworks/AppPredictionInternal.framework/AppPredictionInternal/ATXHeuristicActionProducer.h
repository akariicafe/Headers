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

+ (double)generateScoreForHeuristic:(id)a0;
+ (unsigned long long)actionExperienceForScoredHeuristicAction:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)userAlreadyEngagedWithAction:(id)a0;
- (BOOL)isActionBlacklisted:(id)a0;
- (void)dealloc;
- (id)digitalHealthBlacklist;
- (id)produceActions;
- (id)bundleIdForAction:(id)a0;
- (id)actionPredictionBlacklist;
- (id)blacklistSubstitutionForBundleId:(id)a0;
- (void)invalidate;

@end
