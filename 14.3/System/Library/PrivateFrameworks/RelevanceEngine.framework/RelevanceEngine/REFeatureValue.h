@class NSString, NSSet;

@interface REFeatureValue : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) BOOL boolValue;
@property (readonly, nonatomic) unsigned long long int64Value;
@property (readonly, nonatomic) double doubleValue;
@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) NSSet *setValue;

+ (id)featureValueWithDouble:(double)a0;
+ (id)featureValueWithInt64:(long long)a0;
+ (id)featureValueWithString:(id)a0;
+ (id)nullValueForFeature:(id)a0;
+ (id)featureValueWithBool:(BOOL)a0;
+ (id)featureValueWithDictionary:(id)a0;
+ (id)featureValueWithSet:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryEncoding;
- (unsigned long long)_integralFeatureValue;

@end
