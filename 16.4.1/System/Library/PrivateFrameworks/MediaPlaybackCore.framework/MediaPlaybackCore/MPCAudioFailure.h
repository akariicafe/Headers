@interface MPCAudioFailure : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double duration;

+ (id)multiSamplesFailure:(double)a0 duration:(double)a1;
+ (id)singleSampleFailure:(double)a0 duration:(double)a1;

- (id)initWithType:(long long)a0 startTime:(double)a1 duration:(double)a2;

@end
