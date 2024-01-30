@interface _REDoubleFeatureValue : REFeatureValue {
    double _value;
}

+ (id)featureValueWithDouble:(double)a0;

- (double)doubleValue;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (unsigned long long)type;
- (BOOL)isEqual:(id)a0;
- (id)initWithValue:(double)a0;
- (unsigned long long)_integralFeatureValue;

@end
