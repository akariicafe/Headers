@class NSString, NSSet;

@interface INAppIntentDescriptor : INAppDescriptor <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *intentIdentifier;
@property (readonly, nonatomic) NSSet *supportedEntities;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithIntentIdentifier:(id)a0 applicationRecord:(id)a1;
- (id)initWithIntentIdentifier:(id)a0 applicationRecord:(id)a1 supportedAppIntents:(id)a2 supportedEntities:(id)a3;
- (id)initWithIntentIdentifier:(id)a0 localizedName:(id)a1 bundleIdentifier:(id)a2 extensionBundleIdentifier:(id)a3 counterpartIdentifiers:(id)a4 teamIdentifier:(id)a5 supportedIntents:(id)a6 supportedEntities:(id)a7 bundleURL:(id)a8 documentTypes:(id)a9;

@end
