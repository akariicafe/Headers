@class NSDictionary;

@interface PKServiceProviderPurchaseData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *dictionaryRepresentation;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToPKServiceProviderPurchaseData:(id)a0;

@end
