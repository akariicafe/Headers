@class NSString, NSArray;

@interface CTCellularPlanSubscription : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int subscriptionResult;
@property (nonatomic) int planStatus;
@property (retain, nonatomic) NSString *carrierName;
@property (readonly, nonatomic) NSString *iccid;
@property (readonly, nonatomic) BOOL autoRenew;
@property (readonly, nonatomic) double billingStartDate;
@property (readonly, nonatomic) double billingEndDate;
@property (readonly, nonatomic) int planType;
@property (readonly, nonatomic) NSString *planDescription;
@property (readonly, nonatomic) int accountStatus;
@property (readonly, nonatomic) NSString *accountURL;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) NSArray *homeCountryList;
@property (readonly, nonatomic) NSArray *dataUsage;

- (void).cxx_destruct;
- (id)redactedDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIccid:(id)a0 subscriptionResult:(int)a1 autoRenew:(BOOL)a2 billingStartDate:(double)a3 billingEndDate:(double)a4 carrierName:(id)a5 planType:(int)a6 planDescription:(id)a7 planStatus:(int)a8 accountStatus:(int)a9 accountURL:(id)a10 timestamp:(double)a11 homeCountryList:(id)a12 dataUsage:(id)a13;
- (BOOL)isEqualOrNewerThanSubscription:(id)a0;

@end
