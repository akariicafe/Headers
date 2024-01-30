@class NSString, LSApplicationRecord, NSArray;

@interface INIntentDescriptor : INAppDescriptor <NSSecureCoding> {
    NSArray *_extensions;
    NSArray *_uiExtensions;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *intentClassName;
@property (readonly, copy, nonatomic) NSString *displayableBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *uiExtensionBundleIdentifier;
@property (readonly, nonatomic) long long preferredCallProvider;
@property (readonly, nonatomic) BOOL hasCustomUIExtension;
@property (readonly, nonatomic) BOOL canRunOnLocalDevice;
@property (readonly, nonatomic) LSApplicationRecord *launchableApplicationRecord;
@property (readonly, nonatomic) LSApplicationRecord *displayableApplicationRecord;
@property (readonly, nonatomic) LSApplicationRecord *applicationRecord;

- (id)initWithIntent:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)_extensionsWithError:(id *)a0;
- (id)_matchingAttributesForExtensionPoint:(id)a0 error:(id *)a1;
- (id)_uiExtensionsWithError:(id *)a0;
- (id)appDescriptor;
- (id)descriptorWithAppDescriptor:(id)a0;
- (id)descriptorWithPreferredCallProvider:(long long)a0;
- (id)displayableAppDescriptor;
- (id)initWithIntentClassName:(id)a0 extensionBundleId:(id)a1;
- (id)initWithIntentClassName:(id)a0 launchableAppBundleId:(id)a1;
- (id)initWithIntentClassName:(id)a0 localizedName:(id)a1 bundleIdentifier:(id)a2 displayableBundleIdentifier:(id)a3 extensionBundleIdentifier:(id)a4 uiExtensionBundleIdentifier:(id)a5 counterpartIdentifiers:(id)a6 teamIdentifier:(id)a7 preferredCallProvider:(long long)a8 supportedIntents:(id)a9 bundleURL:(id)a10 documentTypes:(id)a11;
- (id)initWithIntentTypeName:(id)a0;
- (id)mergeWithDescriptor:(id)a0;

@end
