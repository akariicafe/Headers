@class NSMutableDictionary;

@interface CalStopwatch : NSObject {
    BOOL _isRunning;
    unsigned long long _lastStartTime;
    unsigned long long _elapsedTime;
    BOOL _hasValidElapsedTime;
    NSMutableDictionary *_events;
}

@property BOOL usesSignalFlags;

- (id)elapsedTimeAsString:(int)a0;
- (double)markEventSplit:(id)a0;
- (unsigned long long)elapsedTimeInNanoseconds;
- (id)description;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)markEventStart:(id)a0;
- (unsigned long long)elapsedTimeAsNumber:(int)a0;
- (double)markEventEnd:(id)a0;
- (void)reset;
- (void)stop;

@end
