@class NSString;

@interface SKUIMediaQueryNetworkTypeFeature : SKUIMediaQueryFeature {
    NSString *_value;
}

+ (BOOL)supportsFeatureName:(id)a0;

- (id)requiredKeys;
- (id)description;
- (id)notificationNames;
- (void).cxx_destruct;
- (id)initWithFeatureName:(id)a0 value:(id)a1;
- (BOOL)evaluateWithValues:(id)a0;

@end
