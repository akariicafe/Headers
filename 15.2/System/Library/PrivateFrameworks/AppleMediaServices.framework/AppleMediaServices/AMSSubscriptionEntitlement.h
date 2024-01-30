@class NSNumber, NSString, NSDate;

@interface AMSSubscriptionEntitlement : NSObject

@property (nonatomic) BOOL autoRenewEnabled;
@property (retain, nonatomic) NSNumber *chargeStoreFrontID;
@property (retain, nonatomic) NSDate *expiration;
@property (retain, nonatomic) NSNumber *entitlementSourceAdamId;
@property (nonatomic) BOOL familySubscription;
@property (retain, nonatomic) NSNumber *featureAccessTypeId;
@property (nonatomic) BOOL freeTrialEligible;
@property (retain, nonatomic) NSNumber *freeTrialPeriodId;
@property (retain, nonatomic) NSNumber *inAppAdamId;
@property (retain, nonatomic) NSString *inAppVersion;
@property (nonatomic) double initialPurchaseTimestamp;
@property (retain, nonatomic) NSString *offerId;
@property (nonatomic) unsigned long long period;
@property (retain, nonatomic) NSString *poolType;
@property (retain, nonatomic) NSNumber *promoScenarioId;
@property (nonatomic) BOOL purchaser;
@property (retain, nonatomic) NSDate *renewDate;
@property (nonatomic) double serviceBeginsTimestamp;
@property (nonatomic) unsigned int source;
@property (retain, nonatomic) NSDate *startDate;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSNumber *subscriptionBundleId;
@property (retain, nonatomic) NSString *vendorAdHocOfferId;
@property (retain, nonatomic) NSString *vendorId;
@property (nonatomic) long long carrierErrorCode;
@property (retain, nonatomic) NSString *carrierOperatorName;
@property (retain, nonatomic) NSString *carrierPhoneNumber;
@property (retain, nonatomic) NSString *carrierSessionId;
@property (nonatomic) unsigned int carrierStatus;

- (void).cxx_destruct;
- (id)exportObject;

@end
