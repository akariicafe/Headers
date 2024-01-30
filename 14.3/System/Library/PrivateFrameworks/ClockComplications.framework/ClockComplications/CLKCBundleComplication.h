@class NSString;

@interface CLKCBundleComplication : CLKCComplication

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *appBundleIdentifier;

+ (id)complicationWithBundleIdentifier:(id)a0 appBundleIdentifier:(id)a1;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 appBundleIdentifier:(id)a1;

@end
