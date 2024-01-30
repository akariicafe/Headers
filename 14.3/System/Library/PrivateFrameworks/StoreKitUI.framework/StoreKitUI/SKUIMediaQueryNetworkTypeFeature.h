@class NSString;

@interface SKUIMediaQueryNetworkTypeFeature : SKUIMediaQueryFeature {
    NSString *_value;
}

+ (BOOL)supportsFeatureName:(id)a0;

- (void).cxx_destruct;
- (id)notificationNames;
- (id)description;
- (id)requiredKeys;
- (id)initWithFeatureName:(id)a0 value:(id)a1;
- (BOOL)evaluateWithValues:(id)a0;

@end
