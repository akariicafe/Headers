@class NSString, NSDictionary, AMSPurchase, NSError, NSURLResponse;

@interface AMSPurchaseResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *correlationID;
@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) NSDictionary *loadURLEventDictionary;
@property (copy, nonatomic) AMSPurchase *purchase;
@property (copy, nonatomic) NSDictionary *responseDictionary;
@property (copy, nonatomic) NSURLResponse *URLResponse;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqualToPurchaseResult:(id)a0;

@end
