@interface STTemperature : STSiriModelObject {
    double _value;
    long long _units;
}

+ (BOOL)supportsSecureCoding;

- (double)value;
- (id)initWithCoder:(id)a0;
- (long long)units;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithValue:(double)a0 units:(long long)a1;

@end
