@class NSString;

@interface ISIconTypeResourceLocator : ISIconResourceLocator <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *type;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(id)a0;
- (id)bundleIdentifier;
- (void).cxx_destruct;
- (id)preferedResourceName;
- (BOOL)allowLocalizedIcon;
- (id)resourceDirectoryURL;

@end
