@class LSBundleRecord;

@interface _LSCoreTypesRecordProxy : NSProxy <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LSBundleRecord *_realRecord;

+ (id)classFallbacksForKeyedArchiver;
+ (id)description;
+ (Class)classForKeyedUnarchiver;

- (id)teamIdentifier;
- (id)localizedShortName;
- (id)executableURL;
- (id)awakeAfterUsingCoder:(id)a0;
- (id)localizedName;
- (id)dataContainerURL;
- (id)intentDefinitionURLs;
- (id)supportedIntents;
- (BOOL)isFreeProfileValidated;
- (id)serviceRecords;
- (id)supportedIntentMediaCategories;
- (void)detach;
- (id)managedPersonas;
- (id)signerOrganization;
- (id)SDKVersion;
- (BOOL)isUPPValidated;
- (id)applicationIdentifier;
- (BOOL)isKindOfClass:(Class)a0;
- (void)encodeWithCoder:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (unsigned int)platform;
- (id)signerIdentity;
- (id)accentColorName;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (id)description;
- (id)machOUUIDs;
- (id)localizedUsageDescriptionForFeature:(unsigned long long)a0;
- (id)replacementObjectForKeyedArchiver:(id)a0;
- (id)intentsRestrictedWhileProtectedDataUnavailable;
- (BOOL)wasBuiltWithThreadSanitizer;
- (id)_loadRealRecord;
- (id)replacementObjectForCoder:(id)a0;
- (id)localizedNameWithPreferredLocalizations:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)supportsNowPlaying;
- (id)init;
- (id)localizedShortNameWithPreferredLocalizations:(id)a0;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (id)WKBackgroundModes;
- (void)forwardInvocation:(id)a0;
- (id)intentsRestrictedWhileLocked;
- (id)entitlements;
- (char)developerType;
- (id)URL;
- (BOOL)conformsToProtocol:(id)a0;
- (BOOL)isProfileValidated;
- (id)bundleIdentifier;
- (unsigned long long)hash;
- (id)UIBackgroundModes;
- (id)localizedUsageDescriptionForFeature:(unsigned long long)a0 preferredLocalizations:(id)a1;
- (id)debugDescription;
- (Class)classForKeyedArchiver;

@end
