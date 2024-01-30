@class _DKKnowledgeStore;

@interface REDuetKnowledgeStore : RESingleton {
    _DKKnowledgeStore *_knowledgeStore;
}

- (void).cxx_destruct;
- (id)sleepInterval;
- (id)_init;
- (id)queryForTopNApplications:(long long)a0 withLikelihoodGreaterThan:(double)a1 withTemporalResolution:(int)a2;
- (void)executeQuery:(id)a0 responseQueue:(id)a1 completion:(id /* block */)a2;
- (id)queryForPredictedChargingEventsWithMinimumDuration:(double)a0;
- (id)queryForHistoricChargingEventsWithMinimumDuration:(double)a0 inThePastDays:(unsigned long long)a1;
- (id)queryForDuetEventWithIdentifier:(id)a0;
- (id)queryForAllDonatedActions;
- (void)executeQuerySynchronouslyWithBatching:(id)a0 completion:(id /* block */)a1;
- (id)queryForAllDonatedActionsWithIdentifier:(id)a0;
- (id)queryForDonatedActionsAfterDate:(id)a0;
- (id)queryForDeletedActionsAfterDate:(id)a0;
- (id)queryForAllRelevantShortcuts;
- (id)_createTimelineFromPredictionTimeline:(id)a0 filterEmptyData:(BOOL)a1;
- (id)_duetChargingEventStream;
- (id)_createEventsFromDuetEvents:(id)a0;
- (id)_duetQueryForDonatedActionsAfterDate:(id)a0 onStreams:(id)a1 withPredicate:(id)a2;
- (id)_createActionsFromDuetEvents:(id)a0;
- (id)_duetDonationsStreams;
- (id)_queryForDonatedActionsAfterDate:(id)a0 streams:(id)a1;
- (id)_createTombstonesFromDuetEvents:(id)a0;
- (void)_executeQuery:(id)a0 responseQueue:(id)a1 synchronouslyWithBatching:(BOOL)a2 completion:(id /* block */)a3;
- (id)_queryForUnfilteredDonationsForStream:(id)a0;
- (id)queryForUnfilteredUserActivityDonations;
- (id)queryForUnfilteredIntentDonations;
- (id)queryForUnfilteredRelevantShortcutDonations;

@end
