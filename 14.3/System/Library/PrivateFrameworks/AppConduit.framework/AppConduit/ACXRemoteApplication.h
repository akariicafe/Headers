@class NSString, NSDictionary, NSArray, NSUUID, MIStoreMetadata;

@interface ACXRemoteApplication : NSObject <ACXSyncedApp, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *applicationName;
@property (nonatomic) unsigned long long applicationType;
@property (nonatomic) unsigned long long applicationMode;
@property (nonatomic) BOOL isDeletable;
@property (copy, nonatomic) NSString *bundleVersion;
@property (copy, nonatomic) NSString *bundleShortVersion;
@property (copy, nonatomic) NSString *minimumOSVersion;
@property (copy, nonatomic) NSDictionary *requiredCapabilities;
@property (copy, nonatomic) NSString *watchKitVersion;
@property (copy, nonatomic) NSString *companionAppBundleID;
@property (copy, nonatomic) NSArray *counterpartIdentifiers;
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
@property (retain, nonatomic) NSUUID *databaseUUID;
@property (nonatomic) unsigned long long sequenceNumber;
@property (copy, nonatomic) NSDictionary *localizedInfoPlistStrings;
@property (copy, nonatomic) MIStoreMetadata *storeMetadata;
@property (copy, nonatomic) NSArray *architectureSlices;
@property (nonatomic) BOOL isLocallyAvailable;
@property (readonly, nonatomic) BOOL isSystemApp;
@property (readonly, nonatomic) BOOL hasComplication;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)serialize;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSerializedDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)localizedInfoPlistStringsForKeys:(id)a0 fetchingFirstMatchingLocalizationInList:(id)a1;
- (id)initWithBundleID:(id)a0 databaseUUID:(id)a1 sequenceNumber:(unsigned long long)a2;
- (id)initWithApplicationProxy:(id)a0 databaseUUID:(id)a1 sequenceNumber:(unsigned long long)a2;
- (id)serializeAsRemoteApplication;
- (BOOL)isCompatibleWithOSVersion:(id)a0;
- (BOOL)isRuntimeCompatibleWithOSVersion:(id)a0;
- (BOOL)isCompatibleWithCPUType:(int)a0 subtype:(int)a1;
- (BOOL)isTheSameAppAs:(id)a0;

@end
