@class EDAMSubscriptionInfo, NSString, EDAMPricingModel, EDAMAccountLimits, EDAMPremiumInfo, EDAMUserAttributes, EDAMBusinessUserInfo, NSNumber, EDAMAccounting;

@interface EDAMUser : FATObject

@property (retain, nonatomic) NSNumber *id;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *email;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *timezone;
@property (retain, nonatomic) NSNumber *privilege;
@property (retain, nonatomic) NSNumber *serviceLevel;
@property (retain, nonatomic) NSNumber *created;
@property (retain, nonatomic) NSNumber *updated;
@property (retain, nonatomic) NSNumber *deleted;
@property (retain, nonatomic) NSNumber *active;
@property (retain, nonatomic) NSString *shardId;
@property (retain, nonatomic) EDAMUserAttributes *attributes;
@property (retain, nonatomic) EDAMAccounting *accounting;
@property (retain, nonatomic) EDAMPremiumInfo *premiumInfo;
@property (retain, nonatomic) EDAMBusinessUserInfo *businessUserInfo;
@property (retain, nonatomic) NSString *photoUrl;
@property (retain, nonatomic) NSNumber *photoLastUpdated;
@property (retain, nonatomic) EDAMAccountLimits *accountLimits;
@property (retain, nonatomic) EDAMSubscriptionInfo *subscriptionInfo;
@property (retain, nonatomic) EDAMPricingModel *pricingModel;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
