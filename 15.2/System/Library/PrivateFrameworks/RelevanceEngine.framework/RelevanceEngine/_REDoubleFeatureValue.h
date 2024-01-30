@interface _REDoubleFeatureValue : REFeatureValue {
    double _value;
}

+ (id)featureValueWithDouble:(double)a0;

- (double)doubleValue;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)_integralFeatureValue;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)type;
- (id)initWithValue:(double)a0;
- (unsigned long long)hash;

@end
