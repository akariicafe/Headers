@class CTCellularPlanSubscription, CTCellularPlanProfile, NSString, NSData, NSArray, NSNumber;

@interface CTCellularPlan : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CTCellularPlanProfile *profile;
@property (retain, nonatomic) CTCellularPlanSubscription *subscription;
@property (retain, nonatomic) NSNumber *subscriptionStatusOverride;
@property (nonatomic) BOOL isHomePlan;
@property (retain, nonatomic) NSString *phoneNumber;
@property (nonatomic) BOOL requiresUserConsent;
@property (readonly, nonatomic) NSData *profileId;
@property (readonly, nonatomic) BOOL isSelected;
@property (readonly, nonatomic) NSString *iccid;
@property (readonly, nonatomic) BOOL autoRenew;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) double billingStartDate;
@property (readonly, nonatomic) double billingEndDate;
@property (readonly, nonatomic) NSString *carrierName;
@property (readonly, nonatomic) int planType;
@property (readonly, nonatomic) NSString *planDescription;
@property (readonly, nonatomic) int planStatus;
@property (readonly, nonatomic) int accountStatus;
@property (readonly, nonatomic) NSString *accountURL;
@property (readonly, nonatomic) BOOL isDisableNotAllowed;
@property (readonly, nonatomic) BOOL isDeleteNotAllowed;
@property (readonly, nonatomic) NSArray *dataUsage;
@property (readonly, nonatomic) int status;
@property (readonly, nonatomic) BOOL isSelectable;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)statusAsString:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0 subscription:(id)a1;
- (long long)planDescriptionCompare:(id)a0;

@end
