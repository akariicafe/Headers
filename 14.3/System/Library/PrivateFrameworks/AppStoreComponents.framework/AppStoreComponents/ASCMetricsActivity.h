@class NSDictionary;

@interface ASCMetricsActivity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) NSDictionary *defaultFields;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *fields;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFields:(id)a0;
- (id)metricsActivityWithValue:(id)a0 forKey:(id)a1;
- (id)metricsActivityByMergingFields:(id)a0 uniquingFieldsWithBlock:(id /* block */)a1;
- (id)metricsActivityByRemovingValueForKey:(id)a0;

@end
