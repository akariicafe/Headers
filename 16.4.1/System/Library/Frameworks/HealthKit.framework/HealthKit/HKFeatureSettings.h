@class NSDictionary;

@interface HKFeatureSettings : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *keyValueStorage;

- (id)dataForKey:(id)a0;
- (id)numberForKey:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)dataForKey:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (id)stringForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)stringForKey:(id)a0 error:(id *)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)numberForKey:(id)a0 error:(id *)a1;

@end
