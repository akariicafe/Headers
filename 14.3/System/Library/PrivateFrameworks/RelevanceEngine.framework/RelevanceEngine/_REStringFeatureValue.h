@class NSString;

@interface _REStringFeatureValue : REFeatureValue {
    NSString *_value;
}

+ (id)featureValueWithString:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (unsigned long long)type;
- (BOOL)isEqual:(id)a0;
- (id)initWithValue:(id)a0;
- (id)stringValue;
- (unsigned long long)_integralFeatureValue;

@end
