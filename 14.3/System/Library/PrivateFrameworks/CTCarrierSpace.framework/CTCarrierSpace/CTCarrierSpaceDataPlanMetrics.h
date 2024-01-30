@class CTCarrierSpaceDataPlanMetricsItem, NSNumber, NSDate;

@interface CTCarrierSpaceDataPlanMetrics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *billingCycleEndDate;
@property (retain, nonatomic) CTCarrierSpaceDataPlanMetricsItem *domestic;
@property (nonatomic) long long regStatus;
@property (retain, nonatomic) NSNumber *domesticCapacity;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
