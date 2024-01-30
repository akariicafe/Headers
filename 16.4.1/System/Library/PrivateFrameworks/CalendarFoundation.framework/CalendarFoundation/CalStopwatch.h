@class NSMutableDictionary;

@interface CalStopwatch : NSObject {
    BOOL _isRunning;
    unsigned long long _lastStartTime;
    unsigned long long _elapsedTime;
    BOOL _hasValidElapsedTime;
    NSMutableDictionary *_events;
}

@property BOOL usesSignalFlags;

- (unsigned long long)elapsedTimeInNanoseconds;
- (id)elapsedTimeAsString:(int)a0;
- (unsigned long long)elapsedTimeAsNumber:(int)a0;
- (double)markEventSplit:(id)a0;
- (void)stop;
- (id)init;
- (void)start;
- (void)markEventStart:(id)a0;
- (id)description;
- (double)markEventEnd:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end
