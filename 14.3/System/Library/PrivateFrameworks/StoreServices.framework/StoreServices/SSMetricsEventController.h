@class SSMetricsEventTable;

@interface SSMetricsEventController : SSMetricsController {
    SSMetricsEventTable *_table;
}

- (id)init;
- (long long)countUnreportedEventsBefore:(long long)a0;
- (void).cxx_destruct;
- (id)unreportedEventURLsSince:(long long)a0;
- (id)unreportedEventsForURL:(id)a0 since:(long long)a1 suppressUserInfo:(BOOL)a2;
- (void)flushUnreportedEventsWithCompletionHandler:(id /* block */)a0;
- (id)unreportedEventsForURL:(id)a0 since:(long long)a1 suppressDSID:(BOOL)a2;
- (BOOL)deleteEventsInsertedBefore:(long long)a0;
- (BOOL)insertEventSummaries:(id)a0 error:(id *)a1;
- (id)_collectUnreportedPIDsFromDatabase:(id)a0 matchingReportURLString:(id)a1 since:(long long)a2 suppressUserInfo:(BOOL)a3;
- (BOOL)deleteReportedEvents;
- (int)_maximumUnreportedToSelect;
- (BOOL)markEventsAsReported:(id)a0;
- (void)_serialQueueInsertEvents:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
