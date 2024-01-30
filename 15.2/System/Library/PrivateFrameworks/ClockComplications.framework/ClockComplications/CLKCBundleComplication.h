@class NSString, CLKComplicationDescriptor;

@interface CLKCBundleComplication : CLKCComplication

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *appBundleIdentifier;
@property (readonly, copy, nonatomic) CLKComplicationDescriptor *complicationDescriptor;

+ (id)complicationWithBundleIdentifier:(id)a0 appBundleIdentifier:(id)a1 complicationDescriptor:(id)a2;
+ (id)complicationWithBundleIdentifier:(id)a0 appBundleIdentifier:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)a0 appBundleIdentifier:(id)a1 complicationDescriptor:(id)a2;

@end
