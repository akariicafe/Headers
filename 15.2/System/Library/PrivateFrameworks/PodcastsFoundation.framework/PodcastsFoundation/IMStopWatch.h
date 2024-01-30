@class NSString;

@interface IMStopWatch : NSObject {
    unsigned long long _startTime;
    NSString *_descriptionString;
}

+ (void)initialize;
+ (id)stopwatchWithDescription:(id)a0;
+ (id)stopwatch;

- (double)time;
- (id)description;
- (void)start;
- (void)report;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)setDescription:(id)a0;
- (void)reportWithMarker:(id)a0;

@end
