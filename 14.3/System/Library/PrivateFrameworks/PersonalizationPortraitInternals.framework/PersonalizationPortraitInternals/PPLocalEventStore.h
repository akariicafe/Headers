@class PPEventCache, _PASNotificationToken, PPEventStorage;

@interface PPLocalEventStore : NSObject <PPFeedbackAccepting> {
    PPEventCache *_eventCache;
    PPEventStorage *_storage;
    _PASNotificationToken *_assetUpdateNotificationToken;
}

+ (id)defaultStore;

- (void)clearCaches;
- (void)_registerForNotifications;
- (id)init;
- (id)resolveEventNameRecordChanges:(id)a0 client:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)eventHighlightForEvent:(id)a0 usingScorer:(id)a1 date:(id)a2 rankingOptions:(int)a3 loadedFromEventKit:(BOOL *)a4;
- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (void)_setupCalendarVisibilityManager;
- (id)highlightedEventsWithQuery:(id)a0;
- (double)_scoreForSecondsRelativeToNow:(double)a0;
- (id)eventWithExternalID:(id)a0;
- (void)_clearAndReloadAllCachesAndData;
- (void)_preloadEvents;
- (BOOL)iterEventNameRecordsForClient:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (id)eventsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)eventNameRecordsForClient:(id)a0 error:(id *)a1;
- (id)_recordForEvent:(id)a0;
- (id)suggestedEventsWithQuery:(id)a0;
- (id)eventMetaDataFromDate:(id)a0 toDate:(id)a1;
- (id)_recordForEKEvent:(id)a0;
- (id)eventsFromDate:(id)a0 toDate:(id)a1;
- (id)_recordForDeletedEKEventWithChangeIdentifier:(id)a0;
- (id)scoredEventsWithQuery:(id)a0;
- (id)tripEventsWithQuery:(id)a0;
- (id)eventHighlightsFrom:(id)a0 to:(id)a1 options:(int)a2;

@end
