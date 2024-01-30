@class TACircularBuffer, TAEventBufferSettings, NSMutableDictionary;

@interface TAEventBuffer : NSObject {
    TAEventBufferSettings *_settings;
    TACircularBuffer *_eventBuffer;
    NSMutableDictionary *_latestExpiredElements;
    NSMutableDictionary *_latestElements;
}

+ (id)getExpiredElementKeyForClass:(Class)a0 andEventSubtype:(unsigned long long)a1;

- (void)ingestTAEvent:(id)a0;
- (id)getAllTAEventsOf:(Class)a0 andEventSubtype:(unsigned long long)a1 between:(id)a2;
- (id)getAllTAEventsMatchingCompoundPredicate:(id)a0;
- (void)_updateLatestElement:(id)a0 withKey:(id)a1;
- (void)_updateLatestElement:(id)a0;
- (id)getAllTAEventsOf:(Class)a0 between:(id)a1;
- (id)getAllTAEventsBetween:(id)a0;
- (id)initWithSettings:(id)a0;
- (id)getAllTAEventsOf:(Class)a0;
- (id)getAllTAEventsOf:(Class)a0 andEventSubtype:(unsigned long long)a1;
- (id)getEarliestEventDate;
- (id)getLatestElementOf:(Class)a0;
- (void).cxx_destruct;
- (void)updateLatestExpiredElements:(id)a0;
- (void)purgeWithClock:(id)a0;
- (id)getLatestElementOf:(Class)a0 andEventSubtype:(unsigned long long)a1;

@end
