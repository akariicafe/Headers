@class NSString;

@interface CTCarrierSpaceUsagePlanItemData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long units;
@property (retain, nonatomic) NSString *capacity;
@property (retain, nonatomic) NSString *maxDataBeforeThrottling;
@property (retain, nonatomic) NSString *thisDeviceDataUsed;
@property (retain, nonatomic) NSString *sharedDataUsed;
@property (retain, nonatomic) NSString *sharedPlanIdentifier;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
