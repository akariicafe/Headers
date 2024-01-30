@class HKQuantity, NSDate;

@interface HKHeartRateSummaryReading : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) HKQuantity *quantity;
@property (readonly, nonatomic) long long context;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDate:(id)a0 quantity:(id)a1 context:(long long)a2;
- (id)initWithDate:(id)a0 quantity:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
