@class NSURL, NSString, NSDictionary;

@interface ISIconResourceLocator : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSURL *resourceDirectoryURL;
@property (copy) NSString *bundleIdentifier;
@property (copy) NSDictionary *iconsDictionary;
@property (copy) NSString *preferedResourceName;
@property (readonly) BOOL allowLocalizedIcon;

+ (id)genericIconrResourceLocator;
+ (id)resourceLocatorWithType:(id)a0;
+ (id)resourceLocatorWithLSIconResourceLocator:(id)a0;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)allowLocalizedIcon;
- (void)encodeWithCoder:(id)a0;

@end
