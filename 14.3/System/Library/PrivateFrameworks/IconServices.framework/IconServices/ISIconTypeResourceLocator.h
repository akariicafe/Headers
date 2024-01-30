@class NSString;

@interface ISIconTypeResourceLocator : ISIconResourceLocator <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *type;

- (id)preferedResourceName;
- (id)resourceDirectoryURL;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(id)a0;
- (BOOL)allowLocalizedIcon;
- (id)bundleIdentifier;
- (void)encodeWithCoder:(id)a0;

@end
