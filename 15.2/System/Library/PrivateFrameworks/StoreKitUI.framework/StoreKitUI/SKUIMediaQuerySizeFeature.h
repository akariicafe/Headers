@interface SKUIMediaQuerySizeFeature : SKUIMediaQueryFeature {
    double _value;
}

+ (BOOL)supportsFeatureName:(id)a0;

- (id)requiredKeys;
- (id)description;
- (id)initWithFeatureName:(id)a0 value:(id)a1;
- (BOOL)evaluateWithValues:(id)a0;

@end
