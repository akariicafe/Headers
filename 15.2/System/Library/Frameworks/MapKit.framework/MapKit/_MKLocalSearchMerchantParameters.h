@class NSString, NSDate, NSNumber, CLLocation;

@interface _MKLocalSearchMerchantParameters : NSObject <NSCopying>

@property (copy, nonatomic) NSString *merchantCode;
@property (copy, nonatomic) NSString *rawMerchantCode;
@property (copy, nonatomic) NSString *paymentNetwork;
@property (copy, nonatomic) NSString *industryCategory;
@property (retain, nonatomic) NSNumber *industryCode;
@property (retain, nonatomic) NSDate *transactionDate;
@property (retain, nonatomic) CLLocation *transactionLocation;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
