@class NSMutableDictionary;

@interface DDSAttributeFilter : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *filters;

+ (unsigned long long)hashObject:(id)a0;
+ (unsigned long long)hashSet:(id)a0;
+ (unsigned long long)hashDictionary:(id)a0;
+ (id)attributeFilter;
+ (id)attributeFilterWithDictionary:(id)a0;

- (BOOL)doesContainAttributes:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqualToQueryFilter:(id)a0;
- (void)removeAllowedValues:(id)a0 forKey:(id)a1;
- (void)addAllowedValues:(id)a0 forKey:(id)a1;
- (unsigned long long)hash;
- (void)removeAllowedValue:(id)a0 forKey:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)entriesMatchingAttributes:(id)a0;
- (void)enumerateAllowedValuesAndKeys:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (id)_setForKey:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)allowedValuesForKey:(id)a0;
- (void)addEntriesFromFilter:(id)a0;
- (void)addAllowedValue:(id)a0 forKey:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
