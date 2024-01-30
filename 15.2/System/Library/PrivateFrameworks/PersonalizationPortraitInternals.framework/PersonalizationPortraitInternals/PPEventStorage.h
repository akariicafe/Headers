@class _PASLock, NSObject;
@protocol OS_dispatch_queue;

@interface PPEventStorage : NSObject {
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)defaultStorage;

- (void)clearCaches;
- (void)iterateEventsFrom:(id)a0 to:(id)a1 inChunks:(int)a2 withBlock:(id /* block */)a3;
- (id)eventWithIdentifier:(id)a0;
- (id)eventsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithEventStorePurger:(id)a0;
- (BOOL)eventKitChangeIsEvent:(id)a0;
- (void).cxx_destruct;
- (id)suggestedEventsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 ekStore:(id)a1;
- (id)init;
- (id)resolveEventFromEKChange:(id)a0;
- (id)eventWithExternalID:(id)a0;
- (BOOL)shouldIngestEvent:(id)a0;
- (void)setInvisibleCalendarIdentifiers:(id)a0;
- (id)nlEventsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
