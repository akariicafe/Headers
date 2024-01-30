@interface WiFiAwareDataSessionStatisticsHistogramBin : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double value;
@property (readonly, nonatomic) double binStart;
@property (readonly, nonatomic) double binEnd;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithBinStart:(double)a0 binEnd:(double)a1 value:(double)a2;

@end
