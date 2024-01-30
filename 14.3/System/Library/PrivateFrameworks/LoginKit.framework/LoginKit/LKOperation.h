@class NSDate;

@interface LKOperation : NSObject

@property (readonly, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSDate *endTime;
@property (readonly, nonatomic) double duration;

- (void)setStartTime:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)dictionary;
- (void)setEndTime:(id)a0;
- (void)setDuration:(double)a0;

@end
