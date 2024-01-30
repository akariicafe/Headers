@interface _HKActivityStatisticsStandHourInfo : NSObject <_HKJSONObject, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double timeStamp;
@property (nonatomic) long long state;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)jsonObject;
- (id)description;
- (id)initWithTimeStamp:(double)a0 state:(long long)a1;

@end
