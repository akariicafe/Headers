@class NSNumber, NSString, EDAMBackupPaymentInfo;

@interface EDAMAccounting : FATObject

@property (retain, nonatomic) NSNumber *uploadLimit;
@property (retain, nonatomic) NSNumber *uploadLimitEnd;
@property (retain, nonatomic) NSNumber *uploadLimitNextMonth;
@property (retain, nonatomic) NSNumber *premiumServiceStatus;
@property (retain, nonatomic) NSString *premiumOrderNumber;
@property (retain, nonatomic) NSString *premiumCommerceService;
@property (retain, nonatomic) NSNumber *premiumServiceStart;
@property (retain, nonatomic) NSString *premiumServiceSKU;
@property (retain, nonatomic) NSNumber *lastSuccessfulCharge;
@property (retain, nonatomic) NSNumber *lastFailedCharge;
@property (retain, nonatomic) NSString *lastFailedChargeReason;
@property (retain, nonatomic) NSNumber *nextPaymentDue;
@property (retain, nonatomic) NSNumber *premiumLockUntil;
@property (retain, nonatomic) NSNumber *updated;
@property (retain, nonatomic) NSString *premiumSubscriptionNumber;
@property (retain, nonatomic) NSNumber *lastRequestedCharge;
@property (retain, nonatomic) NSString *currency;
@property (retain, nonatomic) NSNumber *unitPrice;
@property (retain, nonatomic) NSNumber *businessId;
@property (retain, nonatomic) NSString *businessName;
@property (retain, nonatomic) NSNumber *businessRole;
@property (retain, nonatomic) NSNumber *unitDiscount;
@property (retain, nonatomic) NSNumber *nextChargeDate;
@property (retain, nonatomic) NSNumber *availablePoints;
@property (retain, nonatomic) EDAMBackupPaymentInfo *backupPaymentInfo;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
