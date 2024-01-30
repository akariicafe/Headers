@class NSMutableDictionary;

@interface CalStopwatch : NSObject {
    BOOL _isRunning;
    unsigned long long _lastStartTime;
    unsigned long long _elapsedTime;
    BOOL _hasValidElapsedTime;
    NSMutableDictionary *_events;
}

@property BOOL usesSignalFlags;

- (unsigned long long)elapsedTimeAsNumber:(int)a0;
- (double)markEventEnd:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (double)markEventSplit:(id)a0;
- (void)markEventStart:(id)a0;
- (void)stop;
- (id)description;
- (unsigned long long)elapsedTimeInNanoseconds;
- (id)elapsedTimeAsString:(int)a0;
- (void)start;

@end
