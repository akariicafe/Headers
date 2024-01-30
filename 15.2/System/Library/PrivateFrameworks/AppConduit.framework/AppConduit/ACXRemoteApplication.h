@class NSString, NSDictionary, NSArray, MIStoreMetadata;

@interface ACXRemoteApplication : ACXSyncedApplication <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long applicationMode;
@property (copy, nonatomic) NSString *bundleVersion;
@property (copy, nonatomic) NSString *bundleShortVersion;
@property (copy, nonatomic) NSString *minimumOSVersion;
@property (copy, nonatomic) NSDictionary *requiredCapabilities;
@property (copy, nonatomic) NSString *watchKitVersion;
@property (copy, nonatomic) NSString *companionAppBundleID;
@property (copy, nonatomic) NSString *watchKitAppExecutableHash;
@property (copy, nonatomic) NSString *watchKitAppExtensionBundleID;
@property (nonatomic) BOOL isBetaApp;
@property (nonatomic) BOOL isProfileValidated;
@property (copy, nonatomic) NSString *teamID;
@property (copy, nonatomic) NSString *complicationPrincipalClass;
@property (copy, nonatomic) NSArray *supportedComplicationFamilies;
@property (copy, nonatomic) NSArray *intentsRestrictedWhileLocked;
@property (copy, nonatomic) NSArray *intentsSupported;
@property (copy, nonatomic) NSArray *userActivityTypes;
@property (nonatomic) BOOL hasClockfaces;
@property (copy, nonatomic) MIStoreMetadata *storeMetadata;
@property (copy, nonatomic) NSString *sdkVersion;
@property (nonatomic) BOOL supportsAlwaysOnDisplay;
@property (copy, nonatomic) NSArray *architectureSlices;
@property (nonatomic) BOOL isLocallyAvailable;
@property (readonly, copy, nonatomic) NSString *applicationName;
@property (readonly, nonatomic) BOOL hasComplication;
@property (readonly, copy, nonatomic) NSDictionary *localizedInfoPlistStrings;

+ (id)localizedInfoPlistKeysLoadAppOnly;
+ (id)localizedInfoPlistKeysLoadAnywhere;

- (id)initForTesting;
- (void)encodeWithCoder:(id)a0;
- (id)serialize;
- (id)description;
- (BOOL)isSystemApp;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)counterpartIdentifiers;
- (id)initWithBundleID:(id)a0 databaseUUID:(id)a1 sequenceNumber:(unsigned long long)a2;
- (id)initWithSerializedDictionary:(id)a0;
- (id)initWithApplicationRecord:(id)a0 databaseUUID:(id)a1 sequenceNumber:(unsigned long long)a2;
- (id)serializeAsRemoteApplication;
- (BOOL)isCompatibleWithOSVersion:(id)a0;
- (BOOL)isRuntimeCompatibleWithOSVersion:(id)a0;
- (BOOL)isCompatibleWithCPUType:(int)a0 subtype:(int)a1;
- (BOOL)isTheSameAppAs:(id)a0;

@end
