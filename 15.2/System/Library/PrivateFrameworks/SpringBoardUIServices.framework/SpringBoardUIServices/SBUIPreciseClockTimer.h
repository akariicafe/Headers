@class NSCalendar, NSMutableDictionary, CADisplayLink;

@interface SBUIPreciseClockTimer : NSObject {
    CADisplayLink *_displayLink;
    NSMutableDictionary *_minuteUpdateHandlers;
    unsigned long long _nextToken;
    NSCalendar *_calendar;
    long long _lastHour;
    long long _lastMinute;
}

+ (id)sharedInstance;
+ (id)now;

- (void)stopMinuteUpdatesForToken:(id)a0;
- (void)_updateDisplayLink;
- (void)_onDisplayLink:(id)a0;
- (void)_updateDisplayLinkFrameIntervalForSecondsPastMinute:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)startMinuteUpdatesWithHandler:(id /* block */)a0;
- (void)_handleTimePassed;

@end
