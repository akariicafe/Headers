@class NSString;

@interface TPCategoryRule : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *prefix;
@property (copy, nonatomic) NSString *category;

+ (id)ruleWithPrefix:(id)a0 category:(id)a1;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToCategoryRule:(id)a0;

@end
