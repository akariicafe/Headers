@class NSNumber;

@interface CTCarrierSpaceDataPlanMetricsItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *capacityBytes;
@property (nonatomic) BOOL capacityValid;
@property (nonatomic) long long units;
@property (nonatomic) unsigned long long capacity;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
