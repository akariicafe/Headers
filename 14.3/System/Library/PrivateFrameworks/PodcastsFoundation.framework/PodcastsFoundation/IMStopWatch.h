@class NSString;

@interface IMStopWatch : NSObject {
    unsigned long long _startTime;
    NSString *_descriptionString;
}

+ (void)initialize;
+ (id)stopwatchWithDescription:(id)a0;
+ (id)stopwatch;

- (void)report;
- (double)time;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)description;
- (void)start;
- (void)setDescription:(id)a0;
- (void)reportWithMarker:(id)a0;

@end
