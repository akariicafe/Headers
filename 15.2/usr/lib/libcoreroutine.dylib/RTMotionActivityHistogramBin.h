@interface RTMotionActivityHistogramBin : NSObject <NSCopying>

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long confidence;
@property (nonatomic) double interval;

- (id)description;
- (id)initWithType:(unsigned long long)a0 confidence:(unsigned long long)a1 interval:(double)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addInterval:(double)a0;
- (void)updateConfidence:(unsigned long long)a0;

@end
