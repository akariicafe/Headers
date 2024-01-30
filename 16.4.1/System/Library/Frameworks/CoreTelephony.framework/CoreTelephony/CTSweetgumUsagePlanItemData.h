@class NSString;

@interface CTSweetgumUsagePlanItemData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long units;
@property (retain, nonatomic) NSString *capacity;
@property (retain, nonatomic) NSString *maxDataBeforeThrottling;
@property (retain, nonatomic) NSString *thisDeviceDataUsed;
@property (retain, nonatomic) NSString *sharedDataUsed;
@property (retain, nonatomic) NSString *sharedPlanIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
