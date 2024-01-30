@class NSDecimalNumber;

@interface FHPaymentRingSuggestionResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long category;
@property (copy, nonatomic) NSDecimalNumber *amount;
@property (nonatomic) long long priority;

- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithAmount:(id)a0 category:(unsigned long long)a1;

@end
