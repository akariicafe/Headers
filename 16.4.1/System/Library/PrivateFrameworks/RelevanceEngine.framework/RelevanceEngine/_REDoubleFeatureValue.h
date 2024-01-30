@interface _REDoubleFeatureValue : REFeatureValue {
    double _value;
}

+ (id)featureValueWithDouble:(double)a0;

- (double)doubleValue;
- (unsigned long long)type;
- (id)initWithValue:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)_integralFeatureValue;

@end
