@class HKSource, NSDate;

@interface _HKActivityStatisticsWorkoutInfo : NSObject <_HKJSONObject, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) HKSource *source;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)jsonObject;
- (id)description;
- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 source:(id)a2;

@end
