@class NSString;

@interface _REStringFeatureValue : REFeatureValue {
    NSString *_value;
}

+ (id)featureValueWithString:(id)a0;

- (id)stringValue;
- (unsigned long long)type;
- (id)initWithValue:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (unsigned long long)_integralFeatureValue;

@end
