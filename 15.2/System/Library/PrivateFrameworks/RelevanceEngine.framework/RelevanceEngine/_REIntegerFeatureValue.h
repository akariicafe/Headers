@interface _REIntegerFeatureValue : REFeatureValue {
    unsigned long long _value;
}

+ (id)featureValueWithInt64:(long long)a0;

- (unsigned long long)int64Value;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)_integralFeatureValue;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)type;
- (id)initWithValue:(long long)a0;
- (unsigned long long)hash;

@end
