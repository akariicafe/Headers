@interface WiFiAwareDataSessionStatisticsHistogramBin : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double binStart;
@property (readonly, nonatomic) double binEnd;
@property (readonly, nonatomic) double value;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBinStart:(double)a0 binEnd:(double)a1 value:(double)a2;

@end
