@class NSArray;

@interface ASDPurchaseRequestOptions : ASDRequestOptions

@property (readonly, nonatomic) NSArray *purchases;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPurchases:(id)a0;

@end
