@interface TimingInstance : NSObject

@property (nonatomic) float startTiming;
@property (nonatomic) float stopTiming;
@property (nonatomic) float totalTime;
@property (nonatomic) BOOL isRunning;

+ (id)createTimingInstanceWithStartTime:(float)a0;

- (id)description;

@end
