@class NSString, NSNumber;

@interface EDAMBackupPaymentInfo : FATObject

@property (retain, nonatomic) NSString *premiumCommerceService;
@property (retain, nonatomic) NSString *premiumServiceSKU;
@property (retain, nonatomic) NSString *currency;
@property (retain, nonatomic) NSNumber *unitPrice;
@property (retain, nonatomic) NSNumber *paymentMethodId;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
