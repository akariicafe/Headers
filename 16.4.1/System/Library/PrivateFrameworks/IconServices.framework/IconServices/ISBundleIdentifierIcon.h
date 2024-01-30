@class NSString;

@interface ISBundleIdentifierIcon : ISConcreteIcon

@property (readonly) NSString *bundleIdentifier;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_makeResourceProviderAllowIconResourceFallback:(BOOL)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (id)description;
- (id)makeResourceProvider;
- (id)makeSymbolResourceProvider;
- (double)_aspectRatio;
- (void).cxx_destruct;

@end
