@class NSString;

@interface ISIconTypeResourceLocator : ISIconResourceLocator <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *type;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(id)a0;
- (id)preferedResourceName;
- (id)bundleIdentifier;
- (BOOL)allowLocalizedIcon;
- (id)resourceDirectoryURL;

@end
