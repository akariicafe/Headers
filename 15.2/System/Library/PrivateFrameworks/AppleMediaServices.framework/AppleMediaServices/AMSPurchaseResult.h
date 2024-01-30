@class NSString, AMSPurchase, NSDictionary, NSError;

@interface AMSPurchaseResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *correlationID;
@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) AMSPurchase *purchase;
@property (copy, nonatomic) NSDictionary *responseDictionary;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToPurchaseResult:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
