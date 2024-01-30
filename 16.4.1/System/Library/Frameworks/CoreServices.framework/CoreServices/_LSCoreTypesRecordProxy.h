@class LSBundleRecord;

@interface _LSCoreTypesRecordProxy : NSProxy <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LSBundleRecord *_realRecord;

+ (Class)classForKeyedUnarchiver;
+ (id)description;
+ (id)classFallbacksForKeyedArchiver;

- (BOOL)isUPPValidated;
- (id)awakeAfterUsingCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)localizedShortName;
- (Class)classForKeyedArchiver;
- (id)localizedName;
- (BOOL)conformsToProtocol:(id)a0;
- (id)supportedIntents;
- (id)UIBackgroundModes;
- (id)supportedIntentMediaCategories;
- (id)intentDefinitionURLs;
- (void)detach;
- (char)developerType;
- (id)initWithCoder:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)URL;
- (Class)classForCoder;
- (id)dataContainerURL;
- (id)teamIdentifier;
- (id)SDKVersion;
- (BOOL)supportsNowPlaying;
- (id)executableURL;
- (id)localizedShortNameWithPreferredLocalizations:(id)a0;
- (id)intentsRestrictedWhileProtectedDataUnavailable;
- (id)intentsRestrictedWhileLocked;
- (id)entitlements;
- (id)localizedUsageDescriptionForFeature:(unsigned long long)a0 preferredLocalizations:(id)a1;
- (id)signerIdentity;
- (unsigned int)platform;
- (id)replacementObjectForCoder:(id)a0;
- (id)serviceRecords;
- (id)applicationIdentifier;
- (id)machOUUIDs;
- (id)debugDescription;
- (id)localizedUsageDescriptionForFeature:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)replacementObjectForKeyedArchiver:(id)a0;
- (id)managedPersonas;
- (id)signerOrganization;
- (unsigned long long)hash;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)wasBuiltWithThreadSanitizer;
- (id)_loadRealRecord;
- (BOOL)isKindOfClass:(Class)a0;
- (id)init;
- (id)bundleIdentifier;
- (id)accentColorName;
- (id)description;
- (BOOL)isProfileValidated;
- (id)localizedNameWithPreferredLocalizations:(id)a0;
- (id)WKBackgroundModes;
- (void).cxx_destruct;
- (BOOL)isFreeProfileValidated;
- (BOOL)isMemberOfClass:(Class)a0;
- (void)forwardInvocation:(id)a0;

@end
