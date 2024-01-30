@class SSMetricsEventTable;

@interface SSMetricsEventController : SSMetricsController {
    SSMetricsEventTable *_table;
}

- (void)flushUnreportedEventsWithCompletionHandler:(id /* block */)a0;
- (id)unreportedEventsForURL:(id)a0 since:(long long)a1 suppressDSID:(BOOL)a2;
- (long long)countUnreportedEventsBefore:(long long)a0;
- (id)unreportedEventURLsSince:(long long)a0;
- (BOOL)insertEventSummaries:(id)a0 error:(id *)a1;
- (id)_collectUnreportedPIDsFromDatabase:(id)a0 matchingReportURLString:(id)a1 since:(long long)a2 suppressUserInfo:(BOOL)a3;
- (int)_maximumUnreportedToSelect;
- (void).cxx_destruct;
- (id)init;
- (id)unreportedEventsForURL:(id)a0 since:(long long)a1 suppressUserInfo:(BOOL)a2;
- (void)_serialQueueInsertEvents:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)deleteReportedEvents;
- (BOOL)deleteEventsInsertedBefore:(long long)a0;
- (BOOL)markEventsAsReported:(id)a0;

@end
