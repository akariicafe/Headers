@class LSBundleRecord;

@interface _LSCoreTypesRecordProxy : NSProxy <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LSBundleRecord *_realRecord;

+ (Class)classForKeyedUnarchiver;
+ (id)classFallbacksForKeyedArchiver;
+ (id)description;

- (id)dataContainerURL;
- (id)localizedShortName;
- (void)detach;
- (id)awakeAfterUsingCoder:(id)a0;
- (id)URL;
- (id)localizedUsageDescriptionForFeature:(unsigned long long)a0 preferredLocalizations:(id)a1;
- (id)SDKVersion;
- (id)machOUUIDs;
- (id)managedPersonas;
- (BOOL)isUPPValidated;
- (char)developerType;
- (void)forwardInvocation:(id)a0;
- (id)serviceRecords;
- (id)intentsRestrictedWhileProtectedDataUnavailable;
- (id)accentColorName;
- (id)_loadRealRecord;
- (id)intentDefinitionURLs;
- (id)replacementObjectForKeyedArchiver:(id)a0;
- (id)localizedShortNameWithPreferredLocalizations:(id)a0;
- (id)localizedNameWithPreferredLocalizations:(id)a0;
- (BOOL)isProfileValidated;
- (BOOL)isFreeProfileValidated;
- (id)localizedUsageDescriptionForFeature:(unsigned long long)a0;
- (id)intentsRestrictedWhileLocked;
- (BOOL)supportsNowPlaying;
- (id)replacementObjectForCoder:(id)a0;
- (id)signerOrganization;
- (id)supportedIntentMediaCategories;
- (id)UIBackgroundModes;
- (id)WKBackgroundModes;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (unsigned int)platform;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (id)entitlements;
- (BOOL)isMemberOfClass:(Class)a0;
- (Class)classForKeyedArchiver;
- (id)supportedIntents;
- (id)localizedName;
- (unsigned long long)hash;
- (BOOL)conformsToProtocol:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)applicationIdentifier;
- (BOOL)isEqual:(id)a0;
- (id)bundleIdentifier;
- (id)executableURL;
- (id)debugDescription;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;

@end
