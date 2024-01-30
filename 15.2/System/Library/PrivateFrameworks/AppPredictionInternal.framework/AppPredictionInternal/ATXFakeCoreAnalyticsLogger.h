@class NSMutableArray;

@interface ATXFakeCoreAnalyticsLogger : NSObject {
    NSMutableArray *_loggedEvents;
}

+ (id)sharedInstance;
+ (void)resetEvents;
+ (BOOL)hasReceivedEventWithMetricName:(id)a0 partialDictionary:(id)a1;

- (void).cxx_destruct;
- (id)init;
- (void)resetEvents;
- (BOOL)partialDictionaryMatches:(id)a0 eventDictionary:(id)a1;
- (BOOL)hasReceivedEventWithMetricName:(id)a0 partialDictionary:(id)a1;
- (void)sendEventWithMetricName:(id)a0 eventDictionary:(id)a1;
- (double)numberOfReceivedEvents;

@end
