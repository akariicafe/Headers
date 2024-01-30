@interface _REIntegerFeatureValue : REFeatureValue {
    unsigned long long _value;
}

+ (id)featureValueWithInt64:(long long)a0;

- (unsigned long long)int64Value;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (unsigned long long)type;
- (BOOL)isEqual:(id)a0;
- (id)initWithValue:(long long)a0;
- (unsigned long long)_integralFeatureValue;

@end
