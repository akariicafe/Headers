@interface TSDFPSCounterSample : NSObject

@property (readonly, nonatomic) double time;
@property (readonly, nonatomic) double duration;

+ (id)sampleWithTime:(double)a0 duration:(double)a1;

- (id)initWithTime:(double)a0 duration:(double)a1;

@end
