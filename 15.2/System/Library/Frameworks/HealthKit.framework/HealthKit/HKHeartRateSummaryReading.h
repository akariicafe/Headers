@class HKQuantity, NSDate;

@interface HKHeartRateSummaryReading : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) HKQuantity *quantity;
@property (readonly, nonatomic) long long context;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDate:(id)a0 quantity:(id)a1 context:(long long)a2;
- (id)initWithDate:(id)a0 quantity:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;

@end
