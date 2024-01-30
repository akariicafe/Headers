@class SSMetricsEventTable;

@interface SSMetricsEventController : SSMetricsController {
    SSMetricsEventTable *_table;
}

- (id)unreportedEventsForURL:(id)a0 since:(long long)a1 suppressDSID:(BOOL)a2;
- (BOOL)deleteEventsInsertedBefore:(long long)a0;
- (id)_collectUnreportedPIDsFromDatabase:(id)a0 matchingReportURLString:(id)a1 since:(long long)a2 suppressUserInfo:(BOOL)a3;
- (void)flushUnreportedEventsWithCompletionHandler:(id /* block */)a0;
- (void)_serialQueueInsertEvents:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)unreportedEventURLsSince:(long long)a0;
- (int)_maximumUnreportedToSelect;
- (long long)countUnreportedEventsBefore:(long long)a0;
- (id)unreportedEventsForURL:(id)a0 since:(long long)a1 suppressUserInfo:(BOOL)a2;
- (id)init;
- (BOOL)insertEventSummaries:(id)a0 error:(id *)a1;
- (BOOL)deleteReportedEvents;
- (id)unreportedEventsSince:(long long)a0;
- (id)_collectUnreportedEventsFromDatabase:(id)a0 since:(long long)a1;
- (BOOL)markEventsAsReported:(id)a0;
- (void).cxx_destruct;

@end
