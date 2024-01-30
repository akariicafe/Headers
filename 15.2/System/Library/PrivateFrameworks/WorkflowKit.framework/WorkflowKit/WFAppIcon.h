@class NSString;

@interface WFAppIcon : WFIcon

@property (readonly, nonatomic) NSString *bundleIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)initWithBundleIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;

@end
