@class NSDate;

@interface FHDateTimeAggregateFeature : FHAggregateFeature

@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;

+ (BOOL)supportsSecureCoding;

- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;

@end
