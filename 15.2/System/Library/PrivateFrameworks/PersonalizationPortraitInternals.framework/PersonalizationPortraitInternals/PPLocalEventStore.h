@class PPEventCache, PPEventStorage, PPTrialWrapper, _PASNotificationToken;

@interface PPLocalEventStore : NSObject <PPFeedbackAccepting> {
    PPEventCache *_eventCache;
    PPEventStorage *_storage;
    _PASNotificationToken *_assetUpdateNotificationToken;
    PPTrialWrapper *_trialWrapper;
}

+ (id)defaultStore;

- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (BOOL)iterEventNameRecordsForClient:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (void)clearCaches;
- (id)eventHighlightsFrom:(id)a0 to:(id)a1 options:(int)a2;
- (id)eventNameRecordsForClient:(id)a0 error:(id *)a1;
- (id)eventWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)eventsFromDate:(id)a0 toDate:(id)a1;
- (id)resolveEventNameRecordChanges:(id)a0 client:(id)a1 error:(id *)a2;
- (id)initWithTrialWrapper:(id)a0 eventStorage:(id)a1;
- (id)eventWithExternalID:(id)a0;
- (id)nlEventsFromDate:(id)a0 toDate:(id)a1;
- (id)scoredEventsWithQuery:(id)a0;

@end
