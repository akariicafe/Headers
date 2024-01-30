@interface LSVPNPluginProxy : LSBundleProxy <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)VPNPluginProxyForIdentifier:(id)a0;
+ (id)VPNPluginProxyForIdentifier:(id)a0 withContext:(struct LSContext { id x0; } *)a1;

- (id)_initWithBundleIdentifier:(id)a0 withContext:(struct LSContext { id x0; } *)a1;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
