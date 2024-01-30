@class NSDate;

@interface CMMotionTimeRange : CMLogItem {
    NSDate *fStartDate;
    NSDate *fEndDate;
}

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;

+ (BOOL)supportsSecureCoding;
+ (id)CMMotionTimeRangeFromCLMotionTimeRange:(struct { double x0; double x1; })a0;
+ (struct { double x0; double x1; })CLMotionTimeRangeFromCMMotionTimeRange:(id)a0;

- (id)initWithStartDate:(double)a0 endDate:(double)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
