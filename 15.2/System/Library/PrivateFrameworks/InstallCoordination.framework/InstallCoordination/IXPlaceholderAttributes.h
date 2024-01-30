@class NSString, NSDictionary, NSArray;

@interface IXPlaceholderAttributes : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL launchProhibited;
@property (copy, nonatomic) NSString *bundleVersion;
@property (copy, nonatomic) NSDictionary *extensionDictionary;
@property (copy, nonatomic) NSDictionary *exAppExtensionAttributes;
@property (copy, nonatomic) NSString *minimumOSVersion;
@property (copy, nonatomic) NSDictionary *requiredDeviceCapabilities;
@property (copy, nonatomic) NSArray *sbAppTags;
@property (copy, nonatomic) NSArray *lsCounterpartIdentifiers;
@property (copy, nonatomic) NSString *sbIconMasqueradeIdentifier;
@property (copy, nonatomic) NSString *companionBundleIdentifierForWatchApp;
@property (nonatomic) BOOL watchOnlyApp;
@property (nonatomic) BOOL runsIndependentlyOfCompanionApp;
@property (nonatomic) BOOL arcadeApp;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithInfoPlistFromBundle:(struct __CFBundle { } *)a0 error:(id *)a1;
- (id)_plistKeys;
- (id)initWithInfoPlistDictionary:(id)a0;
- (void)setRequiredDeviceCapabilitiesWithArray:(id)a0;
- (id)infoPlistContent;
- (id)initWithInfoPlistFromBundleURL:(id)a0 error:(id *)a1;

@end
