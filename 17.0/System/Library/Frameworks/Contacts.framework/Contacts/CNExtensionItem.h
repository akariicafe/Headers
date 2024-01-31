@class NSString;

@interface CNExtensionItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *appName;
@property (nonatomic, getter=isEnabled) BOOL enabled;

+ (id)itemWithBundleIdentifer:(id)a0 appName:(id)a1 enabled:(BOOL)a2;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
