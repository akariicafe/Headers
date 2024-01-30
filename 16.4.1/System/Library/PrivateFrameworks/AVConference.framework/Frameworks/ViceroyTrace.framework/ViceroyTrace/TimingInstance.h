@interface TimingInstance : NSObject

@property (nonatomic) double startTiming;
@property (nonatomic) double stopTiming;
@property (nonatomic) double totalTime;
@property (nonatomic) BOOL isRunning;

+ (id)createTimingInstanceWithStartTime:(double)a0;

- (id)description;

@end
