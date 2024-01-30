@class _PASLock, NSObject;
@protocol OS_dispatch_queue;

@interface PPEventStorage : NSObject {
    _PASLock *_lock;
    struct atomic_flag { _Atomic BOOL _Value; } _pendingReset;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)defaultStorage;

- (void)clearCaches;
- (void)setCalendarVisibilityChangeHandler:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (id)eventWithIdentifier:(id)a0;
- (id)eventWithExternalID:(id)a0;
- (id)resolveEventFromEKChange:(id)a0;
- (id)eventsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)_predicateForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)iterateEventsFrom:(id)a0 to:(id)a1 inChunks:(int)a2 withBlock:(id /* block */)a3;
- (BOOL)_isAllDayOrMultiDayEvent:(id)a0 guardedData:(id)a1;
- (id)_init;
- (BOOL)_isSuggestedEvent:(id)a0 guardedData:(id)a1;
- (id)suggestedEventsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)eventKitChangeIsEvent:(id)a0;
- (BOOL)shouldIngestEvent:(id)a0;
- (void)resetAfterQueryWithCompletion:(id /* block */)a0;
- (void)_loadCalendars;

@end
