@class NSString, NSArray, NSDate;

@interface CTSweetgumUsageAccountMetrics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *networkUsageLabel;
@property (nonatomic) long long deviceType;
@property (nonatomic) BOOL localDevice;
@property (retain, nonatomic) NSString *subscriptionStatus;
@property (retain, nonatomic) NSString *planType;
@property (retain, nonatomic) NSDate *billingCycleEndDate;
@property (retain, nonatomic) NSArray *applicablePlans;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
