@class NSString;

@interface SKUIMediaQueryNetworkTypeFeature : SKUIMediaQueryFeature {
    NSString *_value;
}

+ (BOOL)supportsFeatureName:(id)a0;

- (id)notificationNames;
- (id)description;
- (void).cxx_destruct;
- (id)requiredKeys;
- (BOOL)evaluateWithValues:(id)a0;
- (id)initWithFeatureName:(id)a0 value:(id)a1;

@end
