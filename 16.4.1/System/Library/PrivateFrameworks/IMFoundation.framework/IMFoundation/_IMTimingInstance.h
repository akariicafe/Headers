@interface _IMTimingInstance : NSObject {
    double _startTiming;
    double _stopTiming;
}

@property (nonatomic) double totalTime;
@property (nonatomic) BOOL isRunning;

+ (id)createTimingInstanceWithStartTime:(float)a0;

- (void)startUsingTime:(double)a0;
- (id)init;
- (id)description;
- (void)stopUsingTime:(double)a0;

@end
