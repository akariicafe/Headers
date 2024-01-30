@class NSArray;

@interface ASDPurchaseRequestOptions : ASDRequestOptions

@property (readonly, nonatomic) NSArray *purchases;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPurchases:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
