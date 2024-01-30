@class NSString, NSSet, NSURL, LSApplicationRecord;

@interface INAppDescriptor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, nonatomic) NSString *teamIdentifier;
@property (readonly, nonatomic) NSSet *counterpartIdentifiers;
@property (readonly, nonatomic) NSSet *supportedIntents;
@property (readonly, nonatomic) NSSet *documentTypes;
@property (readonly, nonatomic) NSURL *bundleURL;
@property (nonatomic) BOOL requiresUserConfirmation;
@property (readonly, nonatomic) LSApplicationRecord *applicationRecord;
@property (readonly, nonatomic, getter=isInstalled) BOOL installed;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithApplicationRecord:(id)a0;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)descriptorWithExtensionBundleIdentifier:(id)a0;
- (id)descriptorWithRecord:(id)a0;
- (id)initWithLocalizedName:(id)a0 bundleIdentifier:(id)a1 extensionBundleIdentifier:(id)a2 counterpartIdentifiers:(id)a3 teamIdentifier:(id)a4 supportedIntents:(id)a5 bundleURL:(id)a6 documentTypes:(id)a7;

@end
