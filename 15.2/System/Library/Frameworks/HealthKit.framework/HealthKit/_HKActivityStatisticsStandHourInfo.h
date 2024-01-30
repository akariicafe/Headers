@interface _HKActivityStatisticsStandHourInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double timeStamp;
@property (nonatomic) long long state;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTimeStamp:(double)a0 state:(long long)a1;

@end
