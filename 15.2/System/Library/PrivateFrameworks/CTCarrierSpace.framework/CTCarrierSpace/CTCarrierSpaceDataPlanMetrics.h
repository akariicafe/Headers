@class CTCarrierSpaceDataPlanMetricsItem, NSNumber, NSDate;

@interface CTCarrierSpaceDataPlanMetrics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *billingCycleEndDate;
@property (retain, nonatomic) CTCarrierSpaceDataPlanMetricsItem *domestic;
@property (nonatomic) long long regStatus;
@property (retain, nonatomic) NSNumber *domesticCapacity;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
