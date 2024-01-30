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
@property (copy, nonatomic) NSArray *backgroundModes;
@property (copy, nonatomic) NSArray *architectureSlices;
@property (nonatomic) BOOL isLocallyAvailable;
@property (readonly, copy, nonatomic) NSString *applicationName;
@property (readonly, nonatomic) BOOL hasComplication;
@property (readonly, copy, nonatomic) NSDictionary *localizedInfoPlistStrings;

+ (id)localizedInfoPlistKeysLoadAnywhere;
+ (id)localizedInfoPlistKeysLoadAppOnly;

- (void)encodeWithCoder:(id)a0;
- (id)initForTesting;
- (BOOL)isSystemApp;
- (id)initWithCoder:(id)a0;
- (id)initWithSerializedDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)serialize;
- (id)counterpartIdentifiers;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isTheSameAppAs:(id)a0;
- (id)initWithApplicationRecord:(id)a0 databaseUUID:(id)a1 sequenceNumber:(unsigned long long)a2;
- (id)initWithBundleID:(id)a0 databaseUUID:(id)a1 sequenceNumber:(unsigned long long)a2;
- (BOOL)isCompatibleWithCPUType:(int)a0 subtype:(int)a1;
- (BOOL)isCompatibleWithOSVersion:(id)a0;
- (BOOL)isRuntimeCompatibleWithOSVersion:(id)a0;
- (id)serializeAsRemoteApplication;

@end
