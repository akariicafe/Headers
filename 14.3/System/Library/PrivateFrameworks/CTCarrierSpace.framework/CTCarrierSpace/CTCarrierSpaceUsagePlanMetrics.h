@class NSString, CTCarrierSpaceUsagePlanItemMessages, CTCarrierSpaceUsagePlanItemData, CTCarrierSpaceUsagePlanItemVoice, NSDate;

@interface CTCarrierSpaceUsagePlanMetrics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *planLabel;
@property (nonatomic) long long planCategory;
@property (nonatomic) BOOL currentUsedPlan;
@property (retain, nonatomic) CTCarrierSpaceUsagePlanItemData *dataUsage;
@property (retain, nonatomic) CTCarrierSpaceUsagePlanItemMessages *messages;
@property (retain, nonatomic) CTCarrierSpaceUsagePlanItemVoice *voice;
@property (retain, nonatomic) NSString *remainingBalance;
@property (nonatomic) BOOL throttled;
@property (retain, nonatomic) NSDate *lastUpdatedAt;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
