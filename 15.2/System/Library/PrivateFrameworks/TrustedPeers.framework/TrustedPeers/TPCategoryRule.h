@class NSString;

@interface TPCategoryRule : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *prefix;
@property (copy, nonatomic) NSString *category;

+ (id)ruleWithPrefix:(id)a0 category:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqualToCategoryRule:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;

@end
