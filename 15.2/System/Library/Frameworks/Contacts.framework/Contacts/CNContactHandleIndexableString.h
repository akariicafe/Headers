@class NSString;
@protocol _CNContactHandleStringEquivalenceStrategy;

@interface CNContactHandleIndexableString : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) id<_CNContactHandleStringEquivalenceStrategy> equivalenceStrategy;
@property (readonly, copy, nonatomic) NSString *indexKey;

+ (id)emailIndexKey:(id)a0;
+ (id)phoneNumberIndexKey:(id)a0;
+ (id)equivalenceStrategyWithString:(id)a0;

- (id)initWithString:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEquivalentToString:(id)a0 strict:(BOOL *)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithFullString:(id)a0 indexKey:(id)a1 equivalenceStrategy:(id)a2;

@end
