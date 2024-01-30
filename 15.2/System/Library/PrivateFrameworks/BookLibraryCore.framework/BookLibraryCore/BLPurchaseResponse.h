@class NSString, NSDictionary, NSArray, NSNumber;

@interface BLPurchaseResponse : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *currency;
@property (copy, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSString *errorDescription;
@property (copy, nonatomic) NSString *errorDomain;
@property (copy, nonatomic) NSDictionary *errorInfo;
@property (copy, nonatomic) NSString *logUUID;
@property (copy, nonatomic) NSString *permLink;
@property (copy, nonatomic) NSString *price;
@property (copy, nonatomic) NSDictionary *responseMetrics;
@property (retain, nonatomic) NSNumber *storeID;
@property (retain, nonatomic) NSArray *purchaseResponseItems;
@property (copy, nonatomic) NSDictionary *item;
@property (copy, nonatomic) NSString *downloadID;
@property (copy, nonatomic) NSDictionary *metadata;
@property (copy, nonatomic) NSString *purchaseParameters;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAMSPurchaseResult:(id)a0;
- (id)initWithPurchase:(id)a0 error:(id)a1;

@end
