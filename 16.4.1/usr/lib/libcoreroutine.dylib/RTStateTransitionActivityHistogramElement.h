@class CMMotionActivity;

@interface RTStateTransitionActivityHistogramElement : NSObject <NSCopying>

@property (retain, nonatomic) CMMotionActivity *activity;
@property (nonatomic) double interval;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithActivity:(id)a0;

@end
