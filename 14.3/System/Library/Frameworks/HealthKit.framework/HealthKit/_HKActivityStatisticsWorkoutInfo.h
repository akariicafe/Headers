@class HKSource, NSDate;

@interface _HKActivityStatisticsWorkoutInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) HKSource *source;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 source:(id)a2;
- (void)encodeWithCoder:(id)a0;

@end
