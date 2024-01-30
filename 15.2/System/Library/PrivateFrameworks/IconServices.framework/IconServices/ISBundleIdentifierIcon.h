@class NSString;

@interface ISBundleIdentifierIcon : ISConcreteIcon

@property (readonly) NSString *bundleIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)_makeResourceProviderAllowIconResourceFallback:(BOOL)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)makeSymbolResourceProvider;
- (double)_aspectRatio;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)makeResourceProvider;

@end
